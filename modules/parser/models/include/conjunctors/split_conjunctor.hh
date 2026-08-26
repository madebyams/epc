#pragma once

#include "conjunctor.hh"

struct split_conjunctor : conjunctor {};
struct and_split : split_conjunctor { and_split() { name = "AND"; } };
struct or_split : split_conjunctor { or_split() { name = "OR"; } };
struct xor_split : split_conjunctor { xor_split() { name = "XOR"; } };
