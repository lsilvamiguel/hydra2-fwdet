//
// File generated by /cvmfs/hades.gsi.de/install/root-5.34.34/bin/rootcint at Mon Mar 27 16:46:01 2017

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME dOdOdIbuilddIpcdIDstDict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "DstDict.h"

#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"

// Direct notice to TROOT of the dictionary's loading.
namespace {
   static struct DictInit {
      DictInit() {
         ROOT::RegisterModule();
      }
   } __TheDictionaryInitializer;
}

// START OF SHADOWS

namespace ROOTShadow {
   namespace Shadow {
   } // of namespace Shadow
} // of namespace ROOTShadow
// END OF SHADOWS

namespace ROOTDict {
   void HDst_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void *new_HDst(void *p = 0);
   static void *newArray_HDst(Long_t size, void *p);
   static void delete_HDst(void *p);
   static void deleteArray_HDst(void *p);
   static void destruct_HDst(void *p);
   static void streamer_HDst(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static ROOT::TGenericClassInfo *GenerateInitInstanceLocal(const ::HDst*)
   {
      ::HDst *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::HDst >(0);
      static ::ROOT::TGenericClassInfo 
         instance("HDst", ::HDst::Class_Version(), "././hdst.h", 8,
                  typeid(::HDst), ::ROOT::DefineBehavior(ptr, ptr),
                  &::HDst::Dictionary, isa_proxy, 0,
                  sizeof(::HDst) );
      instance.SetNew(&new_HDst);
      instance.SetNewArray(&newArray_HDst);
      instance.SetDelete(&delete_HDst);
      instance.SetDeleteArray(&deleteArray_HDst);
      instance.SetDestructor(&destruct_HDst);
      instance.SetStreamerFunc(&streamer_HDst);
      return &instance;
   }
   ROOT::TGenericClassInfo *GenerateInitInstance(const ::HDst*)
   {
      return GenerateInitInstanceLocal((::HDst*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::HDst*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOTDict

//______________________________________________________________________________
atomic_TClass_ptr HDst::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HDst::Class_Name()
{
   return "HDst";
}

//______________________________________________________________________________
const char *HDst::ImplFileName()
{
   return ::ROOTDict::GenerateInitInstanceLocal((const ::HDst*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HDst::ImplFileLine()
{
   return ::ROOTDict::GenerateInitInstanceLocal((const ::HDst*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void HDst::Dictionary()
{
   fgIsA = ::ROOTDict::GenerateInitInstanceLocal((const ::HDst*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *HDst::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gCINTMutex); if(!fgIsA) {fgIsA = ::ROOTDict::GenerateInitInstanceLocal((const ::HDst*)0x0)->GetClass();} }
   return fgIsA;
}

//______________________________________________________________________________
void HDst::Streamer(TBuffer &R__b)
{
   // Stream an object of class HDst.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void HDst::ShowMembers(TMemberInspector &R__insp)
{
      // Inspect the data members of an object of class HDst.
      TClass *R__cl = ::HDst::IsA();
      if (R__cl || R__insp.IsA()) { }
      TObject::ShowMembers(R__insp);
}

namespace ROOTDict {
   // Wrappers around operator new
   static void *new_HDst(void *p) {
      return  p ? new(p) ::HDst : new ::HDst;
   }
   static void *newArray_HDst(Long_t nElements, void *p) {
      return p ? new(p) ::HDst[nElements] : new ::HDst[nElements];
   }
   // Wrapper around operator delete
   static void delete_HDst(void *p) {
      delete ((::HDst*)p);
   }
   static void deleteArray_HDst(void *p) {
      delete [] ((::HDst*)p);
   }
   static void destruct_HDst(void *p) {
      typedef ::HDst current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_HDst(TBuffer &buf, void *obj) {
      ((::HDst*)obj)->::HDst::Streamer(buf);
   }
} // end of namespace ROOTDict for class ::HDst

/********************************************************
* ../build/pc/DstDict.cc
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && __GNUC__ >= 4 && ((__GNUC_MINOR__ == 2 && __GNUC_PATCHLEVEL__ >= 1) || (__GNUC_MINOR__ >= 3))
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtableDstDict();

extern "C" void G__set_cpp_environmentDstDict() {
  G__cpp_reset_tagtableDstDict();
}
#include <new>
extern "C" int G__cpp_dllrevDstDict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* HDst */
static int G__DstDict_184_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   HDst* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new HDst[n];
     } else {
       p = new((void*) gvp) HDst[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new HDst;
     } else {
       p = new((void*) gvp) HDst;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__DstDictLN_HDst));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__DstDict_184_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
  struct G__aRyp1 { Int_t a[1][4]; }* G__Ap1 = (struct G__aRyp1*) G__int(libp->para[1]);
   switch (libp->paran) {
   case 3:
      HDst::setupSpectrometer(*((TString*) G__int(libp->para[0])), G__Ap1->a
, *((TString*) G__int(libp->para[2])));
      G__setnull(result7);
      break;
   case 2:
      HDst::setupSpectrometer(*((TString*) G__int(libp->para[0])), G__Ap1->a);
      G__setnull(result7);
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__DstDict_184_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 4:
      HDst::setupParameterSources(*((TString*) G__int(libp->para[0])), *((TString*) G__int(libp->para[1]))
, *((TString*) G__int(libp->para[2])), *((TString*) G__int(libp->para[3])));
      G__setnull(result7);
      break;
   case 3:
      HDst::setupParameterSources(*((TString*) G__int(libp->para[0])), *((TString*) G__int(libp->para[1]))
, *((TString*) G__int(libp->para[2])));
      G__setnull(result7);
      break;
   case 2:
      HDst::setupParameterSources(*((TString*) G__int(libp->para[0])), *((TString*) G__int(libp->para[1])));
      G__setnull(result7);
      break;
   case 1:
      HDst::setupParameterSources(*((TString*) G__int(libp->para[0])));
      G__setnull(result7);
      break;
   case 0:
      HDst::setupParameterSources();
      G__setnull(result7);
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__DstDict_184_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 5:
      HDst::setDataSource((Int_t) G__int(libp->para[0]), *((TString*) G__int(libp->para[1]))
, *((TString*) G__int(libp->para[2])), (Int_t) G__int(libp->para[3])
, *((TString*) G__int(libp->para[4])));
      G__setnull(result7);
      break;
   case 4:
      HDst::setDataSource((Int_t) G__int(libp->para[0]), *((TString*) G__int(libp->para[1]))
, *((TString*) G__int(libp->para[2])), (Int_t) G__int(libp->para[3]));
      G__setnull(result7);
      break;
   case 3:
      HDst::setDataSource((Int_t) G__int(libp->para[0]), *((TString*) G__int(libp->para[1]))
, *((TString*) G__int(libp->para[2])));
      G__setnull(result7);
      break;
   case 2:
      HDst::setDataSource((Int_t) G__int(libp->para[0]), *((TString*) G__int(libp->para[1])));
      G__setnull(result7);
      break;
   case 1:
      HDst::setDataSource((Int_t) G__int(libp->para[0]));
      G__setnull(result7);
      break;
   case 0:
      HDst::setDataSource();
      G__setnull(result7);
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__DstDict_184_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 3:
      HDst::setSecondDataSource(*((TString*) G__int(libp->para[0])), *((TString*) G__int(libp->para[1]))
, (Int_t) G__int(libp->para[2]));
      G__setnull(result7);
      break;
   case 2:
      HDst::setSecondDataSource(*((TString*) G__int(libp->para[0])), *((TString*) G__int(libp->para[1])));
      G__setnull(result7);
      break;
   case 1:
      HDst::setSecondDataSource(*((TString*) G__int(libp->para[0])));
      G__setnull(result7);
      break;
   case 0:
      HDst::setSecondDataSource();
      G__setnull(result7);
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__DstDict_184_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 3:
      HDst::setupUnpackers(*((TString*) G__int(libp->para[0])), *((TString*) G__int(libp->para[1]))
, (Bool_t) G__int(libp->para[2]));
      G__setnull(result7);
      break;
   case 2:
      HDst::setupUnpackers(*((TString*) G__int(libp->para[0])), *((TString*) G__int(libp->para[1])));
      G__setnull(result7);
      break;
   case 1:
      HDst::setupUnpackers(*((TString*) G__int(libp->para[0])));
      G__setnull(result7);
      break;
   case 0:
      HDst::setupUnpackers();
      G__setnull(result7);
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__DstDict_184_0_7(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) HDst::Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__DstDict_184_0_8(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) HDst::Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__DstDict_184_0_9(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 115, (long) HDst::Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__DstDict_184_0_10(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      HDst::Dictionary();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__DstDict_184_0_14(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((HDst*) G__getstructoffset())->StreamerNVirtual(*(TBuffer*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__DstDict_184_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) HDst::DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__DstDict_184_0_16(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) HDst::ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__DstDict_184_0_17(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) HDst::ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__DstDict_184_0_18(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) HDst::DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__DstDict_184_0_19(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   HDst* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new HDst(*(HDst*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__DstDictLN_HDst));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef HDst G__THDst;
static int G__DstDict_184_0_20(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   char* gvp = (char*) G__getgvp();
   long soff = G__getstructoffset();
   int n = G__getaryconstruct();
   //
   //has_a_delete: 1
   //has_own_delete1arg: 0
   //has_own_delete2arg: 0
   //
   if (!soff) {
     return(1);
   }
   if (n) {
     if (gvp == (char*)G__PVOID) {
       delete[] (HDst*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((HDst*) (soff+(sizeof(HDst)*i)))->~G__THDst();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (HDst*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((HDst*) (soff))->~G__THDst();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G__DstDict_184_0_21(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   HDst* dest = (HDst*) G__getstructoffset();
   *dest = *(HDst*) libp->para[0].ref;
   const HDst& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* HDst */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncDstDict {
 public:
  G__Sizep2memfuncDstDict(): p(&G__Sizep2memfuncDstDict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncDstDict::*p)();
};

size_t G__get_sizep2memfuncDstDict()
{
  G__Sizep2memfuncDstDict a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceDstDict() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__DstDictLN_HDst))) {
     HDst *G__Lderived;
     G__Lderived=(HDst*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__DstDictLN_HDst),G__get_linked_tagnum(&G__DstDictLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableDstDict() {

   /* Setting up typedef entry */
   G__search_typename2("Int_t",105,-1,0,-1);
   G__setnewtype(-1,"Signed integer 4 bytes (int)",0);
   G__search_typename2("Bool_t",103,-1,0,-1);
   G__setnewtype(-1,"Boolean (0=false, 1=true) (bool)",0);
   G__search_typename2("Version_t",115,-1,0,-1);
   G__setnewtype(-1,"Class version identifier (short)",0);
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__DstDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__DstDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__DstDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__DstDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__DstDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__DstDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__DstDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__DstDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__DstDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__DstDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* HDst */
static void G__setup_memvarHDst(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__DstDictLN_HDst));
   { HDst *p; p=(HDst*)0x1000; if (p) { }
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__DstDictLN_TClass),G__defined_typename("atomic_TClass_ptr"),-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarDstDict() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncHDst(void) {
   /* HDst */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__DstDictLN_HDst));
   G__memfunc_setup("HDst",371,G__DstDict_184_0_1, 105, G__get_linked_tagnum(&G__DstDictLN_HDst), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("setupSpectrometer",1838,G__DstDict_184_0_2, 121, -1, -1, 0, 3, 3, 1, 0, 
"u 'TString' - 0 - beamtime I - 'Int_t' 2 - mdcsetup "
"u 'TString' - 0 '\"rich,mdc,tof,rpc,shower,wall,tbox,start\"' detectors", (char*)NULL, (void*) G__func2void( (void (*)(TString, Int_t**, TString))(&HDst::setupSpectrometer) ), 0);
   G__memfunc_setup("setupParameterSources",2230,G__DstDict_184_0_3, 121, -1, -1, 0, 4, 3, 1, 0, 
"u 'TString' - 0 '\"oracle\"' parsource u 'TString' - 0 '\"\"' asciiParFile "
"u 'TString' - 0 '\"\"' rootParFile u 'TString' - 0 '\"now\"' histDate", (char*)NULL, (void*) G__func2void( (void (*)(TString, TString, TString, TString))(&HDst::setupParameterSources) ), 0);
   G__memfunc_setup("setDataSource",1335,G__DstDict_184_0_4, 121, -1, -1, 0, 5, 3, 1, 0, 
"i - 'Int_t' 0 '-1' sourceType u 'TString' - 0 '\"\"' inDir "
"u 'TString' - 0 '\"\"' inFile i - 'Int_t' 0 '-1' refId "
"u 'TString' - 0 '\"lxhadeb02.gsi.de\"' eventbuilder", (char*)NULL, (void*) G__func2void( (void (*)(Int_t, TString, TString, Int_t, TString))(&HDst::setDataSource) ), 0);
   G__memfunc_setup("setSecondDataSource",1939,G__DstDict_184_0_5, 121, -1, -1, 0, 3, 3, 1, 0, 
"u 'TString' - 0 '\"\"' inDir u 'TString' - 0 '\"\"' inFile "
"i - 'Int_t' 0 '-1' refId", (char*)NULL, (void*) G__func2void( (void (*)(TString, TString, Int_t))(&HDst::setSecondDataSource) ), 0);
   G__memfunc_setup("setupUnpackers",1501,G__DstDict_184_0_6, 121, -1, -1, 0, 3, 3, 1, 0, 
"u 'TString' - 0 '\"aug11\"' beamtime u 'TString' - 0 '\"rich,mdc,tof,rpc,shower,wall,tbox,latch,start\"' detectors "
"g - 'Bool_t' 0 'kTRUE' correctINL", (char*)NULL, (void*) G__func2void( (void (*)(TString, TString, Bool_t))(&HDst::setupUnpackers) ), 0);
   G__memfunc_setup("Class",502,G__DstDict_184_0_7, 85, G__get_linked_tagnum(&G__DstDictLN_TClass), -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (TClass* (*)())(&HDst::Class) ), 0);
   G__memfunc_setup("Class_Name",982,G__DstDict_184_0_8, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&HDst::Class_Name) ), 0);
   G__memfunc_setup("Class_Version",1339,G__DstDict_184_0_9, 115, -1, G__defined_typename("Version_t"), 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (Version_t (*)())(&HDst::Class_Version) ), 0);
   G__memfunc_setup("Dictionary",1046,G__DstDict_184_0_10, 121, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (void (*)())(&HDst::Dictionary) ), 0);
   G__memfunc_setup("IsA",253,(G__InterfaceMethod) NULL,85, G__get_linked_tagnum(&G__DstDictLN_TClass), -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("ShowMembers",1132,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TMemberInspector' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("Streamer",835,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("StreamerNVirtual",1656,G__DstDict_184_0_14, 121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - ClassDef_StreamerNVirtual_b", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DeclFileName",1145,G__DstDict_184_0_15, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&HDst::DeclFileName) ), 0);
   G__memfunc_setup("ImplFileLine",1178,G__DstDict_184_0_16, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&HDst::ImplFileLine) ), 0);
   G__memfunc_setup("ImplFileName",1171,G__DstDict_184_0_17, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&HDst::ImplFileName) ), 0);
   G__memfunc_setup("DeclFileLine",1152,G__DstDict_184_0_18, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&HDst::DeclFileLine) ), 0);
   // automatic copy constructor
   G__memfunc_setup("HDst", 371, G__DstDict_184_0_19, (int) ('i'), G__get_linked_tagnum(&G__DstDictLN_HDst), -1, 0, 1, 1, 1, 0, "u 'HDst' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~HDst", 497, G__DstDict_184_0_20, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 1);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G__DstDict_184_0_21, (int) ('u'), G__get_linked_tagnum(&G__DstDictLN_HDst), -1, 1, 1, 1, 1, 0, "u 'HDst' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncDstDict() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalDstDict() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {
}

static void G__cpp_setup_func4() {
}

static void G__cpp_setup_func5() {
}

static void G__cpp_setup_func6() {
}

static void G__cpp_setup_func7() {
}

static void G__cpp_setup_func8() {
}

static void G__cpp_setup_func9() {
}

static void G__cpp_setup_func10() {
}

static void G__cpp_setup_func11() {
}

static void G__cpp_setup_func12() {
}

static void G__cpp_setup_func13() {
}

static void G__cpp_setup_func14() {
}

static void G__cpp_setup_func15() {
}

static void G__cpp_setup_func16() {
}

static void G__cpp_setup_func17() {
}

static void G__cpp_setup_func18() {
}

static void G__cpp_setup_func19() {
}

static void G__cpp_setup_func20() {
}

static void G__cpp_setup_func21() {
}

static void G__cpp_setup_func22() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcDstDict() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
  G__cpp_setup_func4();
  G__cpp_setup_func5();
  G__cpp_setup_func6();
  G__cpp_setup_func7();
  G__cpp_setup_func8();
  G__cpp_setup_func9();
  G__cpp_setup_func10();
  G__cpp_setup_func11();
  G__cpp_setup_func12();
  G__cpp_setup_func13();
  G__cpp_setup_func14();
  G__cpp_setup_func15();
  G__cpp_setup_func16();
  G__cpp_setup_func17();
  G__cpp_setup_func18();
  G__cpp_setup_func19();
  G__cpp_setup_func20();
  G__cpp_setup_func21();
  G__cpp_setup_func22();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__DstDictLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__DstDictLN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__DstDictLN_TMemberInspector = { "TMemberInspector" , 99 , -1 };
G__linked_taginfo G__DstDictLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__DstDictLN_TString = { "TString" , 99 , -1 };
G__linked_taginfo G__DstDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__DstDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__DstDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__DstDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__DstDictLN_HDst = { "HDst" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableDstDict() {
  G__DstDictLN_TClass.tagnum = -1 ;
  G__DstDictLN_TBuffer.tagnum = -1 ;
  G__DstDictLN_TMemberInspector.tagnum = -1 ;
  G__DstDictLN_TObject.tagnum = -1 ;
  G__DstDictLN_TString.tagnum = -1 ;
  G__DstDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__DstDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__DstDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__DstDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__DstDictLN_HDst.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableDstDict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__DstDictLN_TClass);
   G__get_linked_tagnum_fwd(&G__DstDictLN_TBuffer);
   G__get_linked_tagnum_fwd(&G__DstDictLN_TMemberInspector);
   G__get_linked_tagnum_fwd(&G__DstDictLN_TObject);
   G__get_linked_tagnum_fwd(&G__DstDictLN_TString);
   G__get_linked_tagnum_fwd(&G__DstDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__DstDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__DstDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__DstDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__DstDictLN_HDst),sizeof(HDst),-1,29952,(char*)NULL,G__setup_memvarHDst,G__setup_memfuncHDst);
}
extern "C" void G__cpp_setupDstDict(void) {
  G__check_setup_version(30051515,"G__cpp_setupDstDict()");
  G__set_cpp_environmentDstDict();
  G__cpp_setup_tagtableDstDict();

  G__cpp_setup_inheritanceDstDict();

  G__cpp_setup_typetableDstDict();

  G__cpp_setup_memvarDstDict();

  G__cpp_setup_memfuncDstDict();
  G__cpp_setup_globalDstDict();
  G__cpp_setup_funcDstDict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncDstDict();
  return;
}
class G__cpp_setup_initDstDict {
  public:
    G__cpp_setup_initDstDict() { G__add_setup_func("DstDict",(G__incsetup)(&G__cpp_setupDstDict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initDstDict() { G__remove_setup_func("DstDict"); }
};
G__cpp_setup_initDstDict G__cpp_setup_initializerDstDict;
