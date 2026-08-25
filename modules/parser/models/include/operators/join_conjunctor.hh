#pragma once

#include "conjunctor.hh"

struct join_conjunctor : conjunctor {};

struct and_join : join_conjunctor { and_join() { name = "AND"; } };
struct or_join : join_conjunctor { or_join() { name = "OR"; } };
struct xor_join : join_conjunctor { xor_join() { name = "XOR"; } };

