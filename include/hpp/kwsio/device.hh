//
// Author: Florent Lamiraux
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef HPP_KWSIO_DEVICE_HH
#define HPP_KWSIO_DEVICE_HH

#include <iostream>

#include "KineoWorks2/kwsInterface.h"
#include "KineoUtility/kitInterface.h"
#include "kcd2/kcdInterface.h"
#include "kwsKcd2/kwsKCDBody.h"

/**
  \brief Write a device in a stream.
*/
std::ostream& operator<<(std::ostream& os, const CkwsDevice& inDevice);

#endif // HPP_KWSIO_DEVICE_HH
