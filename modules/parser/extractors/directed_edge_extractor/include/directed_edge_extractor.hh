#pragma once

#include "parser_context.hh"
#include "extractor.hh"
#include "process.hh"

class directed_edge_extractor : public extractor{
public:
  void
  extract(parser_context& parser_context) override;
};
