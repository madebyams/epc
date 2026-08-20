add_library(argument_parser
	argument_parser.cc
)

target_include_directories(argument_parser
PUBLIC
	"include"
)

target_link_libraries(argument_parser
PUBLIC
	argparse::argparse
)
