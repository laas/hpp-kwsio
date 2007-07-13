//
// C++ Implementation: kwsioPath
//
// Description: 
//
//
// Author: Alireza Nakhaei,B63,6946 <anakhaei@lucignolo>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//

#include "kwsioPath.h"
#include "kwsioConfig.h"

CkwsioPath::CkwsioPath(const CkwsPathShPtr& inKwsPath, double inSamplingStep):
    attKwsPath(inKwsPath), attSamplingStep(inSamplingStep)
{
}


CkwsioPath::~CkwsioPath()
{
}

std::ostream& CkwsioPath::operator<<(std::ostream& os) const
{
    const CkwsPathShPtr& kwsPath = attKwsPath;
    double pathLength = kwsPath->length();

    for (double u=0 ; u <= pathLength ; u=u+attSamplingStep) {
//      std::cout << u << std::endl;
        CkwsConfigShPtr config = kwsPath->configAtDistance(u);
        os << *config << std::endl;
}

    return os;
}
