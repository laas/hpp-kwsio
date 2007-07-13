//
// C++ Implementation: kwsioConfig
//
// Description: 
//
//
// Author: Alireza Nakhaei,B63,6946 <anakhaei@lucignolo>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "kwsioConfig.h"



std::ostream& operator<<(std::ostream& os, const CkwsConfig& config)
{
  std::vector<double> vec;
  config.getDofValues(vec);
  unsigned int dim = config.size();
  
  for (unsigned int i=0; i < dim; i++) {
    os << vec[i] << " ";
  }
  return os;
}


std::istream& operator>>(std::istream& is, CkwsConfig& config)
{
  std::vector<double> vec;
  unsigned int dim = config.size();
  double value;
  
  for (unsigned int i=0; i<dim; i++) {
    is >> value;
    vec.push_back(value);
  }
  config.setDofValues(vec);
  return is;
}
