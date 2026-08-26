#pragma once

#include <string>

#include <rapidxml.hpp>

#include "process.hh"
#include "task_extractor.hh"
#include "start_event_extractor.hh"
#include "intermediate_event_extractor.hh"
#include "end_event_extractor.hh"
#include "directed_edge_extractor.hh"
#include "conjunctor_extractor.hh"

#include "parser_context.hh"


class process_extractor {
public:
  process extract(std::string file_content);
private:
  rapidxml::xml_document<> doc;
  parser_context parser_context_{};

  start_event_extractor
    start_event_extractor_{};

  end_event_extractor
    end_event_extractor_{};

  intermediate_event_extractor
    intermediate_event_extractor_{};

  task_extractor
    task_extractor_{};

  directed_edge_extractor
    directed_edge_extractor_{};

  conjunctor_extractor
    conjunctor_extractor_{};

};
