//
// Author: Florent Lamiraux LAAS-CNRS
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "kwsioDevice.h"



std::ostream& operator<<(std::ostream& os, const CkwsDevice& inDevice)
{
  unsigned int nbDofs = inDevice.countDofs();
  unsigned int nbExtraDofs = inDevice.countExtraDofs();

  os << "Number of dofs:" << nbDofs  << std::endl;
  os << "Number of extra dofs:" << nbExtraDofs  << std::endl;

  for (unsigned int iDof=0; iDof<nbDofs; iDof++) {
    CkwsDofShPtr dof = inDevice.dof(iDof);
    
    if (dof->isBounded()) {
      os << "Bounds on dof " << iDof << ": " << "min=" << dof->vmin() << ", max=" << dof->vmax() << std::endl;
    }
    else {
      os << "dof " << iDof << " is not bounded." << std::endl;
    }
  }

  return os;
}

    
    
