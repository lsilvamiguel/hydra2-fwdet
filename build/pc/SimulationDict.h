/********************************************************************
* ../build/pc/SimulationDict.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error ../build/pc/SimulationDict.h/C is only for compilation. Abort cint.
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
extern void G__cpp_setup_tagtableSimulationDict();
extern void G__cpp_setup_inheritanceSimulationDict();
extern void G__cpp_setup_typetableSimulationDict();
extern void G__cpp_setup_memvarSimulationDict();
extern void G__cpp_setup_globalSimulationDict();
extern void G__cpp_setup_memfuncSimulationDict();
extern void G__cpp_setup_funcSimulationDict();
extern void G__set_cpp_environmentSimulationDict();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "./hgeominterface.h"
#include "./hgeomio.h"
#include "./hgeomasciiio.h"
#include "./hgeombuilder.h"
#include "./hgeomrootbuilder.h"
#include "./hgeommedia.h"
#include "./hgeommedium.h"
#include "./hgeomnode.h"
#include "./hgeomset.h"
#include "./hgeomhit.h"
#include "./hgeomcave.h"
#include "./hgeomsectors.h"
#include "./hgeomcoils.h"
#include "./hgeomframes.h"
#include "./hgeomtarget.h"
#include "./hgeommdc.h"
#include "./hgeommdchit.h"
#include "./hgeomtof.h"
#include "./hgeomtofhit.h"
#include "./hgeomrich.h"
#include "./hgeomrichhit.h"
#include "./hgeomshower.h"
#include "./hgeomshowerhit.h"
#include "./hgeomstart.h"
#include "./hgeomstarthit.h"
#include "./hgeomfwall.h"
#include "./hgeomfwallhit.h"
#include "./hgeomuser.h"
#include "./hgeomuserhit.h"
#include "./hgeomrpc.h"
#include "./hgeomrpchit.h"
#include "./hgeomemc.h"
#include "./hgeomemchit.h"
#include "./hgeomfwdet.h"
#include "./hgeomfwdethit.h"
#include "./hgeommdcwireplanes.h"
#include "./hgeommdcwire.h"
#include "./simulationdef.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__SimulationDictLN_TClass;
extern G__linked_taginfo G__SimulationDictLN_TBuffer;
extern G__linked_taginfo G__SimulationDictLN_TMemberInspector;
extern G__linked_taginfo G__SimulationDictLN_TObject;
extern G__linked_taginfo G__SimulationDictLN_TNamed;
extern G__linked_taginfo G__SimulationDictLN_TString;
extern G__linked_taginfo G__SimulationDictLN_basic_fstreamlEcharcOchar_traitslEchargRsPgR;
extern G__linked_taginfo G__SimulationDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__SimulationDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SimulationDictLN_TList;
extern G__linked_taginfo G__SimulationDictLN_TObjArray;
extern G__linked_taginfo G__SimulationDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__SimulationDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SimulationDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__SimulationDictLN_HGeomIo;
extern G__linked_taginfo G__SimulationDictLN_HGeomSet;
extern G__linked_taginfo G__SimulationDictLN_HGeomMedia;
extern G__linked_taginfo G__SimulationDictLN_HGeomShapes;
extern G__linked_taginfo G__SimulationDictLN_HGeomBuilder;
extern G__linked_taginfo G__SimulationDictLN_HSpecGeomPar;
extern G__linked_taginfo G__SimulationDictLN_HDetGeomPar;
extern G__linked_taginfo G__SimulationDictLN_HGeomInterface;
extern G__linked_taginfo G__SimulationDictLN_HGeomHit;
extern G__linked_taginfo G__SimulationDictLN_HGeomAsciiIo;
extern G__linked_taginfo G__SimulationDictLN_HGeomNode;
extern G__linked_taginfo G__SimulationDictLN_HGeomMedium;
extern G__linked_taginfo G__SimulationDictLN_HGeomRotation;
extern G__linked_taginfo G__SimulationDictLN_HGeomMdcWire;
extern G__linked_taginfo G__SimulationDictLN_TGeoManager;
extern G__linked_taginfo G__SimulationDictLN_HGeomRootBuilder;
extern G__linked_taginfo G__SimulationDictLN_HGeomVector;
extern G__linked_taginfo G__SimulationDictLN_HGeomTransform;
extern G__linked_taginfo G__SimulationDictLN_HGeomVolume;
extern G__linked_taginfo G__SimulationDictLN_TArrayD;
extern G__linked_taginfo G__SimulationDictLN_HGeomBasicShape;
extern G__linked_taginfo G__SimulationDictLN_EHGeomNodeType;
extern G__linked_taginfo G__SimulationDictLN_TGeoVolume;
extern G__linked_taginfo G__SimulationDictLN_TArrayI;
extern G__linked_taginfo G__SimulationDictLN_HGeomCave;
extern G__linked_taginfo G__SimulationDictLN_HGeomSectors;
extern G__linked_taginfo G__SimulationDictLN_HGeomCoils;
extern G__linked_taginfo G__SimulationDictLN_HGeomFrames;
extern G__linked_taginfo G__SimulationDictLN_HGeomTarget;
extern G__linked_taginfo G__SimulationDictLN_HGeomMdc;
extern G__linked_taginfo G__SimulationDictLN_vectorlEHGeomMdcWiremUcOallocatorlEHGeomMdcWiremUgRsPgR;
extern G__linked_taginfo G__SimulationDictLN_reverse_iteratorlEvectorlEHGeomMdcWiremUcOallocatorlEHGeomMdcWiremUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SimulationDictLN_HGeomMdcHit;
extern G__linked_taginfo G__SimulationDictLN_HGeomTof;
extern G__linked_taginfo G__SimulationDictLN_HGeomTofHit;
extern G__linked_taginfo G__SimulationDictLN_HGeomRich;
extern G__linked_taginfo G__SimulationDictLN_HGeomRichHit;
extern G__linked_taginfo G__SimulationDictLN_HGeomShower;
extern G__linked_taginfo G__SimulationDictLN_HGeomShowerHit;
extern G__linked_taginfo G__SimulationDictLN_HGeomStart;
extern G__linked_taginfo G__SimulationDictLN_HGeomStartHit;
extern G__linked_taginfo G__SimulationDictLN_HGeomFWall;
extern G__linked_taginfo G__SimulationDictLN_HGeomFWallHit;
extern G__linked_taginfo G__SimulationDictLN_HGeomUser;
extern G__linked_taginfo G__SimulationDictLN_HGeomUserHit;
extern G__linked_taginfo G__SimulationDictLN_HGeomRpc;
extern G__linked_taginfo G__SimulationDictLN_HGeomRpcHit;
extern G__linked_taginfo G__SimulationDictLN_HGeomEmc;
extern G__linked_taginfo G__SimulationDictLN_HGeomEmcHit;
extern G__linked_taginfo G__SimulationDictLN_HGeomFwDet;
extern G__linked_taginfo G__SimulationDictLN_HGeomFwDetHit;
extern G__linked_taginfo G__SimulationDictLN_HGeomMdcWirePlane;
extern G__linked_taginfo G__SimulationDictLN_HGeomMdcWirePlanes;
extern G__linked_taginfo G__SimulationDictLN_vectorlEHGeomMdcWirePlanecOallocatorlEHGeomMdcWirePlanegRsPgR;
extern G__linked_taginfo G__SimulationDictLN_reverse_iteratorlEvectorlEHGeomMdcWirePlanecOallocatorlEHGeomMdcWirePlanegRsPgRcLcLiteratorgR;

/* STUB derived class for protected member access */