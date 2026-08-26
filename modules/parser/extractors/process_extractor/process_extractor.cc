#include "process_extractor.hh"

#include <rapidxml.hpp>
#include <spdlog/spdlog.h>

#include "process.hh"

#include "task_extractor.hh"
#include "start_event_extractor.hh"
#include "intermediate_event_extractor.hh"
#include "end_event_extractor.hh"
#include "directed_edge_extractor.hh"
#include "conjunctor_extractor.hh"

process
process_extractor::extract(
  std::string file_content
){
  rapidxml::xml_document<> doc;
  process process{};
  start_event_extractor start_event_extractor{};
  end_event_extractor end_event_extractor{};
  intermediate_event_extractor intermediate_event_extractor {};
  task_extractor task_extractor{};
  directed_edge_extractor directed_edge_extractor{};
  conjunctor_extractor conjunctor_extractor{}; 
  
  doc.parse<0>(
   const_cast<char*>(file_content.c_str())
  );
  auto process_node = doc.first_node("Process");

  process.start =
    start_event_extractor.extract(process_node);

  process
    .nodes[process.start.id] = process.start;
  
  process.end =
    end_event_extractor.extract(process_node);

  process
    .nodes[process.end.id] = process.end;

  for(auto task :
	task_extractor.extract(process_node)) {
	process.nodes[task.id] = task;   
  }

  for(auto intermediate_event:
	intermediate_event_extractor
	.extract(process_node)
  ) {
    process.nodes[intermediate_event.id] =
      intermediate_event;
  }

  process.directed_edges =
    directed_edge_extractor.extract(process_node);

  for(auto conjunctor:
	conjunctor_extractor
	.extract(process_node)
  ) {
    process.nodes[conjunctor.id] =
      conjunctor;
  }
  
  return process;
}

