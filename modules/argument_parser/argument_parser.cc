#include "argument_parser.hh"

argument_parser::argument_parser(
  int argc,
  char** argv)
  :argc{argc}, argv{argv}, parser{"epc"} {

  parser.add_argument("file")
    .required()
    .help("The process file path");

  parser.parse_args(argc, argv);
}
