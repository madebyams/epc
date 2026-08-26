add_library(process_extractor
	process_extractor.cc
)

target_include_directories(process_extractor
PUBLIC
	"include"
)

target_link_libraries(process_extractor
PUBLIC
  parser_models
	start_event_extractor
	end_event_extractor
	intermediate_event_extractor
	task_extractor
	directed_edge_extractor
	conjunctor_extractor

	rapidxml::rapidxml
	spdlog::spdlog
)
