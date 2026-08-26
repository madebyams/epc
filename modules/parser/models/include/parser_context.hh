#pragma once

#include "process.hh"

#include <rapidxml.hpp>

struct parser_context {
  rapidxml::xml_node<>* process_node;
  process result{};
};
