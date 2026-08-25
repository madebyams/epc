#include "task_extractor.hh"

std::vector<task>
task_extractor::extract(
 rapidxml::xml_node<>* process_node
) {
  std::vector<task> tasks{};
  
  for(auto task_node = process_node->first_node("Task");
      task_node; task_node = task_node->next_sibling("Task")) {
    task task;
    task.id = task_node->first_attribute("id")->value();
    task.name = task_node->first_attribute("name")->value();

    tasks.push_back(task);
  }

  return tasks;
}
