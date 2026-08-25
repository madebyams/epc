#pragma once

#include <rapidxml.hpp>

#include "events/start_event.hh"

class start_event_extractor {
public:
  start_event
  extract(
   rapidxml::xml_node<>* process_node
  );
};
