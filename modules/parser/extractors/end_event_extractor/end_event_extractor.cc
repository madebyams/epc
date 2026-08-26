#include "end_event_extractor.hh"

void
end_event_extractor::extract(
  parser_context& parser_context
) {
  end_event end_event{};
  auto end_event_node =
    parser_context.process_node->first_node("EndEvent");

  end_event.id =
    end_event_node->first_attribute("id")->value();

  end_event.name =
    end_event_node->first_attribute("name")->value();

  parser_context
    .result
    .end = end_event;

  parser_context
    .result
    .nodes[end_event.id] = end_event;
}
