#pragma once

#include <string>

#include "argument_parser.hh"

class file_reader {
public:
  file_reader(argument_parser& argument_parser);
private:
  std::string read_file(std::string path);
};
