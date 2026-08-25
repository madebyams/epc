add_executable(main
	main.cc
)

target_link_libraries(main
PUBLIC
	spdlog::spdlog

	argument_parser
	file_reader
	process_extractor
)
