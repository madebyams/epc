add_library(intermediate_event_extractor
	intermediate_event_extractor.cc
)

target_include_directories(intermediate_event_extractor
PUBLIC
	"include"
)

target_link_libraries(intermediate_event_extractor
PUBLIC
  rapidxml::rapidxml

  extractor
	parser_models
)
