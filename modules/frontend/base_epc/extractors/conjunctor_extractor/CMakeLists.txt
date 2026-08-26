add_library(conjunctor_extractor
	conjunctor_extractor.cc
)

target_include_directories(conjunctor_extractor
PUBLIC
	"include"
)

target_link_libraries(conjunctor_extractor
PUBLIC
  extractor

  parser_models
	rapidxml::rapidxml
)
