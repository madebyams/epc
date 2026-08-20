#include <iostream>
#include <filesystem>
#include <fstream>
#include <sstream>

#include <argparse/argparse.hpp>
#include <rapidxml.hpp>
#include <spdlog/spdlog.h>
#include <spdlog/cfg/env.h>


int main(int argc, char** argv) {
  spdlog::cfg::load_env_levels();
 
  auto content = read_file(parser.get("file"));
  extract_process(content);
  return 0;
}
