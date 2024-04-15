#! /bin/sh
####################################
#        LaunchOnFarm Script       #
#     Loic.quertenmont@cern.ch     #
#            April 2010            #
####################################

export SCRAM_ARCH=slc7_amd64_gcc530
export BUILD_ARCH=slc5_amd64_gcc462
export VO_CMS_SW_DIR=/nfs/soft/cms
cd /eos/home-l/leyan/HSCP2024/HSCP_AN17_192/CMSSW_8_0_30/SUSYBSMAnalysis/HSCP/test/AnalysisCode_Eta12
eval `scramv1 runtime -sh`
cd -
root -l -b << EOF
   TString makeshared(gSystem->GetMakeSharedLib());
   TString dummy = makeshared.ReplaceAll("-W ", "-Wno-deprecated-declarations -Wno-deprecated ");
   TString dummy = makeshared.ReplaceAll("-Wshadow ", " -std=c++0x -D__USE_XOPEN2K8 ");
   cout << "Compilling with the following arguments: " << makeshared << endl;
   gSystem->SetMakeSharedLib(makeshared);
   gSystem->SetIncludePath("-I$ROOFITSYS/include");
   gSystem->Load("libFWCoreFWLite");
   FWLiteEnabler::enable();
   gSystem->Load("libDataFormatsFWLite.so");
   gSystem->Load("libAnalysisDataFormatsSUSYBSMObjects.so");
   gSystem->Load("libDataFormatsVertexReco.so");
   gSystem->Load("libDataFormatsHepMCCandidate.so");
   gSystem->Load("libPhysicsToolsUtilities.so");
   gSystem->Load("libdcap.so");
   .x /eos/home-l/leyan/HSCP2024/HSCP_AN17_192/CMSSW_8_0_30/SUSYBSMAnalysis/HSCP/test/AnalysisCode_Eta12/Analysis_Step1_EventLoop.C+("ANALYSE_745_to_745", 0,  "Stop_13TeV16_M1600N")
   .q
EOF

cp -r Results /eos/home-l/leyan/HSCP2024/HSCP_AN17_192/CMSSW_8_0_30/src/SUSYBSMAnalysis/HSCP/test/AnalysisCode_Eta12/ && rm -rf Results
mv HscpAnalysis* /eos/home-l/leyan/HSCP2024/HSCP_AN17_192/CMSSW_8_0_30/SUSYBSMAnalysis/HSCP/test/AnalysisCode_Eta12/FARM/outputs/
