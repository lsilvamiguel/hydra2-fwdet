/********************************************************************
* ../build/pc/MdcTrackDDict.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error ../build/pc/MdcTrackDDict.h/C is only for compilation. Abort cint.
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
extern void G__cpp_setup_tagtableMdcTrackDDict();
extern void G__cpp_setup_inheritanceMdcTrackDDict();
extern void G__cpp_setup_typetableMdcTrackDDict();
extern void G__cpp_setup_memvarMdcTrackDDict();
extern void G__cpp_setup_globalMdcTrackDDict();
extern void G__cpp_setup_memfuncMdcTrackDDict();
extern void G__cpp_setup_funcMdcTrackDDict();
extern void G__set_cpp_environmentMdcTrackDDict();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "./hmdctrackdcontfact.h"
#include "./hmdcgeomobj.h"
#include "./hmdcsizescells.h"
#include "./hmdclayer.h"
#include "./hmdcclfnstack.h"
#include "./hmdcclus.h"
#include "./hmdcclussim.h"
#include "./hmdccluster.h"
#include "./hmdclookuptb.h"
#include "./hmdc34clfinder.h"
#include "./hmdcefficiency.h"
#include "./hmdctrackfinder.h"
#include "./hmdctrackdset.h"
#include "./hmdcclustertohit.h"
#include "./hmdctbarray.h"
#include "./hmdclistcells.h"
#include "./hmdclistgroupcells.h"
#include "./hmdcgetcontainers.h"
#include "./hmdctrackfitter.h"
#include "./hmdctrackfittera.h"
#include "./hmdc12fit.h"
#include "./hmdctrackfitpar.h"
#include "./hmdcclusfit.h"
#include "./hmdcwirefit.h"
#include "./hmdceffmenu.h"
#include "./hmdctargetmon.h"
#include "./hmdcclusinf.h"
#include "./hmdcclusinfsim.h"
#include "./hmdcrichcorr.h"
#include "./hmdchitsegfiller.h"
#include "./hseqarr.h"
#include "./hmdcstoreevents.h"
#include "./hmdcdedx2.h"
#include "./hmdcdedx2maker.h"
#include "./hmdcalignerd.h"
#include "./hmdcalignerparam.h"
#include "./hmdcclusfitsim.h"
#include "./hmdcdrifttimepar.h"
#include "./hmdcidealtracking.h"
#include "./hmdcminimize.h"
#include "./hmdctrackfitterb.h"
#include "./hmdctrackparam.h"
#include "./hmdcwiredata.h"
#include "./hmdcwirefitsim.h"
#include "./hmdcclustfromseg.h"
#include "./hmdcgeanttrack.h"
#include "./hmdclayercorrpar.h"
#include "./hmdcclusmetamatch.h"
#include "./hmdckickplane.h"
#include "./hmdckickcor.h"
#include "./hmdctrackddef.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__MdcTrackDDictLN_TClass;
extern G__linked_taginfo G__MdcTrackDDictLN_TBuffer;
extern G__linked_taginfo G__MdcTrackDDictLN_TMemberInspector;
extern G__linked_taginfo G__MdcTrackDDictLN_TObject;
extern G__linked_taginfo G__MdcTrackDDictLN_TNamed;
extern G__linked_taginfo G__MdcTrackDDictLN_TCollection;
extern G__linked_taginfo G__MdcTrackDDictLN_TString;
extern G__linked_taginfo G__MdcTrackDDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__MdcTrackDDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__MdcTrackDDictLN_TList;
extern G__linked_taginfo G__MdcTrackDDictLN_TObjArray;
extern G__linked_taginfo G__MdcTrackDDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__MdcTrackDDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__MdcTrackDDictLN_TSeqCollection;
extern G__linked_taginfo G__MdcTrackDDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__MdcTrackDDictLN_HParSet;
extern G__linked_taginfo G__MdcTrackDDictLN_HContainer;
extern G__linked_taginfo G__MdcTrackDDictLN_HContFact;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTrackDContFact;
extern G__linked_taginfo G__MdcTrackDDictLN_HGeomVector;
extern G__linked_taginfo G__MdcTrackDDictLN_HGeomRotation;
extern G__linked_taginfo G__MdcTrackDDictLN_HGeomTransform;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcPointPlane;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTrapPlane;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTrap;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcPlane;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcPointOnPlane;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLineParam;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcGetContainers;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLayerGeomPar;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcGeomPar;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcGeomStruct;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcRawStruct;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLookupRaw;
extern G__linked_taginfo G__MdcTrackDDictLN_HSpecGeomPar;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLayerGeomParLay;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLayerCorrPar;
extern G__linked_taginfo G__MdcTrackDDictLN_HGeomVolume;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcSizesCellsCell;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcSizesCellsMod;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcSizesCells;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcSizesCellsLayer;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcSizesCellsSec;
extern G__linked_taginfo G__MdcTrackDDictLN_TVector2;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLayer;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClFnStack;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClFnStacksArr;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTBArray;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcBArray;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcList12GroupCells;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcList12GroupCellscLcLdA;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcList24GroupCells;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcList24GroupCellscLcLdA;
extern G__linked_taginfo G__MdcTrackDDictLN_HLocation;
extern G__linked_taginfo G__MdcTrackDDictLN_HSymMat;
extern G__linked_taginfo G__MdcTrackDDictLN_HSymMat4;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClus;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClusSim;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcSecListCells;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcCluster;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClustersArrs;
extern G__linked_taginfo G__MdcTrackDDictLN_HParIo;
extern G__linked_taginfo G__MdcTrackDDictLN_TH2C;
extern G__linked_taginfo G__MdcTrackDDictLN_HCategory;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcDriftTimeParSec;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLayListCells;
extern G__linked_taginfo G__MdcTrackDDictLN_HStart2GeomPar;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLookUpTbCell;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLookUpTbLayer;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLookUpTbLayercLcLDistCalcLuTb;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLookUpTbMod;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLookUpTbSec;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLookUpTb;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcCellGroup12;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLayListCellscLcLdA;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcModListCells;
extern G__linked_taginfo G__MdcTrackDDictLN_HIterator;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTimeCut;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcEvntListCells;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcSeg;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcKickPlane;
extern G__linked_taginfo G__MdcTrackDDictLN_TAttLine;
extern G__linked_taginfo G__MdcTrackDDictLN_TAttFill;
extern G__linked_taginfo G__MdcTrackDDictLN_TAttMarker;
extern G__linked_taginfo G__MdcTrackDDictLN_TVectorTlEfloatgR;
extern G__linked_taginfo G__MdcTrackDDictLN_TVectorTlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TH1F;
extern G__linked_taginfo G__MdcTrackDDictLN_TF1;
extern G__linked_taginfo G__MdcTrackDDictLN_TGraph;
extern G__linked_taginfo G__MdcTrackDDictLN_TCutG;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClusMetaMatch;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTrackParam;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcKickCor;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcProjPlot;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdc34ClFinderLayer;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdc34ClFinderMod;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdc34ClFinderSec;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdc34ClFinderSeccLcLDxDyBinsCut;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdc34ClFinder;
extern G__linked_taginfo G__MdcTrackDDictLN_HTask;
extern G__linked_taginfo G__MdcTrackDDictLN_TStopwatch;
extern G__linked_taginfo G__MdcTrackDDictLN_HReconstructor;
extern G__linked_taginfo G__MdcTrackDDictLN_TFile;
extern G__linked_taginfo G__MdcTrackDDictLN_TCanvas;
extern G__linked_taginfo G__MdcTrackDDictLN_TBox;
extern G__linked_taginfo G__MdcTrackDDictLN_TText;
extern G__linked_taginfo G__MdcTrackDDictLN_TLine;
extern G__linked_taginfo G__MdcTrackDDictLN_TPaveText;
extern G__linked_taginfo G__MdcTrackDDictLN_TH2F;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcCal1;
extern G__linked_taginfo G__MdcTrackDDictLN_TSlider;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLookupGMod;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcRawModStru;
extern G__linked_taginfo G__MdcTrackDDictLN_HEventHeader;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcEff;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcEffMod;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcEfficiencyLayer;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcEfficiencyMod;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcEfficiencySec;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcEfficiency;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcGeantEvent;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTrackFinder;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClusterToHit;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdc12Fit;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcIdealTracking;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTrackDSet;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcHit;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcHitSegFiller;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcDetector;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTrkCand;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClusInf;
extern G__linked_taginfo G__MdcTrackDDictLN_TArrayD;
extern G__linked_taginfo G__MdcTrackDDictLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR;
extern G__linked_taginfo G__MdcTrackDDictLN_HRuntimeDb;
extern G__linked_taginfo G__MdcTrackDDictLN_HSpectrometer;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcLookupGeom;
extern G__linked_taginfo G__MdcTrackDDictLN_HGeomCompositeVolume;
extern G__linked_taginfo G__MdcTrackDDictLN_HModGeomPar;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTBaselEfloatgR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTBaselEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TElementActionTlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TElementPosActionTlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTRow_constlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTRowlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTDiag_constlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTColumn_constlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTFlat_constlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTSub_constlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTSparseRow_constlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTSparseDiag_constlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTColumnlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTDiaglEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTFlatlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTSublEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTSparseRowlEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_TMatrixTSparseDiaglEdoublegR;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClusFit;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcWireData;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcWireFit;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTrackFitInOut;
extern G__linked_taginfo G__MdcTrackDDictLN_HGeantMdc;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcDriftTimePar;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcDriftTimeParBin;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcWiresArr;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcCal2ParSim;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcCal2ParSecSim;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcCal2ParModSim;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcCal2ParAngleSim;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcCal2Par;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcCal2ParSec;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcCal2ParMod;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcCal2ParAngle;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcDriftTimeParAngle;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcDriftTimeParMod;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTrackFitPar;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcDigitPar;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTrackFitter;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTrackFitterA;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcSegSim;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTrackInfSim;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcFittersArray;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdc12FitcLcLdA;
extern G__linked_taginfo G__MdcTrackDDictLN_HParamList;
extern G__linked_taginfo G__MdcTrackDDictLN_HParCond;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClusFitcLcLdA;
extern G__linked_taginfo G__MdcTrackDDictLN_pairlEunsignedsPintcOintgR;
extern G__linked_taginfo G__MdcTrackDDictLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR;
extern G__linked_taginfo G__MdcTrackDDictLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__MdcTrackDDictLN_TPad;
extern G__linked_taginfo G__MdcTrackDDictLN_TPaveLabel;
extern G__linked_taginfo G__MdcTrackDDictLN_TGTransientFrame;
extern G__linked_taginfo G__MdcTrackDDictLN_TGLabel;
extern G__linked_taginfo G__MdcTrackDDictLN_TGTextEntry;
extern G__linked_taginfo G__MdcTrackDDictLN_TGTextButton;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcEffMenu;
extern G__linked_taginfo G__MdcTrackDDictLN_HldGrepFileSource;
extern G__linked_taginfo G__MdcTrackDDictLN_HldRemoteSource;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTargetMon;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTargetMoncLcLTrackPar;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClusInfSim;
extern G__linked_taginfo G__MdcTrackDDictLN_TFormula;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcCalibrater1;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcDGaus;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcRichCorr;
extern G__linked_taginfo G__MdcTrackDDictLN_HSeqArrBlock;
extern G__linked_taginfo G__MdcTrackDDictLN_HSeqArrBlockcLcLdA;
extern G__linked_taginfo G__MdcTrackDDictLN_HSeqArrIter;
extern G__linked_taginfo G__MdcTrackDDictLN_ESeqArrType;
extern G__linked_taginfo G__MdcTrackDDictLN_HSeqArr;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcStoreWires;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcStoreEvents;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcStoreTracks;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcStoreClusters;
extern G__linked_taginfo G__MdcTrackDDictLN_HGeantKine;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcDeDx2;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcDeDx2Maker;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTrackFitterB;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcAlignerParam;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcAlignerD;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClusFitSim;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcHitSim;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcMinimize;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcWireFitSim;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClustFromSeg;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcGeantSeg;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcGeantTrack;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcTrackInfSimcLcLdA;
extern G__linked_taginfo G__MdcTrackDDictLN_HTofHit;
extern G__linked_taginfo G__MdcTrackDDictLN_HTofGeomPar;
extern G__linked_taginfo G__MdcTrackDDictLN_HRpcGeomPar;
extern G__linked_taginfo G__MdcTrackDDictLN_HShowerGeometry;
extern G__linked_taginfo G__MdcTrackDDictLN_HMetaMatchPar;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClusMetaMatchcLcLTofHit;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClusMetaMatchcLcLRpcHit;
extern G__linked_taginfo G__MdcTrackDDictLN_HMdcClusMetaMatchcLcLShowerHit;

/* STUB derived class for protected member access */
