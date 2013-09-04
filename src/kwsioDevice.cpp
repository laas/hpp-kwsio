//
// Author: Florent Lamiraux LAAS-CNRS
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "kwsioDevice.h"
#include <KineoWorks2/kwsDevice.h>
#include <KineoWorks2/kwsJoint.h>



std::ostream& operator<<(std::ostream& os, const CkwsDevice& inDevice)
{
  size_t nbDofs = inDevice.countDofs();
  os << "Number of dofs:" << nbDofs  << std::endl;
  CkwsConfigSpaceShPtr extraConfigSpace =
    inDevice.rootJoint ()->customSubspace ();
  if (extraConfigSpace) {
    os << "Number of extra dofs:" << extraConfigSpace->size ()  << std::endl;
  }
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

    
    
