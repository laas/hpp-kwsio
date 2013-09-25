//
// C++ Interface: kwsioConfig
//
// Description: 
//
//
// Author: Alireza Nakhaei,B63,6946 <anakhaei@lucignolo>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef HPP_KWSIO_CONFIGURATION_HH
#define HPP_KWSIO_CONFIGURATION_HH

#include <iostream>

#include "KineoWorks2/kwsInterface.h"
#include "KineoUtility/kitInterface.h"
#include "kcd2/kcdInterface.h"
#include "kwsKcd2/kwsKCDBody.h"

/**
  \brief Write a config in a stream.
*/
std::ostream& operator<<(std::ostream& os, const CkwsConfig& config);

/**
  \brief Read a config in a stream.
*/
std::istream& operator>>(std::istream& is, CkwsConfig& config);

#endif // HPP_KWSIO_CONFIGURATION_HH
