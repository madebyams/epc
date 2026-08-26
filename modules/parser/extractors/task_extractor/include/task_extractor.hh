#pragma once

#include "parser_context.hh"
#include "extractor.hh"
#include "task.hh"

class task_extractor : public extractor {
public:
  void
  extract(
   parser_context& parser_context
  );
};
