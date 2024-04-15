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
root -l -b << EOF
   TString makeshared(gSystem->GetMakeSharedLib());
   TString dummy = makeshared.ReplaceAll("-W ", "-Wno-deprecated-declarations -Wno-deprecated -Wno-unused-local-typedefs ");
   TString dummy = makeshared.ReplaceAll("-Wshadow ", " -std=c++0x -D__USE_XOPEN2K8 ");
   cout << "Compilling with the following arguments: " << makeshared << endl;
   gSystem->SetMakeSharedLib(makeshared);
   gSystem->SetIncludePath( "-I$ROOFITSYS/include" );
   .x /eos/home-l/leyan/HSCP2024/HSCP_AN17_192/CMSSW_8_0_30/SUSYBSMAnalysis/HSCP/test/AnalysisCode_Eta12/Analysis_Step2_BackgroundPrediction.C+("Results/Type2/")
   .q
EOF

mv HscpPred* /eos/home-l/leyan/HSCP2024/HSCP_AN17_192/CMSSW_8_0_30/SUSYBSMAnalysis/HSCP/test/AnalysisCode_Eta12/FARM/outputs/
