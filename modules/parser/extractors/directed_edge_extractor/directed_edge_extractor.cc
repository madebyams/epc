#include "directed_edge_extractor.hh"

#include <spdlog/spdlog.h>

adjacence_map
directed_edge_extractor::extract(
  rapidxml::xml_node<>* process_node
) {
  adjacence_map
    directed_edges {};

  for(auto directed_edge_node = process_node->first_node("Edge"); directed_edge_node; directed_edge_node = directed_edge_node->next_sibling("Edge")) {
    std::string source =
      directed_edge_node->first_attribute("source")->value();

    std::string target =
      directed_edge_node->first_attribute("target")->value();
    
    directed_edges[source]
      .push_back(target);
  }

  return directed_edges;
}
