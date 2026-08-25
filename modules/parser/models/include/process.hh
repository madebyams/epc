#pragma once

#include "node.hh"
#include "events/start_event.hh"
#include "events/end_event.hh"

#include <unordered_map>
#include <vector>

using node_map =
  std::unordered_map<std::string, node>;

using adjacence_map =
  std::unordered_map<std::string, std::vector<std::string>>;  

struct process {
  start_event start;
  end_event end;
  node_map nodes{};
  adjacence_map directed_edges{};
};
