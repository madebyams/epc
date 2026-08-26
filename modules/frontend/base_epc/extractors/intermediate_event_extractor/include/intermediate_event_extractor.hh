#pragma once

#include "events/intermediate_event.hh"
#include "extractor.hh"
#include "parser_context.hh"

class intermediate_event_extractor : public extractor {
public:
  void
  extract(
   parser_context& parser_context
  ) override;
};
