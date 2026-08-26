#include "task_extractor.hh"

#include <vector>

void
task_extractor::extract(
 parser_context& parser_context
) {
  for(auto task_node =
        parser_context.process_node->first_node("Task");
      task_node;
      task_node = task_node->next_sibling("Task")) {
    task task;
    task.id = task_node->first_attribute("id")->value();
    task.name = task_node->first_attribute("name")->value();

   parser_context
     .result
     .nodes[task.id] = task;
  }
}
