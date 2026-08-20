#pragma once
class argument_parser {
public:
  argparse::ArgumentParser parser;
  
  argument_parser(int argc, char** argv);
private:
  int argc;
  char** argv;
};
