#pragma once

#include "parser_context.hh"

class extractor {
public:
  virtual void
  extract(parser_context& parser_context) = 0;
};
