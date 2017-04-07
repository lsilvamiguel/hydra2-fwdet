/********************************************************************
* ../build/pc/RichDict.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error ../build/pc/RichDict.h/C is only for compilation. Abort cint.
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
extern void G__cpp_setup_tagtableRichDict();
extern void G__cpp_setup_inheritanceRichDict();
extern void G__cpp_setup_typetableRichDict();
extern void G__cpp_setup_memvarRichDict();
extern void G__cpp_setup_globalRichDict();
extern void G__cpp_setup_memfuncRichDict();
extern void G__cpp_setup_funcRichDict();
extern void G__set_cpp_environmentRichDict();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "./hrichanalysis.h"
#include "./hrichanalysispar.h"
#include "./hrichanalysissim.h"
#include "./hrichcal.h"
#include "./hrichcalpar.h"
#include "./hrichcalparcell.h"
#include "./hrichcalsim.h"
#include "./hrichcontfact.h"
#include "./hrichdetector.h"
#include "./hrichdigitisationpar.h"
#include "./hrichdigitizer.h"
#include "./hrichdirclus.h"
#include "./hrichframe.h"
#include "./hrichframecorner.h"
#include "./hrichframetab.h"
#include "./hrichgeometrypar.h"
#include "./hrichhit.h"
#include "./hrichhitcandidate.h"
#include "./hrichhitheader.h"
#include "./hrichhitsim.h"
#include "./hrichlabel.h"
#include "./hrichmappingpar.h"
#include "./hrichpad.h"
#include "./hrichpadcorner.h"
#include "./hrichpadtab.h"
#include "./hrichpadclean.h"
#include "./hrichpadfilter.h"
#include "./hrichpadgraph.h"
#include "./hrichpadlabel.h"
#include "./hrichpadsignal.h"
#include "./hrichparasciifileio.h"
#include "./hrichparrootfileio.h"
#include "./hrichringfind.h"
#include "./hrichringfindsim.h"
#include "./hrichtaskset.h"
#include "./hrichthresholdpar.h"
#include "./hrichtrack.h"
#include "./hrichunpacker.h"
#include "./hrichwire.h"
#include "./hrichwiretab.h"
#include "./hrichwiresignal.h"
#include "./hrich700taskset.h"
#include "./hrich700eventdisplay.h"
#include "./hrich700drawhist.h"
#include "./hrich700utils.h"
#include "./hrich700geotestqa.h"
#include "./hrich700histmanager.h"
#include "./hrich700pmt.h"
#include "./hrich700digitizer.h"
#include "./hrich700digipar.h"
#include "./hrich700digimappar.h"
#include "./hrich700ringfinderpar.h"
#include "./hrich700ringfinderideal.h"
#include "./hrich700ringfittercop.h"
#include "./hrich700ringfinderhough.h"
#include "./hrich700recoqa.h"
#include "./richdef.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__RichDictLN_TClass;
extern G__linked_taginfo G__RichDictLN_TBuffer;
extern G__linked_taginfo G__RichDictLN_TMemberInspector;
extern G__linked_taginfo G__RichDictLN_TObject;
extern G__linked_taginfo G__RichDictLN_TNamed;
extern G__linked_taginfo G__RichDictLN_TString;
extern G__linked_taginfo G__RichDictLN_vectorlEunsignedsPshortcOallocatorlEunsignedsPshortgRsPgR;
extern G__linked_taginfo G__RichDictLN_basic_fstreamlEcharcOchar_traitslEchargRsPgR;
extern G__linked_taginfo G__RichDictLN_string;
extern G__linked_taginfo G__RichDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_TList;
extern G__linked_taginfo G__RichDictLN_TObjArray;
extern G__linked_taginfo G__RichDictLN_TClonesArray;
extern G__linked_taginfo G__RichDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_TArrayI;
extern G__linked_taginfo G__RichDictLN_HTask;
extern G__linked_taginfo G__RichDictLN_HLocation;
extern G__linked_taginfo G__RichDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__RichDictLN_HReconstructor;
extern G__linked_taginfo G__RichDictLN_HRichHit;
extern G__linked_taginfo G__RichDictLN_HRichLabel;
extern G__linked_taginfo G__RichDictLN_HRichPadSignal;
extern G__linked_taginfo G__RichDictLN_HCategory;
extern G__linked_taginfo G__RichDictLN_HIterator;
extern G__linked_taginfo G__RichDictLN_HParSet;
extern G__linked_taginfo G__RichDictLN_HRichAnalysisPar;
extern G__linked_taginfo G__RichDictLN_HRichGeometryPar;
extern G__linked_taginfo G__RichDictLN_HRichHitHeader;
extern G__linked_taginfo G__RichDictLN_HRichPadClean;
extern G__linked_taginfo G__RichDictLN_HRichPadLabel;
extern G__linked_taginfo G__RichDictLN_HRichRingFind;
extern G__linked_taginfo G__RichDictLN_HRichAnalysis;
extern G__linked_taginfo G__RichDictLN_TArrayF;
extern G__linked_taginfo G__RichDictLN_HParIo;
extern G__linked_taginfo G__RichDictLN_HParamList;
extern G__linked_taginfo G__RichDictLN_HParCond;
extern G__linked_taginfo G__RichDictLN_HRichCalSim;
extern G__linked_taginfo G__RichDictLN_HRichHitSim;
extern G__linked_taginfo G__RichDictLN_HRichRingFindSim;
extern G__linked_taginfo G__RichDictLN_HRichAnalysisSim;
extern G__linked_taginfo G__RichDictLN_HLocatedDataObject;
extern G__linked_taginfo G__RichDictLN_HRichCal;
extern G__linked_taginfo G__RichDictLN_HObjTable;
extern G__linked_taginfo G__RichDictLN_HRichCalParCell;
extern G__linked_taginfo G__RichDictLN_HRichCalPar;
extern G__linked_taginfo G__RichDictLN_HContainer;
extern G__linked_taginfo G__RichDictLN_HContFact;
extern G__linked_taginfo G__RichDictLN_HRichContFact;
extern G__linked_taginfo G__RichDictLN_HDetector;
extern G__linked_taginfo G__RichDictLN_HRichDetector;
extern G__linked_taginfo G__RichDictLN_HRichDigitisationPar;
extern G__linked_taginfo G__RichDictLN_TMatrixTBaselEfloatgR;
extern G__linked_taginfo G__RichDictLN_TMatrixTBaselEdoublegR;
extern G__linked_taginfo G__RichDictLN_TVectorTlEfloatgR;
extern G__linked_taginfo G__RichDictLN_TVectorTlEdoublegR;
extern G__linked_taginfo G__RichDictLN_maplEintcOintcOlesslEintgRcOallocatorlEpairlEconstsPintcOintgRsPgRsPgR;
extern G__linked_taginfo G__RichDictLN_pairlEintcOintgR;
extern G__linked_taginfo G__RichDictLN_pairlEdoublecOdoublegR;
extern G__linked_taginfo G__RichDictLN_TF1;
extern G__linked_taginfo G__RichDictLN_HGeantRichDirect;
extern G__linked_taginfo G__RichDictLN_HGeantRichPhoton;
extern G__linked_taginfo G__RichDictLN_HRichPad;
extern G__linked_taginfo G__RichDictLN_HRichTrack;
extern G__linked_taginfo G__RichDictLN_HGeantKine;
extern G__linked_taginfo G__RichDictLN_HRichDigitizer;
extern G__linked_taginfo G__RichDictLN_maplEHGeantKinemUcOfloatcOlesslEHGeantKinemUgRcOallocatorlEpairlEHGeantKinemUsPconstcOfloatgRsPgRsPgR;
extern G__linked_taginfo G__RichDictLN_maplEHGeantKinemUcOfloatcOlesslEHGeantKinemUgRcOallocatorlEpairlEHGeantKinemUsPconstcOfloatgRsPgRsPgRcLcLiterator;
extern G__linked_taginfo G__RichDictLN_vectorlEHRichTrackmUcOallocatorlEHRichTrackmUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEHRichTrackmUcOallocatorlEHRichTrackmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_maplEintcOvectorlEHRichTrackmUcOallocatorlEHRichTrackmUgRsPgRcOlesslEintgRcOallocatorlEpairlEconstsPintcOvectorlEHRichTrackmUcOallocatorlEHRichTrackmUgRsPgRsPgRsPgRsPgR;
extern G__linked_taginfo G__RichDictLN_HRichDirClus;
extern G__linked_taginfo G__RichDictLN_HRichFrameCorner;
extern G__linked_taginfo G__RichDictLN_HRichFrame;
extern G__linked_taginfo G__RichDictLN_HRichFrameTab;
extern G__linked_taginfo G__RichDictLN_HRichPadCorner;
extern G__linked_taginfo G__RichDictLN_HRichPadTab;
extern G__linked_taginfo G__RichDictLN_HRichWire;
extern G__linked_taginfo G__RichDictLN_HRichWireTab;
extern G__linked_taginfo G__RichDictLN_HRichHitCandidate;
extern G__linked_taginfo G__RichDictLN_HRichMappingPar;
extern G__linked_taginfo G__RichDictLN_TFile;
extern G__linked_taginfo G__RichDictLN_HFilter;
extern G__linked_taginfo G__RichDictLN_HRichPadFilter;
extern G__linked_taginfo G__RichDictLN_HRichPadGraph;
extern G__linked_taginfo G__RichDictLN_TArrayS;
extern G__linked_taginfo G__RichDictLN_HDetParIo;
extern G__linked_taginfo G__RichDictLN_HDetParAsciiFileIo;
extern G__linked_taginfo G__RichDictLN_HRichParAsciiFileIo;
extern G__linked_taginfo G__RichDictLN_HParRootFile;
extern G__linked_taginfo G__RichDictLN_HDetParRootFileIo;
extern G__linked_taginfo G__RichDictLN_HRichParRootFileIo;
extern G__linked_taginfo G__RichDictLN_HTaskSet;
extern G__linked_taginfo G__RichDictLN_HRichTaskSet;
extern G__linked_taginfo G__RichDictLN_HRichThresholdPar;
extern G__linked_taginfo G__RichDictLN_HldUnpack;
extern G__linked_taginfo G__RichDictLN_HRichUnpacker;
extern G__linked_taginfo G__RichDictLN_HRichUnpackercLcLDataWord;
extern G__linked_taginfo G__RichDictLN_HRichWireSignal;
extern G__linked_taginfo G__RichDictLN_HRich700TaskSet;
extern G__linked_taginfo G__RichDictLN_pairlEunsignedsPintcOintgR;
extern G__linked_taginfo G__RichDictLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_TCanvas;
extern G__linked_taginfo G__RichDictLN_HRich700DigiMapPar;
extern G__linked_taginfo G__RichDictLN_HRich700EventDisplay;
extern G__linked_taginfo G__RichDictLN_vectorlETCanvasmUcOallocatorlETCanvasmUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlETCanvasmUcOallocatorlETCanvasmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_TArrayD;
extern G__linked_taginfo G__RichDictLN_TH1D;
extern G__linked_taginfo G__RichDictLN_TH1;
extern G__linked_taginfo G__RichDictLN_TProfile;
extern G__linked_taginfo G__RichDictLN_TH2;
extern G__linked_taginfo G__RichDictLN_TH2F;
extern G__linked_taginfo G__RichDictLN_TH2D;
extern G__linked_taginfo G__RichDictLN_TGraph;
extern G__linked_taginfo G__RichDictLN_TGraph2D;
extern G__linked_taginfo G__RichDictLN_HistScale;
extern G__linked_taginfo G__RichDictLN_HRichDrawHist;
extern G__linked_taginfo G__RichDictLN_vectorlETH1mUcOallocatorlETH1mUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlETH1mUcOallocatorlETH1mUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_vectorlEstringcOallocatorlEstringgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_vectorlETGraphmUcOallocatorlETGraphmUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlETGraphmUcOallocatorlETGraphmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_TProfile2D;
extern G__linked_taginfo G__RichDictLN_TH3;
extern G__linked_taginfo G__RichDictLN_HRich700HistManager;
extern G__linked_taginfo G__RichDictLN_maplEstringcOTNamedmUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTNamedmUgRsPgRsPgR;
extern G__linked_taginfo G__RichDictLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR;
extern G__linked_taginfo G__RichDictLN_maplEintcOparticlepropertiescOlesslEintgRcOallocatorlEpairlEconstsPintcOparticlepropertiesgRsPgRsPgR;
extern G__linked_taginfo G__RichDictLN_maplETStringcOparticlepropertiescOlesslETStringgRcOallocatorlEpairlEconstsPTStringcOparticlepropertiesgRsPgRsPgR;
extern G__linked_taginfo G__RichDictLN_maplEintcOTStringcOlesslEintgRcOallocatorlEpairlEconstsPintcOTStringgRsPgRsPgR;
extern G__linked_taginfo G__RichDictLN_vectorlEHGeantKinemUcOallocatorlEHGeantKinemUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEHGeantKinemUcOallocatorlEHGeantKinemUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_vectorlEHGeantRichPhotonmUcOallocatorlEHGeantRichPhotonmUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEHGeantRichPhotonmUcOallocatorlEHGeantRichPhotonmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_vectorlEHGeantMdcmUcOallocatorlEHGeantMdcmUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEHGeantMdcmUcOallocatorlEHGeantMdcmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_vectorlEHGeantTofmUcOallocatorlEHGeantTofmUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEHGeantTofmUcOallocatorlEHGeantTofmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_vectorlEHGeantRpcmUcOallocatorlEHGeantRpcmUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEHGeantRpcmUcOallocatorlEHGeantRpcmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_vectorlEHGeantWallmUcOallocatorlEHGeantWallmUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEHGeantWallmUcOallocatorlEHGeantWallmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_vectorlEHGeantEmcmUcOallocatorlEHGeantEmcmUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEHGeantEmcmUcOallocatorlEHGeantEmcmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_vectorlEHGeantStartmUcOallocatorlEHGeantStartmUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEHGeantStartmUcOallocatorlEHGeantStartmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_vectorlEHGeantFwDetmUcOallocatorlEHGeantFwDetmUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEHGeantFwDetmUcOallocatorlEHGeantFwDetmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_HRich700GeoTestQa;
extern G__linked_taginfo G__RichDictLN_HRich700Pmt;
extern G__linked_taginfo G__RichDictLN_HRich700DigiPar;
extern G__linked_taginfo G__RichDictLN_HRich700Digitizer;
extern G__linked_taginfo G__RichDictLN_HRich700Ring;
extern G__linked_taginfo G__RichDictLN_vectorlEHRich700HitcOallocatorlEHRich700HitgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEHRich700HitcOallocatorlEHRich700HitgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_HRich700PmtData;
extern G__linked_taginfo G__RichDictLN_maplEintcOHRich700PmtDatacOlesslEintgRcOallocatorlEpairlEconstsPintcOHRich700PmtDatagRsPgRsPgR;
extern G__linked_taginfo G__RichDictLN_maplEpairlEintcOintgRcOHRich700PmtDatacOlesslEpairlEintcOintgRsPgRcOallocatorlEpairlEconstsPpairlEintcOintgRcOHRich700PmtDatagRsPgRsPgR;
extern G__linked_taginfo G__RichDictLN_vectorlEpairlEdoublecOdoublegRcOallocatorlEpairlEdoublecOdoublegRsPgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEpairlEdoublecOdoublegRcOallocatorlEpairlEdoublecOdoublegRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_vectorlEpairlEintcOintgRcOallocatorlEpairlEintcOintgRsPgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEpairlEintcOintgRcOallocatorlEpairlEintcOintgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_HRich700RingFinderPar;
extern G__linked_taginfo G__RichDictLN_HRich700RingFinderIdeal;
extern G__linked_taginfo G__RichDictLN_vectorlEHRichCalSimmUcOallocatorlEHRichCalSimmUgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEHRichCalSimmUcOallocatorlEHRichCalSimmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_HRich700RingFinderHough;
extern G__linked_taginfo G__RichDictLN_vectorlEHRich700HoughHitcOallocatorlEHRich700HoughHitgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEHRich700HoughHitcOallocatorlEHRich700HoughHitgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_vectorlEvectorlEunsignedsPshortcOallocatorlEunsignedsPshortgRsPgRcOallocatorlEvectorlEunsignedsPshortcOallocatorlEunsignedsPshortgRsPgRsPgRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEvectorlEunsignedsPshortcOallocatorlEunsignedsPshortgRsPgRcOallocatorlEvectorlEunsignedsPshortcOallocatorlEunsignedsPshortgRsPgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_vectorlEHRich700RingcOallocatorlEHRich700RinggRsPgR;
extern G__linked_taginfo G__RichDictLN_reverse_iteratorlEvectorlEHRich700RingcOallocatorlEHRich700RinggRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__RichDictLN_HRich700RecoQa;

/* STUB derived class for protected member access */
