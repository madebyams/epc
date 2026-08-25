#pragma once

#include <rapidxml.hpp>

#include "process.hh"

class directed_edge_extractor {
public:
  adjacence_map
  extract(rapidxml::xml_node<>* process_node);
};
