#pragma once

#include <string>
#include <vector>

#include "executable.hh"
#include "executable_list.hh"

struct executable_group : exeuctable {
  std::string split_id;
  std::vector<executable_list> group;
};
