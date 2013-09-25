/*
  Research carried out within the scope of the Associated International Laboratory: Joint Japanese-French Robotics Laboratory (JRL)
 
  Developed by Mathieu Poirier (LAAS-CNRS)
 
*/



#include <hpp/kwsio/mat.hh>



// ==========================================================================


std::ostream& operator<<(std::ostream& os, const CkitMat4& M)
{
 
  os << std::endl ;
  for (int i =0; i<4; i++) {
    for (int j =0; j<4; j++) {
      os << M.getComponent(i,j) << "\t";
    }
    os << std::endl ;
  }

  return os;
}






// ==========================================================================

std::ostream& operator<<(std::ostream& os, const CkitVect3& V)
{
  
  os << std::endl ;
  for(int i=0 ; i<3 ; i++) {
    os << V[i] << "\t" ;
  }
  os << std::endl ;

  return os;
}



