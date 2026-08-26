#include "process_extractor.hh"

#include <spdlog/spdlog.h>

process
process_extractor::extract(
  std::string file_content
){
  doc.parse<0>(
   const_cast<char*>(file_content.c_str())
  );
  parser_context_.
    process_node = doc.first_node("Process");

  start_event_extractor_.extract(parser_context_);
  end_event_extractor_.extract(parser_context_);
  task_extractor_.extract(parser_context_);
  intermediate_event_extractor_
    .extract(parser_context_);

  directed_edge_extractor_.extract(parser_context_);
  conjunctor_extractor_.extract(parser_context_);

  return parser_context_.result;
}

