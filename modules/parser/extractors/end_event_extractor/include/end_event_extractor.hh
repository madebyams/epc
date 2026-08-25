#pragma once

#include <rapidxml.hpp>

#include "events/end_event.hh"

class end_event_extractor {
public:
  end_event
  extract(rapidxml::xml_node<>* process_node);
};
