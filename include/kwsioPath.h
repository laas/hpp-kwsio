//
// C++ Interface: kwsioPath
//
// Description: 
//
//
// Author: Alireza Nakhaei,B63,6946 <anakhaei@lucignolo>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef KWSIOPATH_H
#define KWSIOPATH_H

#include <iostream>

#include "KineoWorks2/kwsInterface.h"
#include "KineoUtility/kitInterface.h"
#include "kcd2/kcdInterface.h"
#include "kwsKcd2/kwsKCDBody.h"

/**
	@author Alireza Nakhaei,B63,6946 
*/
class CkwsioPath{
public:
    CkwsioPath(const CkwsPathShPtr& inKwsPath, double inSamplingStep);

    ~CkwsioPath();

  /**
     \brief Get sampling step.
  */
  double samplingStep() const { return attSamplingStep; };

  /**
     \brief Get Path.
  */
  const CkwsPathShPtr& kwsPath() const { return attKwsPath; };

private:
    /** 
    \brief Sampling step for writing the path in a file.
    */
    CkwsPathShPtr attKwsPath;
    double attSamplingStep;
};

/**
   \brief Write a CkwsPath in a file.
   
   Sample the path and write one configuration per line. The sample step is given by CkwsioPath::attSamplinStep.
*/
#if 0
std::ostream& CkwsioPath::operator<<(std::ostream& os) const;
#else
std::ostream& operator<<(std::ostream&, const CkwsioPath& ioPath);
#endif

#endif
