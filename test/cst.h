/*
   DDS, a bridge double dummy solver.

   Copyright (C) 2006-2014 by Bo Haglund /
   2014-2018 by Bo Haglund & Soren Hein.

   See LICENSE and README.
*/

#ifndef DTEST_CST_H
#define DTEST_CST_H

#include <string>
#include <vector>


enum Solver
{
  DTEST_SOLVER_SOLVE = 0,
  DTEST_SOLVER_CALC = 1,
  DTEST_SOLVER_PLAY = 2,
  DTEST_SOLVER_PAR = 3,
  DTEST_SOLVER_DEALERPAR = 4,
  DTEST_SOLVER_SIZE = 5
};

enum Threading
{
  DTEST_THREADING_NONE = 0,
  DTEST_THREADING_WINAPI = 1,
  DTEST_THREADING_OPENMP = 2,
  DTEST_THREADING_GCD = 3,
  DTEST_THREADING_BOOST = 4,
  DTEST_THREADING_STL = 5,
  DTEST_THREADING_TBB = 6,
  DTEST_THREADING_STLIMPL = 7,
  DTEST_THREADING_PPLIMPL = 8,
  DTEST_THREADING_STLASYNC = 9,
  DTEST_THREADING_DEFAULT = 10,
  DTEST_THREADING_SIZE = 11
};

struct OptionsType
{
  std::vector<std::string> fname;
  std::vector<Solver> solver;
  int numThreads;
  int memoryMB;
};

#endif

