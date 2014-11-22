//===- PrivLinuxAnalysis.h - Analyze Privilege Use on Linux --------------- --//
// 
//                     The Privilege Analysis Compiler 
//
// This file was developed by the LLVM research group and is distributed under
// the University of Illinois Open Source License. See LICENSE.TXT for details.
// 
//===----------------------------------------------------------------------===//
//
// This file implements a pass that infers the privileges needed on a Linux
// system.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_PRIVANALYSISLINUX_H
#define LLVM_PRIVANALYSISLINUX_H

#include "llvm/IR/Module.h"
#include "llvm/Pass.h"

namespace llvm {

class PrivAnalysisLinux : public ModulePass {
  public:
    static char ID;
    PrivAnalysisLinux() : ModulePass(ID) {
      return;
    }
    virtual bool runOnModule (Module & M);
    virtual void getAnalysisUsage(AnalysisUsage &AU) const {
      return;
    }
    const char *getPassName() const {
      return "Rewrite OOB Pass";
    }
  };
};

#endif
