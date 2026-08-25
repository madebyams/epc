add_library(start_event_extractor
	start_event_extractor.cc
)

target_include_directories(start_event_extractor
PUBLIC
	"include"
)

target_link_libraries(start_event_extractor
PUBLIC
	rapidxml::rapidxml
	spdlog::spdlog
	
	parser_models
)
