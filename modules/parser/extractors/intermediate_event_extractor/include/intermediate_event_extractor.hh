#pragma once

#include "events/intermediate_event.hh"

#include <vector>

#include <rapidxml.hpp>

class intermediate_event_extractor {
public:
  std::vector<intermediate_event>
  extract(
   rapidxml::xml_node<>* process_node
  );
};
