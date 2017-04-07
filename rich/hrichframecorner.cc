//////////////////////////////////////////////////////////////////////////////
//
// $Id: $
//
//*-- Author  : RICH team member
//*-- Revised : Martin Jurkovic <martin.jurkovic@ph.tum.de> 2010
//
//_HADES_CLASS_DESCRIPTION
//////////////////////////////////////////////////////////////////////////////
//
//  HRichFrameCorner
//
//
//////////////////////////////////////////////////////////////////////////////


#include "hrichframecorner.h"

using namespace std;

ClassImp(HRichFrameCorner)

HRichFrameCorner::HRichFrameCorner()
   : TObject()
{
   fXcor     = 0.0;
   fYcor     = 0.0;
   fCornerNr = 0;
   fFlagArea = 0;
}
