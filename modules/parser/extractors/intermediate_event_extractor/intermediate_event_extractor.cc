#include "intermediate_event_extractor.hh"

std::vector<intermediate_event>
intermediate_event_extractor::extract(
 rapidxml::xml_node<>* process_node
) {
  std::vector<intermediate_event>
    intermediate_events {};

  for(auto intermediate_event_node = process_node->first_node("IntermediateEvent");
      intermediate_event_node;
      intermediate_event_node = intermediate_event_node->next_sibling("IntermediateEvent")) {
    intermediate_event intermediate_event;
    intermediate_event.id =
      intermediate_event_node->first_attribute("id")->value();
    intermediate_event.name =
      intermediate_event_node->first_attribute("name")->value();

    intermediate_events.push_back(
     intermediate_event
    );
  }

  return intermediate_events;
}
