add_library(directed_edge_extractor
	directed_edge_extractor.cc
)

target_include_directories(directed_edge_extractor
PUBLIC
	"include"
)

target_link_libraries(directed_edge_extractor
PUBLIC
	parser_models
	
	rapidxml::rapidxml
	spdlog::spdlog
)
