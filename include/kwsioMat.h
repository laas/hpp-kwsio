/*
  Research carried out within the scope of the Associated International Laboratory: Joint Japanese-French Robotics Laboratory (JRL)
 
  Developed by Mathieu Poirier (LAAS-CNRS)
 
*/

#ifndef  __KWS_IO_PRINT_MAT_H__
#define  __KWS_IO_PRINT_MAT_H__

#include <iostream>
#include "KineoWorks2/kwsConfig.h"
#include "KineoUtility/kitMat4.h"
#include "KineoUtility/kitVect3.h"


/**
  \brief Write a Ckitmat4 in a stream.
*/
std::ostream& operator<<(std::ostream& os, const CkitMat4& kitMat4);



/**
  \brief Write a CkitVect3 in a stream.
*/
std::ostream& operator<<(std::ostream& os, const CkitVect3& kitVect3);



#endif



/**
@} 
*/
