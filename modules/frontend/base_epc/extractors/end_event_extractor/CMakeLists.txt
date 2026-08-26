add_library(end_event_extractor
	end_event_extractor.cc
)

target_include_directories(end_event_extractor
PUBLIC
	"include"
)

target_link_libraries(end_event_extractor
PUBLIC
	rapidxml::rapidxml

  extractor
  parser_models
)
