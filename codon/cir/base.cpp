// Copyright (C) 2022-2024 Exaloop Inc. <https://exaloop.io>

#include "base.hpp"

#include "codon/cir/types/types.hpp"
#include "codon/cir/util/format.hpp"
#include "codon/cir/value.hpp"
#include "codon/cir/var.hpp"

namespace codon {
namespace ir {

id_t IdMixin::currentId = 0;

void IdMixin::resetId() { currentId = 0; }

const char Node::NodeId = 0;

std::ostream &operator<<(std::ostream &os, const Node &other) {
  return util::format(os, &other);
}

int Node::replaceUsedValue(Value *old, Value *newValue) {
  return replaceUsedValue(old->getId(), newValue);
}

int Node::replaceUsedType(types::Type *old, types::Type *newType) {
  return replaceUsedType(old->getName(), newType);
}

int Node::replaceUsedVariable(Var *old, Var *newVar) {
  return replaceUsedVariable(old->getId(), newVar);
}

} // namespace ir
} // namespace codon
