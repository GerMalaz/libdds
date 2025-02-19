/*
   DDS, a bridge double dummy solver.

   Copyright (C) 2006-2014 by Bo Haglund /
   2014-2018 by Bo Haglund & Soren Hein.

   See LICENSE and README.
*/

#ifndef DDS_PLAYANALYSER_H
#define DDS_PLAYANALYSER_H

#include <vector>

#include "dds.h"

using namespace std;

class Scheduler;

void PlaySingleCommon(paramType &param,
  const int thrId,
  const int bno);

void PlayChunkCommon(paramType &param,
  const int thrId,
  Scheduler &scheduler);

void DetectPlayDuplicates(
  const boards& bds,
  vector<int>& uniques,
  vector<int>& crossrefs);

void CopyPlaySingle(paramType &,
  const vector<int>& crossrefs);

#endif
