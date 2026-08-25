#include "start_event_extractor.hh"

start_event
start_event_extractor::extract(
  rapidxml::xml_node<>* process_node
) {
  start_event start_event;
  auto start_node =
    process_node->first_node("StartEvent");

  start_event.id =
    start_node->first_attribute("id")->value();

  start_event.name =
    start_node->first_attribute("name")->value();

  return start_event;
}
