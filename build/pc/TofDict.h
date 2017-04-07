/********************************************************************
* ../build/pc/TofDict.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error ../build/pc/TofDict.h/C is only for compilation. Abort cint.
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
extern void G__cpp_setup_tagtableTofDict();
extern void G__cpp_setup_inheritanceTofDict();
extern void G__cpp_setup_typetableTofDict();
extern void G__cpp_setup_memvarTofDict();
extern void G__cpp_setup_globalTofDict();
extern void G__cpp_setup_memfuncTofDict();
extern void G__cpp_setup_funcTofDict();
extern void G__set_cpp_environmentTofDict();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "./htofcal.h"
#include "./htofcalibrater.h"
#include "./htofdigitizer.h"
#include "./htofhit.h"
#include "./htofhitf.h"
#include "./htofhitf2.h"
#include "./htofraw.h"
#include "./htofunpacker.h"
#include "./htofcontfact.h"
#include "./htofcalpar.h"
#include "./htofdigipar.h"
#include "./htoflookup.h"
#include "./htoftrb2lookup.h"
#include "./htofdetector.h"
#include "./htofrawsimfilter.h"
#include "./htofgeantreader.h"
#include "./htofrawsim.h"
#include "./htofcalsim.h"
#include "./htofhitsim.h"
#include "./htofhitfsim.h"
#include "./htoftrigger.h"
#include "./htofunpacker99.h"
#include "./htoftrb2unpacker.h"
#include "./htofparrootfileio.h"
#include "./htofparasciifileio.h"
#include "./htofgeompar.h"
#include "./htofclusterf.h"
#include "./htofcluster.h"
#include "./htofclusterfsim.h"
#include "./htofclustersim.h"
#include "./htofclusterfpar.h"
#include "./htofwalkpar.h"
#include "./htoftaskset.h"
#include "./tofdef.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__TofDictLN_TClass;
extern G__linked_taginfo G__TofDictLN_TBuffer;
extern G__linked_taginfo G__TofDictLN_TMemberInspector;
extern G__linked_taginfo G__TofDictLN_TObject;
extern G__linked_taginfo G__TofDictLN_TNamed;
extern G__linked_taginfo G__TofDictLN_TString;
extern G__linked_taginfo G__TofDictLN_basic_fstreamlEcharcOchar_traitslEchargRsPgR;
extern G__linked_taginfo G__TofDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__TofDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__TofDictLN_TObjArray;
extern G__linked_taginfo G__TofDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__TofDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__TofDictLN_HTofCal;
extern G__linked_taginfo G__TofDictLN_HTask;
extern G__linked_taginfo G__TofDictLN_TArrayI;
extern G__linked_taginfo G__TofDictLN_HLocation;
extern G__linked_taginfo G__TofDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__TofDictLN_HReconstructor;
extern G__linked_taginfo G__TofDictLN_HCategory;
extern G__linked_taginfo G__TofDictLN_HIterator;
extern G__linked_taginfo G__TofDictLN_HTofCalPar;
extern G__linked_taginfo G__TofDictLN_HTofCalibrater;
extern G__linked_taginfo G__TofDictLN_HLocatedDataObject;
extern G__linked_taginfo G__TofDictLN_HGeantTof;
extern G__linked_taginfo G__TofDictLN_TTree;
extern G__linked_taginfo G__TofDictLN_TFile;
extern G__linked_taginfo G__TofDictLN_TArrayD;
extern G__linked_taginfo G__TofDictLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR;
extern G__linked_taginfo G__TofDictLN_TNtuple;
extern G__linked_taginfo G__TofDictLN_TF1;
extern G__linked_taginfo G__TofDictLN_HLinearCategory;
extern G__linked_taginfo G__TofDictLN_HTofDigiPar;
extern G__linked_taginfo G__TofDictLN_HTofWalkPar;
extern G__linked_taginfo G__TofDictLN_HTofDigitizer;
extern G__linked_taginfo G__TofDictLN_HTofHit;
extern G__linked_taginfo G__TofDictLN_HTofGeomPar;
extern G__linked_taginfo G__TofDictLN_HSpecGeomPar;
extern G__linked_taginfo G__TofDictLN_HSpectrometer;
extern G__linked_taginfo G__TofDictLN_HRuntimeDb;
extern G__linked_taginfo G__TofDictLN_HTofRaw;
extern G__linked_taginfo G__TofDictLN_HTofHitF;
extern G__linked_taginfo G__TofDictLN_HTofHitF2;
extern G__linked_taginfo G__TofDictLN_HldUnpack;
extern G__linked_taginfo G__TofDictLN_HTofLookup;
extern G__linked_taginfo G__TofDictLN_HTofUnpacker;
extern G__linked_taginfo G__TofDictLN_HParSet;
extern G__linked_taginfo G__TofDictLN_HContainer;
extern G__linked_taginfo G__TofDictLN_HContFact;
extern G__linked_taginfo G__TofDictLN_HTofContFact;
extern G__linked_taginfo G__TofDictLN_HParIo;
extern G__linked_taginfo G__TofDictLN_HTofCalParCell;
extern G__linked_taginfo G__TofDictLN_HTofCalParMod;
extern G__linked_taginfo G__TofDictLN_HTofCalParSec;
extern G__linked_taginfo G__TofDictLN_HTofDigiParCell;
extern G__linked_taginfo G__TofDictLN_HTofDigiParMod;
extern G__linked_taginfo G__TofDictLN_HTofDigiParSec;
extern G__linked_taginfo G__TofDictLN_HTofLookupChan;
extern G__linked_taginfo G__TofDictLN_HTofLookupSlot;
extern G__linked_taginfo G__TofDictLN_HTofLookupCrate;
extern G__linked_taginfo G__TofDictLN_HTofTrb2LookupChan;
extern G__linked_taginfo G__TofDictLN_HTofTrb2LookupBoard;
extern G__linked_taginfo G__TofDictLN_HTofTrb2Lookup;
extern G__linked_taginfo G__TofDictLN_HDetector;
extern G__linked_taginfo G__TofDictLN_HTofDetector;
extern G__linked_taginfo G__TofDictLN_HFilter;
extern G__linked_taginfo G__TofDictLN_HTofRawSim;
extern G__linked_taginfo G__TofDictLN_HTofRawSimTmp;
extern G__linked_taginfo G__TofDictLN_HTofRawSimFilter;
extern G__linked_taginfo G__TofDictLN_HGeantReader;
extern G__linked_taginfo G__TofDictLN_HMatrixCategory;
extern G__linked_taginfo G__TofDictLN_HTofGeantReader;
extern G__linked_taginfo G__TofDictLN_HTofCalSim;
extern G__linked_taginfo G__TofDictLN_HTofHitSim;
extern G__linked_taginfo G__TofDictLN_HTofHitSimTmp;
extern G__linked_taginfo G__TofDictLN_HTofHitFSim;
extern G__linked_taginfo G__TofDictLN_HKineSim;
extern G__linked_taginfo G__TofDictLN_HTofTrigger;
extern G__linked_taginfo G__TofDictLN_HTofUnpacker99;
extern G__linked_taginfo G__TofDictLN_HTrb2Unpacker;
extern G__linked_taginfo G__TofDictLN_TArrayF;
extern G__linked_taginfo G__TofDictLN_TVectorTlEfloatgR;
extern G__linked_taginfo G__TofDictLN_TVectorTlEdoublegR;
extern G__linked_taginfo G__TofDictLN_TMatrixTBaselEfloatgR;
extern G__linked_taginfo G__TofDictLN_TMatrixTBaselEdoublegR;
extern G__linked_taginfo G__TofDictLN_HTofTrb2Unpacker;
extern G__linked_taginfo G__TofDictLN_HDetParIo;
extern G__linked_taginfo G__TofDictLN_HParRootFile;
extern G__linked_taginfo G__TofDictLN_HDetGeomPar;
extern G__linked_taginfo G__TofDictLN_HDetParRootFileIo;
extern G__linked_taginfo G__TofDictLN_HTofParRootFileIo;
extern G__linked_taginfo G__TofDictLN_HDetParAsciiFileIo;
extern G__linked_taginfo G__TofDictLN_HTofParAsciiFileIo;
extern G__linked_taginfo G__TofDictLN_HTofClusterFPar;
extern G__linked_taginfo G__TofDictLN_HTofCluster;
extern G__linked_taginfo G__TofDictLN_HTofClusterF;
extern G__linked_taginfo G__TofDictLN_HTofClusterFSim;
extern G__linked_taginfo G__TofDictLN_HTofClusterSim;
extern G__linked_taginfo G__TofDictLN_HParamList;
extern G__linked_taginfo G__TofDictLN_HParCond;
extern G__linked_taginfo G__TofDictLN_HTaskSet;
extern G__linked_taginfo G__TofDictLN_HTofTaskSet;

/* STUB derived class for protected member access */
