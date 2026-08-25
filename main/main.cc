#include <iostream>
#include <filesystem>
#include <fstream>
#include <sstream>

#include <spdlog/spdlog.h>
#include <spdlog/cfg/env.h>

#include "argument_parser.hh"
#include "file_reader.hh"
#include "process_extractor.hh"

int
main(
     int argc,
     char** argv
) {
  argument_parser argument_parser{argc, argv};
  file_reader file_reader{};
  process_extractor process_extractor{};
  spdlog::cfg::load_env_levels();

  auto filename = argument_parser
    .parser
    .get("file");
  
  auto content = file_reader
    .read_file(filename);

  process process = process_extractor
    .extract(content);

  
  return 0;
}
