#include "conjunctor_extractor.hh"

#include "conjunctors/split_conjunctor.hh"
#include "conjunctors/join_conjunctor.hh"


void
conjunctor_extractor::extract(
  parser_context& parser_context
) {
  for(auto conjunctor_node =
      parser_context
      .process_node
        ->first_node("XORSplit");
      conjunctor_node;
      conjunctor_node =
	conjunctor_node->next_sibling("XORSplit")
      ) {
    xor_split xor_split{};
    xor_split.id =
      conjunctor_node
      ->first_attribute("id")
      ->value();

    xor_split.name =
      conjunctor_node
      ->first_attribute("name")
      ->value();
    
    parser_context
      .result
      .nodes[xor_split.id] =
      xor_split;
  }


  for(auto conjunctor_node =
      parser_context
      .process_node
        ->first_node("XORJoin");
      conjunctor_node;
      conjunctor_node =
	conjunctor_node->next_sibling("XORJoin")
      ) {
    xor_join xor_join{};
    xor_join.id =
      conjunctor_node
      ->first_attribute("id")
      ->value();

    xor_join.name =
      conjunctor_node
      ->first_attribute("name")
      ->value();

    parser_context
      .result
      .nodes[xor_join.id] =
      xor_join;
  }

  for(auto conjunctor_node =
      parser_context
      .process_node
        ->first_node("ORSplit");
      conjunctor_node;
      conjunctor_node =
	conjunctor_node->next_sibling("ORSplit")
      ) {
    or_split or_split{};
    or_split.id =
      conjunctor_node
      ->first_attribute("id")
      ->value();

    or_split.name =
      conjunctor_node
      ->first_attribute("name")
      ->value();

    parser_context
      .result
      .nodes[or_split.id] =
      or_split;
  }


  for(auto conjunctor_node =
      parser_context
      .process_node
        ->first_node("ORJoin");
      conjunctor_node;
      conjunctor_node =
	conjunctor_node->next_sibling("ORJoin")
      ) {
    or_join or_join{};
    or_join.id =
      conjunctor_node
      ->first_attribute("id")
      ->value();

    or_join.name =
      conjunctor_node
      ->first_attribute("name")
      ->value();

    parser_context
      .result
      .nodes[or_join.id] =
      or_join;
  }

  for(auto conjunctor_node =
      parser_context
      .process_node
        ->first_node("ANDSplit");
      conjunctor_node;
      conjunctor_node =
	conjunctor_node->next_sibling("ANDSplit")
      ) {
    and_split and_split{};
    and_split.id =
      conjunctor_node
      ->first_attribute("id")
      ->value();

    and_split.name =
      conjunctor_node
      ->first_attribute("name")
      ->value();
    
    parser_context
      .result
      .nodes[and_split.id] =
      and_split;
  }


  for(auto conjunctor_node =
      parser_context
      .process_node
        ->first_node("ANDJoin");
      conjunctor_node;
      conjunctor_node =
	conjunctor_node->next_sibling("ANDJoin")
      ) {
    and_join and_join{};
    and_join.id =
      conjunctor_node
      ->first_attribute("id")
      ->value();

    and_join.name =
      conjunctor_node
      ->first_attribute("name")
      ->value();

    parser_context
      .result
      .nodes[and_join.id] =
      and_join;
  }
}
