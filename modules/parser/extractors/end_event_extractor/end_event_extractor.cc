#include "end_event_extractor.hh"

end_event
end_event_extractor::extract(
  rapidxml::xml_node<>* process_node
) {
  end_event end_event{};
  auto end_event_node =
    process_node->first_node("EndEvent");

  end_event.id =
    end_event_node->first_attribute("id")->value();

  end_event.name =
    end_event_node->first_attribute("name")->value();

  return end_event;
}
