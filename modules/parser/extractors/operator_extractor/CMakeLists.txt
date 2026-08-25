add_library(operator_extractor
	operator_extractor.cc
)

target_include_directories(operator_extractor
PUBLIC
	"include"
)

target_link_libraries(operator_extractor
PUBLIC
	parser_models
	rapidxml::rapidxml
)
