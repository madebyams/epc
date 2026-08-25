#pragma once

#include <vector>

#include <rapidxml.hpp>

#include "task.hh"

class task_extractor {
public:
  std::vector<task>
  extract(
   rapidxml::xml_node<>* process_node
  );
};
