#include "process_extractor.hh"


void process_extractor::extract_process(
  std::string file_content) {
  rapidxml::xml_document<> doc;
  doc.parse<0>(
   const_cast<char*>(file_content.c_str())
  );

  auto process_node = doc.first_node("Process");
  spdlog::debug("Element name {}",
   process_node->name()
  );
  
}
