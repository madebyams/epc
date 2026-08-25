#pragma once

#include <string>

#include "argument_parser.hh"

class file_reader {
public:
  file_reader();

  std::string
  read_file(std::string path);

private:
};
