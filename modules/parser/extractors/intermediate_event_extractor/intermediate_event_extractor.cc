#include "intermediate_event_extractor.hh"

void
intermediate_event_extractor::extract(
 parser_context& parser_context
) {
  for(
      auto intermediate_event_node =
        parser_context.process_node
        ->first_node("IntermediateEvent");
      intermediate_event_node;
      intermediate_event_node =
        intermediate_event_node
        ->next_sibling("IntermediateEvent")
      ) {
    intermediate_event intermediate_event;
    intermediate_event.id =
      intermediate_event_node->first_attribute("id")->value();
    intermediate_event.name =
      intermediate_event_node->first_attribute("name")->value();

    parser_context
    .result
       .nodes[intermediate_event.id] =
      intermediate_event;
  }
}
