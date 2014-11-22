//===- PrivLinuxAnalysis.cpp - Analyze Privilege Use on Linux ------------- --//
// 
//                          The Privilege Analysis Compiler 
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

#define DEBUG_TYPE "priv-linux"

#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/InstrTypes.h"
#include "llvm/IR/Instruction.h"
#include "llvm/IR/Instructions.h"
#include "llvm/PrivAnalysisLinux.h"

#include <iostream>

#include <linux/capability.h>

namespace llvm {

// Identifier variable for the pass
char PrivLinux::ID = 0;

// Statistics
STATISTIC (Changes,    "Number of System Call Sites with Privileges");

// Register the pass
static RegisterPass<PrivLinux> P ("priv-linux", "Linux Privilege Analysis");

};

