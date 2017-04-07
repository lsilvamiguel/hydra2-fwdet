/********************************************************************
* ../build/pc/MdcTrackGDict.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error ../build/pc/MdcTrackGDict.h/C is only for compilation. Abort cint.
#endif
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define G__ANSIHEADER
#define G__DICTIONARY
#define G__PRIVATE_GVALUE
#include "G__ci.h"
#include "FastAllocString.h"
extern "C" {
extern void G__cpp_setup_tagtableMdcTrackGDict();
extern void G__cpp_setup_inheritanceMdcTrackGDict();
extern void G__cpp_setup_typetableMdcTrackGDict();
extern void G__cpp_setup_memvarMdcTrackGDict();
extern void G__cpp_setup_globalMdcTrackGDict();
extern void G__cpp_setup_memfuncMdcTrackGDict();
extern void G__cpp_setup_funcMdcTrackGDict();
extern void G__set_cpp_environmentMdcTrackGDict();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "./hmdctrackgfield.h"
#include "./hmdctrackgcorrections.h"
#include "./hmdctrackgcorrpar.h"
#include "./hmdctrackgfieldpar.h"
#include "./hmdctrackgspline.h"
#include "./hmdctrackgcontfact.h"
#include "./hbasetrack.h"
#include "./hmetamatch2.h"
#include "./hmetamatchF2.h"
#include "./hmetamatchpar.h"
#include "./hsplinetrack.h"
#include "./hsplinetrackF2.h"
#include "./hrungekutta.h"
#include "./hrktrackB.h"
#include "./hrktrackBF2.h"
#include "./hsplinetaskset.h"
#include "./hsplinetofclF2.h"
#include "./henergylosscorrpar.h"
#include "./hlvl1evtfilter.h"
#include "./htimelvl1evtfilter.h"
#include "./hsplinepar.h"
#include "./hmdctrackgdef.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__MdcTrackGDictLN_TClass;
extern G__linked_taginfo G__MdcTrackGDictLN_TBuffer;
extern G__linked_taginfo G__MdcTrackGDictLN_TMemberInspector;
extern G__linked_taginfo G__MdcTrackGDictLN_TObject;
extern G__linked_taginfo G__MdcTrackGDictLN_TNamed;
extern G__linked_taginfo G__MdcTrackGDictLN_TString;
extern G__linked_taginfo G__MdcTrackGDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__MdcTrackGDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__MdcTrackGDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__MdcTrackGDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__MdcTrackGDictLN_HMdcTrackGField;
extern G__linked_taginfo G__MdcTrackGDictLN_HMdcTrackGCorrections;
extern G__linked_taginfo G__MdcTrackGDictLN_HMdcTrackGSpline;
extern G__linked_taginfo G__MdcTrackGDictLN_HParSet;
extern G__linked_taginfo G__MdcTrackGDictLN_HParamList;
extern G__linked_taginfo G__MdcTrackGDictLN_HParCond;
extern G__linked_taginfo G__MdcTrackGDictLN_TArrayF;
extern G__linked_taginfo G__MdcTrackGDictLN_HSymMat;
extern G__linked_taginfo G__MdcTrackGDictLN_HSymMat6;
extern G__linked_taginfo G__MdcTrackGDictLN_HMdcSeg;
extern G__linked_taginfo G__MdcTrackGDictLN_HMdcTrackGFieldPar;
extern G__linked_taginfo G__MdcTrackGDictLN_HGeomVector;
extern G__linked_taginfo G__MdcTrackGDictLN_HMdcTrackGCorrPar;
extern G__linked_taginfo G__MdcTrackGDictLN_HMdcKickPlane;
extern G__linked_taginfo G__MdcTrackGDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__MdcTrackGDictLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR;
extern G__linked_taginfo G__MdcTrackGDictLN_HTask;
extern G__linked_taginfo G__MdcTrackGDictLN_HTaskSet;
extern G__linked_taginfo G__MdcTrackGDictLN_HLocation;
extern G__linked_taginfo G__MdcTrackGDictLN_HCategory;
extern G__linked_taginfo G__MdcTrackGDictLN_HMdcGeomPar;
extern G__linked_taginfo G__MdcTrackGDictLN_HSpecGeomPar;
extern G__linked_taginfo G__MdcTrackGDictLN_HGeomTransform;
extern G__linked_taginfo G__MdcTrackGDictLN_HMdcGetContainers;
extern G__linked_taginfo G__MdcTrackGDictLN_HVertex;
extern G__linked_taginfo G__MdcTrackGDictLN_HEventHeader;
extern G__linked_taginfo G__MdcTrackGDictLN_HContainer;
extern G__linked_taginfo G__MdcTrackGDictLN_HContFact;
extern G__linked_taginfo G__MdcTrackGDictLN_HMdcTrackGContFact;
extern G__linked_taginfo G__MdcTrackGDictLN_HBaseTrack;
extern G__linked_taginfo G__MdcTrackGDictLN_HReconstructor;
extern G__linked_taginfo G__MdcTrackGDictLN_HMetaMatch2;
extern G__linked_taginfo G__MdcTrackGDictLN_HTofCluster;
extern G__linked_taginfo G__MdcTrackGDictLN_HTofHit;
extern G__linked_taginfo G__MdcTrackGDictLN_HRpcCluster;
extern G__linked_taginfo G__MdcTrackGDictLN_HShowerHit;
extern G__linked_taginfo G__MdcTrackGDictLN_HIterator;
extern G__linked_taginfo G__MdcTrackGDictLN_HMdcTrkCand;
extern G__linked_taginfo G__MdcTrackGDictLN_HTofGeomPar;
extern G__linked_taginfo G__MdcTrackGDictLN_HRpcGeomPar;
extern G__linked_taginfo G__MdcTrackGDictLN_HShowerGeometry;
extern G__linked_taginfo G__MdcTrackGDictLN_HMetaMatchPar;
extern G__linked_taginfo G__MdcTrackGDictLN_HMdcSizesCells;
extern G__linked_taginfo G__MdcTrackGDictLN_HMetaMatchF2;
extern G__linked_taginfo G__MdcTrackGDictLN_HSplineTrack;
extern G__linked_taginfo G__MdcTrackGDictLN_HSplinePar;
extern G__linked_taginfo G__MdcTrackGDictLN_HMagnetPar;
extern G__linked_taginfo G__MdcTrackGDictLN_HSplineTrackF2;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTBaselEfloatgR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTBaselEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TVectorTlEfloatgR;
extern G__linked_taginfo G__MdcTrackGDictLN_TVectorTlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TElementActionTlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TElementPosActionTlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTRow_constlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTRowlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTDiag_constlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTColumn_constlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTFlat_constlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTSub_constlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTSparseRow_constlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTSparseDiag_constlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTColumnlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTDiaglEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTFlatlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTSublEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTSparseRowlEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_TMatrixTSparseDiaglEdoublegR;
extern G__linked_taginfo G__MdcTrackGDictLN_HRungeKutta;
extern G__linked_taginfo G__MdcTrackGDictLN_HRKTrackB;
extern G__linked_taginfo G__MdcTrackGDictLN_HRKTrackBF2;
extern G__linked_taginfo G__MdcTrackGDictLN_HSplineTaskSet;
extern G__linked_taginfo G__MdcTrackGDictLN_HSplineTofClF2;
extern G__linked_taginfo G__MdcTrackGDictLN_HEnergyLossCorrPar;
extern G__linked_taginfo G__MdcTrackGDictLN_HLvl1EvtFilter;
extern G__linked_taginfo G__MdcTrackGDictLN_HTimeLvl1EvtFilter;

/* STUB derived class for protected member access */