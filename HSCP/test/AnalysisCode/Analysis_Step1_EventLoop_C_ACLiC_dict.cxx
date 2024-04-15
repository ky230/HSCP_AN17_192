// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIeosdIhomemIldIleyandIHSCP2024dIHSCP_AN17_192dICMSSW_8_0_30dISUSYBSMAnalysisdIHSCPdItestdIAnalysisCodedIAnalysis_Step1_EventLoop_C_ACLiC_dict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
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
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/eos/home-l/leyan/HSCP2024/HSCP_AN17_192/CMSSW_8_0_30/SUSYBSMAnalysis/HSCP/test/AnalysisCode/Analysis_Step1_EventLoop.C"

// Header files passed via #pragma extra_include

namespace reco {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *reco_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("reco", 0 /*version*/, "Analysis_Step1_EventLoop.C", 4,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &reco_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *reco_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace susybsm {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *susybsm_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("susybsm", 0 /*version*/, "Analysis_Step1_EventLoop.C", 5,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &susybsm_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *susybsm_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace fwlite {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *fwlite_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("fwlite", 0 /*version*/, "Analysis_Step1_EventLoop.C", 6,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &fwlite_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *fwlite_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace trigger {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *trigger_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("trigger", 0 /*version*/, "Analysis_Step1_EventLoop.C", 7,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &trigger_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *trigger_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace edm {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *edm_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("edm", 0 /*version*/, "Analysis_Step1_EventLoop.C", 8,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &edm_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *edm_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace reweight {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *reweight_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("reweight", 0 /*version*/, "Analysis_Step1_EventLoop.C", 9,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &reweight_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *reweight_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace {
  void TriggerDictionaryInitialization_Analysis_Step1_EventLoop_C_ACLiC_dict_Impl() {
    static const char* headers[] = {
"Analysis_Step1_EventLoop.C",
0
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6//include",
"/eos/home-l/leyan/HSCP2024/HSCP_AN17_192/CMSSW_8_0_30/src",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/cms/cmssw/CMSSW_8_0_30/src",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/cms/coral/CORAL_2_3_21-ikhhed6/include/LCG",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/mctester/1.25.0a-ikhhed6/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/qt/4.8.7/include/QtDesigner",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/tauolapp/1.1.5-ikhhed4/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/charybdis/1.003-ikhhed3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/thepeg/1.9.2p1-ikhhed3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/sherpa/2.2.0-ikhhed6/include/SHERPA-MC",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/qt/4.8.7/include/QtOpenGL",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/qt/4.8.7/include/QtGui",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/pythia8/212-ikhhed4/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/herwig/6.521-ikhhed3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/qt/4.8.7/include/Qt3Support",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/classlib/3.1.3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/lhapdf/6.1.6-ikhhed2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/cgal/4.2-ikhhed/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/tkonlinesw/4.0.0-1-ikhhed5/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/starlight/r193-ikhhed2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/qt/4.8.7/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/qt/4.8.7/include/Qt",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/qt/4.8.7/include/QtCore",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/qt/4.8.7/include/QtXml",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/mcdb/1.0.2/interface",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/libungif/4.1.4/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/libtiff/4.0.3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/libpng/1.6.16/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/geant4/10.00.p03-ikhhed2/include/Geant4",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/frontier_client/2.8.20-ikhhed/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/pcre/8.37/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/boost/1.57.0-ikhhed/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/xz/5.2.1/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/xrootd/4.5.0-ikhhed/include/xrootd/private",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/cms/vdt/v0.3.2-giojec2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/valgrind/3.11.0/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/utm/r47119-xsd310-patch-ikhhed/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/toprex/4.23/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/tbb/44_20151115oss/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/tauola/27.121.5/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/sigcpp/2.6.2/include/sigc++-2.0",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/rivet/2.4.0-ikhhed2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/sqlite/3.12.2-giojec2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/protobuf/2.4.1/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/pacparser/1.3.5/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/oracle/11.2.0.3.0__10.2.0.4.0-ikhhed/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/meschach/1.2.pCMS1/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/libhepml/0.2.1/interface",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/ktjet/1.06-ikhhed2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/jimmy/4.2-ikhhed3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/jemalloc/4.2.1/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/herwigpp/2.7.1-ikhhed3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/heppdt/3.03.00-giojec/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/hector/1.3.4_patch1-ikhhed6/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/gsl/1.16/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/libjpeg-turbo/1.3.1/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/giflib/4.2.3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/xerces-c/2.8.0/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/gdbm/1.10/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/freetype/2.5.3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/fftw3/3.3.2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/fftjet/1.5.0/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/fastjet/3.1.0/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/expat/2.1.0/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/hepmc/2.06.07/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/dpm/1.8.0.1/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/dcap/2.47.8/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/libxml2/2.9.1/include/libxml2",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/curl/7.47.1/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/cppunit/1.12.1/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/clhep/2.2.0.4-ikhhed2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/openssl/1.0.2d/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/pythia6/426/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/photos/215.5/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/zlib/1.2.8/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/libuuid/2.22.2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/castor/2.1.13.9/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/castor/2.1.13.9/include/shift",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/cascade/2.2.04-ikhhed3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/bz2lib/1.0.6/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/python/2.7.11-ikhhed/include/python2.7",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/gcc/5.3.0/include/c++/5.3.0",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/gcc/5.3.0/include/c++/5.3.0/x86_64-pc-linux-gnu",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/gcc/5.3.0/include/c++/5.3.0/backward",
"/usr/local/include",
"/usr/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/etc",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/gcc/5.3.0/bin/../lib/gcc/x86_64-pc-linux-gnu/5.3.0/../../../../include/c++/5.3.0",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/gcc/5.3.0/bin/../lib/gcc/x86_64-pc-linux-gnu/5.3.0/../../../../include/c++/5.3.0/x86_64-pc-linux-gnu",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/gcc/5.3.0/bin/../lib/gcc/x86_64-pc-linux-gnu/5.3.0/../../../../include/c++/5.3.0/backward",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/interpreter/cling/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/etc/cling",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/root-6.06.00",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/include",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/root-6.06.00/graf3d/g3d/inc",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/root-6.06.00/gui/gui/inc",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/root-6.06.00/io/io/inc",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/root-6.06.00/core/base/../textinput/src",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/core/base/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/core/rint/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/core/thread/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/io/io/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/root-6.06.00/hist/hist/inc",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/math/mathcore/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/slc7_amd64_gcc530/external/openssl/1.0.2d/include",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/net/net/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/tree/tree/",
"/build/cmsbld/auto-builds/CMSSW_8_0_30-slc7_amd64_gcc530/build/CMSSW_8_0_30-build/tmp/BUILDROOT/1649c7da1071490c2bf475784fdde21b/opt/cmssw/slc7_amd64_gcc530/cms/cmssw/CMSSW_8_0_30/src",
"/build/cmsbld/auto-builds/CMSSW_8_0_30-slc7_amd64_gcc530/build/CMSSW_8_0_30-build/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/include",
"/build/cmsbld/auto-builds/CMSSW_8_0_30-slc7_amd64_gcc530/build/CMSSW_8_0_30-build/slc7_amd64_gcc530/external/pcre/8.37/include",
"/build/cmsbld/auto-builds/CMSSW_8_0_30-slc7_amd64_gcc530/build/CMSSW_8_0_30-build/slc7_amd64_gcc530/external/bz2lib/1.0.6/include",
"/build/cmsbld/auto-builds/CMSSW_8_0_30-slc7_amd64_gcc530/build/CMSSW_8_0_30-build/slc7_amd64_gcc530/external/zlib/1.2.8/include",
"/build/cmsbld/auto-builds/CMSSW_8_0_30-slc7_amd64_gcc530/build/CMSSW_8_0_30-build/tmp/BUILDROOT/1649c7da1071490c2bf475784fdde21b/opt/cmssw/slc7_amd64_gcc530/cms/cmssw/CMSSW_8_0_30/",
"/build/cmsbld/auto-builds/CMSSW_8_0_30-slc7_amd64_gcc530/build/CMSSW_8_0_30-build/slc7_amd64_gcc530/external/boost/1.57.0-ikhhed/include",
"/build/cmsbld/auto-builds/CMSSW_8_0_30-slc7_amd64_gcc530/build/CMSSW_8_0_30-build/slc7_amd64_gcc530/external/libuuid/2.22.2/include",
"/build/cmsbld/auto-builds/CMSSW_8_0_30-slc7_amd64_gcc530/build/CMSSW_8_0_30-build/slc7_amd64_gcc530/external/tbb/44_20151115oss/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/sherpa/2.2.0-ikhhed6/include",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/slc7_amd64_gcc530/external/gsl/1.16/include",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/math/mathmore/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/math/genvector/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/math/matrix/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/hist/hist/",
"/build/cmsbld/auto-builds/CMSSW_8_0_30-slc7_amd64_gcc530/build/CMSSW_8_0_30-build/slc7_amd64_gcc530/external/hepmc/2.06.07/include",
"/build/cmsbld/auto-builds/CMSSW_8_0_30-slc7_amd64_gcc530/build/CMSSW_8_0_30-build/slc7_amd64_gcc530/external/xz/5.2.1/include",
"/build/cmsbld/auto-builds/CMSSW_8_0_30-slc7_amd64_gcc530/build/CMSSW_8_0_30-build/slc7_amd64_gcc530/external/gsl/1.16/include",
"/build/cmsbld/auto-builds/CMSSW_8_0_30-slc7_amd64_gcc530/build/CMSSW_8_0_30-build/slc7_amd64_gcc530/external/clhep/2.2.0.4-ikhhed2/include",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/math/physics/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/math/foam/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/graf2d/graf/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/graf2d/gpad/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/math/minuit/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/root-6.06.00/roofit/roofit/inc",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/root-6.06.00/roofit/roofitcore/inc",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/root-6.06.00/roofit/roostats/inc",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/roofit/roofitcore/",
"/build/cmsbld/auto-builds/CMSSW_8_0_25-slc7_amd64_gcc530/build/CMSSW_8_0_25-build/BUILD/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/build/roofit/roofit/",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed6/include",
"/eos/home-l/leyan/HSCP2024/HSCP_AN17_192/CMSSW_8_0_30/SUSYBSMAnalysis/HSCP/test/AnalysisCode/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Analysis_Step1_EventLoop_C_ACLiC_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Analysis_Step1_EventLoop_C_ACLiC_dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef __ACLIC__
  #define __ACLIC__ 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Analysis_Step1_EventLoop.C"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Analysis_FillControlAndPredictionHist", payloadCode, "@",
"Analysis_Step1_EventLoop", payloadCode, "@",
"BgLumiMC", payloadCode, "@",
"CutI", payloadCode, "@",
"CutI_Flip", payloadCode, "@",
"CutPt", payloadCode, "@",
"CutPt_Flip", payloadCode, "@",
"CutTOF", payloadCode, "@",
"CutTOF_Flip", payloadCode, "@",
"Event_Weight", payloadCode, "@",
"HCuts_I", payloadCode, "@",
"HCuts_I_Flip", payloadCode, "@",
"HCuts_Pt", payloadCode, "@",
"HCuts_Pt_Flip", payloadCode, "@",
"HCuts_TOF", payloadCode, "@",
"HCuts_TOF_Flip", payloadCode, "@",
"HIPTrackLossEmul", payloadCode, "@",
"HIPemulator", payloadCode, "@",
"HIPemulatorDown", payloadCode, "@",
"HIPemulatorUp", payloadCode, "@",
"HistoFile", payloadCode, "@",
"InitHistos", payloadCode, "@",
"L1Emul", payloadCode, "@",
"LumiWeightsMC", payloadCode, "@",
"LumiWeightsMCSyst", payloadCode, "@",
"MaxEntry", payloadCode, "@",
"OpenAngle", payloadCode, "@",
"PassPreselection", payloadCode, "@",
"PassSelection", payloadCode, "@",
"PassTrigger", payloadCode, "@",
"RescaledPt", payloadCode, "@",
"SegSep", payloadCode, "@",
"TreeDXY", payloadCode, "@",
"TreeDZ", payloadCode, "@",
"TrueDist", payloadCode, "@",
"TrueDistSyst", payloadCode, "@",
"dEdxSF", payloadCode, "@",
"dEdxTemplates", payloadCode, "@",
"getOuterHitPos", payloadCode, "@",
"isCosmicSB", payloadCode, "@",
"isMCglobal", payloadCode, "@",
"isSemiCosmicSB", payloadCode, "@",
"muonStations", payloadCode, "@",
"plotsMap", payloadCode, "@",
"samples", payloadCode, "@",
"samplesFull", payloadCode, "@",
"scaleFactor", payloadCode, "@",
"trackerCorrector", payloadCode, "@",
"useClusterCleaning", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Analysis_Step1_EventLoop_C_ACLiC_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Analysis_Step1_EventLoop_C_ACLiC_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Analysis_Step1_EventLoop_C_ACLiC_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Analysis_Step1_EventLoop_C_ACLiC_dict() {
  TriggerDictionaryInitialization_Analysis_Step1_EventLoop_C_ACLiC_dict_Impl();
}
