#include "start_event_extractor.hh"

void
start_event_extractor::extract(
  parser_context& parser_context
) {
  start_event start_event;
  auto start_node =
    parser_context.process_node->first_node("StartEvent");

  start_event.id =
    start_node->first_attribute("id")->value();

  start_event.name =
    start_node->first_attribute("name")->value();

  parser_context
    .result
    .start = start_event;

  parser_context
    .result
    .nodes[start_event.id] = start_event;
}
