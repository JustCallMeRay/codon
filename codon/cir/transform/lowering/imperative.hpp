// Copyright (C) 2022-2024 Exaloop Inc. <https://exaloop.io>

#pragma once

#include "codon/cir/transform/pass.hpp"

namespace codon {
namespace ir {
namespace transform {
namespace lowering {

class ImperativeForFlowLowering : public OperatorPass {
public:
  static const std::string KEY;
  std::string getKey() const override { return KEY; }
  void handle(ForFlow *v) override;
};

} // namespace lowering
} // namespace transform
} // namespace ir
} // namespace codon
