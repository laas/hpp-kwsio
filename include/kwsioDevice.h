//
// Author: Florent Lamiraux
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef KWSIO_DEVICE_H
#define KWSIO_DEVICE_H

#include <iostream>

#include "KineoWorks2/kwsInterface.h"
#include "KineoUtility/kitInterface.h"
#include "kcd2/kcdInterface.h"
#include "kwsKcd2/kwsKCDBody.h"

/**
  \brief Write a device in a stream.
*/
std::ostream& operator<<(std::ostream& os, const CkwsDevice& inDevice);

#endif
