#pragma once

#include <vector>

#include <rapidxml.hpp>

#include "conjunctors/conjunctor.hh"

class conjunctor_extractor {
public:
  std::vector<conjunctor>
  extract(rapidxml::xml_node<>* process_node);
};
