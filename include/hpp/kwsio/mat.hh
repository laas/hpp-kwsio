/*
  Research carried out within the scope of the Associated International Laboratory: Joint Japanese-French Robotics Laboratory (JRL)
 
  Developed by Mathieu Poirier (LAAS-CNRS)
 
*/

#ifndef  HPP_KWSIO_MAT_HH
#define  HPP_KWSIO_MAT_HH

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



#endif // HPP_KWSIO_MAT_HH



/**
@} 
*/
