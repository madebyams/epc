add_library(task_extractor
	task_extractor.cc
)

target_include_directories(task_extractor
PUBLIC
	"include"
)

target_link_libraries(task_extractor
PUBLIC
	rapidxml::rapidxml

  extractor
  parser_models
)
