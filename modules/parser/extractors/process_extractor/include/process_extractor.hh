#pragma once

#include <string>

#include "process.hh"

class process_extractor {
public:
  process extract(std::string file_content);
};
