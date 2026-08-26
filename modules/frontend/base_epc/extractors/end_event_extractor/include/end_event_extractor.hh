#pragma once

#include <rapidxml.hpp>

#include "extractor.hh"
#include "parser_context.hh"
#include "events/end_event.hh"

class end_event_extractor : public extractor{
public:
  void
  extract(parser_context& parser_context) override;
};
