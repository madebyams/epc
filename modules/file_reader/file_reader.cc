#include "file_reader.hh"

#include <fstream>
#include <sstream>
#include <spdlog/spdlog.h>

file_reader::file_reader() {}

std::string
file_reader::read_file(
 std::string path
) {
  size_t file_size;
  std::stringstream content;
  std::ifstream input_file;

  spdlog::debug("Compiling {}", path);
  
  file_size = std::filesystem::file_size(path);
  input_file.open(path);
  content << input_file.rdbuf();
  input_file.close();

  return content.str();
}
