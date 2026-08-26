#pragma once

#include <rapidxml.hpp>

#include "extractor.hh"
#include "conjunctors/conjunctor.hh"
#include "parser_context.hh"

class conjunctor_extractor : public extractor {
public:
  void
  extract(parser_context& parser_context) override;
};
