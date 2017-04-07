//*-- Author : Dan Magestro (magestro@gsi.de)
//*-- Modified : 24/01/2002
//*-- Modified : 20/01/2004 Jacek Otwinowski
//*-- Modified : 20/01/2004 A.Sadovski
//*-- Modified : 04/01/2005 Jacek Otwinowski
//*-- Modified : 08/02/2005 A.Sadovski
//*-- Modified : 26/11/2007 A.Sadovsky, M.Golubeva, T.Solovieva
//
//  QAhists.h
//
//  List of general histograms to be printed by HQAOutputPS.
//
//  Note: If this file is changed, hqahistograms.cc needs
//        to be recompiled
//  here comes histograms NAMES not pointers !!!!!! 
// Active Start histograms
//"stCal_tof",

"stHit_vs_stStrip",
"stHit_tof_vs_startstripe",
"stLatchHist",
"stCal_tof",
"vtCal_tof",
"stHit_tof",
"stCal_stripMod0",
"stCal_stripMod1",
"vtCal_strip",
"stHit_vs_stStrip_Trigg[0]",
"stHit_vs_stStrip_Trigg[1]",
"stHit_vs_stStrip_Trigg[2]",
"stHit_vs_stStrip_Trigg[3]",
"stHit_vs_stStrip_Trigg[4]",
"stHit_vs_stStrip_Trigg[5]",
"stHit_vs_stStrip_Trigg[6]",
"stHit_vs_stStrip_Trigg[7]",
"stHit_vs_stStrip_Trigg[8]",
"stHit_vs_stStrip_Trigg[9]",
"stVertexXY",
"stVertexZ",
"Stm0Vtdiff_vs_stStrip[0]",
"Stm0Vtdiff_vs_stStrip[1]",
"Stm0Vtdiff_vs_stStrip[2]",
"Stm0Vtdiff_vs_stStrip[3]",
"Stm0Vtdiff_vs_stStrip[4]",
"Stm0Vtdiff_vs_stStrip[5]",
"Stm0Vtdiff_vs_stStrip[6]",
"Stm0Vtdiff_vs_stStrip[7]",
"Stm0Vtdiff_vs_stStrip[8]",
"Stm0Vtdiff_vs_stStrip[9]",
"Stm0Vtdiff_vs_stStrip[10]",
"Stm0Vtdiff_vs_stStrip[11]",
"Stm0Vtdiff_vs_stStrip[12]",
"Stm0Vtdiff_vs_stStrip[13]",
"Stm0Vtdiff_vs_stStrip[14]",
"Stm0Vtdiff_vs_stStrip[15]",
"Stm1Vtdiff_vs_stStrip[0]",
"Stm1Vtdiff_vs_stStrip[1]",
"Stm1Vtdiff_vs_stStrip[2]",
"Stm1Vtdiff_vs_stStrip[3]",
"Stm1Vtdiff_vs_stStrip[4]",
"Stm1Vtdiff_vs_stStrip[5]",
"Stm1Vtdiff_vs_stStrip[6]",
"Stm1Vtdiff_vs_stStrip[7]",
"Stm1Vtdiff_vs_stStrip[8]",
"Stm1Vtdiff_vs_stStrip[9]",
"Stm1Vtdiff_vs_stStrip[10]",
"Stm1Vtdiff_vs_stStrip[11]",
"Stm1Vtdiff_vs_stStrip[12]",
"Stm1Vtdiff_vs_stStrip[13]",
"Stm1Vtdiff_vs_stStrip[14]",
"Stm1Vtdiff_vs_stStrip[15]",
//"stCal_tof_strip[0]",
//"stCal_tof_strip[1]",
//"stCal_tof_strip[2]",
//"stCal_tof_strip[3]",
//"stCal_tof_strip[4]",
//"stCal_tof_strip[5]",
//"stCal_tof_strip[6]",
//"stCal_tof_strip[7]",


// Active DAQ Scaler histiograms
 //  here comes histograms NAMES not pointers !!!!!! 
"histInputScaler", 
"histDownScaler", 
"histGatedScaler", 
"histAcceptScaler",
"histStartScaler", 
"histVetoScaler",  
"histTofScaler",   
"histRpcScaler",   

"histAllScalerCh",
"histAllScalerTrend",

/*
 "histInputScalerTrend[0]",
 "histInputScalerTrend[1]",
 "histInputScalerTrend[2]",
 "histInputScalerTrend[3]",
 "histInputScalerTrend[4]",
 "histInputScalerTrend[5]",
 "histInputScalerTrend[6]",
 "histInputScalerTrend[7]",
 "histDownScalerTrend[0]",
 "histDownScalerTrend[1]",
 "histDownScalerTrend[2]",
 "histDownScalerTrend[3]",
 "histDownScalerTrend[4]",
 "histDownScalerTrend[5]",
 "histDownScalerTrend[6]",
 "histDownScalerTrend[7]",

 "histGatedScalerTrend[0]",
 "histGatedScalerTrend[1]",
 "histGatedScalerTrend[2]",
 "histGatedScalerTrend[3]",
 "histGatedScalerTrend[4]",
 "histGatedScalerTrend[5]",
 "histGatedScalerTrend[6]",
 "histGatedScalerTrend[7]",

 "histAcceptScalerTrend[0]",
 "histAcceptScalerTrend[1]",
 "histAcceptScalerTrend[2]",
 "histAcceptScalerTrend[3]",
 "histAcceptScalerTrend[4]",
 "histAcceptScalerTrend[5]",
 "histAcceptScalerTrend[6]",
 "histAcceptScalerTrend[7]",

 "histStartScaler[0]",
 "histStartScaler[1]",
 "histStartScaler[2]",
 "histStartScaler[3]",
 "histStartScaler[4]",
 "histStartScaler[5]",
 "histStartScaler[6]",
 "histStartScaler[7]",
 "histVetoScaler[0]",
 "histVetoScaler[1]",
 "histVetoScaler[2]",
 "histVetoScaler[3]",
 "histVetoScaler[4]",
 "histVetoScaler[5]",
 "histVetoScaler[6]",
 "histVetoScaler[7]",
*/


// Active Rich histograms
"richCal_row",
"richCal_column",
"richHit_ringRow",
"richHit_ringCol",
"richHit_theta",
"richHit_phi",

"richHit_scat",
"richHit_radius",
"richHit_centroid",
"richHit_chargeAmpl",
"richHit_numPads",
"richHit_houTraVsPatMat",

"richHit_patMatVsTheta",
"richHit_houTraVsTheta",
"richHit_chargeAmplVsTheta",
"richHit_radiusVsTheta",
"richHit_AverCharge[0]",
"richHit_AverCharge[1]",
"richHit_AverCharge[2]",
"richHit_AverCharge[3]",
"richHit_AverCharge[4]",
"richHit_AverCharge[5]",
"richHit_NumPads[0]",
"richHit_NumPads[1]",
"richHit_NumPads[2]",
"richHit_NumPads[3]",
"richHit_NumPads[4]",
"richHit_NumPads[5]",
"richHit_NumRings[0]",
"richHit_NumRings[1]",
"richHit_NumRings[2]",
"richHit_NumRings[3]",
"richHit_NumRings[4]",
"richHit_NumRings[5]",



"mdcCal1_t2mt1[0][0]",
"mdcCal1_t2mt1[1][0]",
"mdcCal1_t2mt1[2][0]",
"mdcCal1_t2mt1[3][0]",
"mdcCal1_t2mt1[4][0]",
"mdcCal1_t2mt1[5][0]",
"mdcCal1_t2mt1[0][1]",
"mdcCal1_t2mt1[1][1]",
"mdcCal1_t2mt1[2][1]",
"mdcCal1_t2mt1[3][1]",
"mdcCal1_t2mt1[4][1]",
"mdcCal1_t2mt1[5][1]",
"mdcCal1_t2mt1[0][2]",
"mdcCal1_t2mt1[1][2]",
"mdcCal1_t2mt1[2][2]",
"mdcCal1_t2mt1[3][2]",
"mdcCal1_t2mt1[4][2]",
"mdcCal1_t2mt1[5][2]",
"mdcCal1_t2mt1[0][3]",
"mdcCal1_t2mt1[1][3]",
"mdcCal1_t2mt1[2][3]",
"mdcCal1_t2mt1[3][3]",
"mdcCal1_t2mt1[4][3]",
"mdcCal1_t2mt1[5][3]",
"mdcCal1_t2mt1_V2[0][0][0]",
"mdcCal1_t2mt1_V2[1][0][0]",
"mdcCal1_t2mt1_V2[2][0][0]",
"mdcCal1_t2mt1_V2[3][0][0]",
"mdcCal1_t2mt1_V2[4][0][0]",
"mdcCal1_t2mt1_V2[5][0][0]",
 

"mdcCal1_t1[0][0]",
"mdcCal1_t1[1][0]",
"mdcCal1_t1[2][0]",
"mdcCal1_t1[3][0]",
"mdcCal1_t1[4][0]",
"mdcCal1_t1[5][0]",
"mdcCal1_t1[0][1]",
"mdcCal1_t1[1][1]",
"mdcCal1_t1[2][1]",
"mdcCal1_t1[3][1]",
"mdcCal1_t1[4][1]",
"mdcCal1_t1[5][1]",
"mdcCal1_t1[0][2]",
"mdcCal1_t1[1][2]",
"mdcCal1_t1[2][2]",
"mdcCal1_t1[3][2]",
"mdcCal1_t1[4][2]",
"mdcCal1_t1[5][2]",
"mdcCal1_t1[0][3]",
"mdcCal1_t1[1][3]",
"mdcCal1_t1[2][3]",
"mdcCal1_t1[3][3]",
"mdcCal1_t1[4][3]",
"mdcCal1_t1[5][3]",
"mdcCal1_t1_V2[0][0][0]",
"mdcCal1_t1_V2[1][0][0]",
"mdcCal1_t1_V2[2][0][0]",
"mdcCal1_t1_V2[3][0][0]",
"mdcCal1_t1_V2[4][0][0]",
"mdcCal1_t1_V2[5][0][0]",
"mdcCal1_t1_V2[1][0][1]",
"mdcCal1_t1_V2[1][0][2]",
"mdcCal1_t1_V2[1][0][3]",
"mdcCal1_t1_V2[1][0][4]",
"mdcCal1_t1_V2[1][0][5]",
"mdcCutCounts[0]",
"mdcCutCounts[1]",
"mdcCutCounts[2]",
"mdcCutCounts[3]",
"mdcCutCounts[4]",
"mdcCutCounts[5]",
"mdcCutCounts[6]",
"mdcCal1_tat_m0",
"mdcCal1_tat_m1",
"mdcCal1_tat_m2",
"mdcCal1_tat_m3",
"mdcHit_scat_m0",
"mdcHit_scat_m1",
"mdcHit_scat_m2",
"mdcHit_scat_m3",

"mdcSeg_Chi2[0][0]",
"mdcSeg_Chi2[1][0]",
"mdcSeg_Chi2[2][0]",
"mdcSeg_Chi2[3][0]",
"mdcSeg_Chi2[4][0]",
"mdcSeg_Chi2[5][0]",
"mdcSeg_Chi2[0][1]",
"mdcSeg_Chi2[1][1]",
"mdcSeg_Chi2[2][1]",
"mdcSeg_Chi2[3][1]",
"mdcSeg_Chi2[4][1]",
"mdcSeg_Chi2[5][1]",


// Active Tof histograms
"tofHit_scat",
"tofHit_n[0]",
"tofHit_n[1]",
"tofHit_n[2]",
"tofHit_n[3]",
"tofHit_n[4]",
"tofHit_n[5]",
"tofHit_tot",
"tofHit_phi",
"tofHit_theta",
"tofHit_tof",
"tofHit_nSec",

// Active Rpc histograms
"rpcHit_scat",
"rpcHit_n[0]",
"rpcHit_n[1]",
"rpcHit_n[2]",
"rpcHit_n[3]",
"rpcHit_n[4]",
"rpcHit_n[5]",
"rpcHit_tot",
"rpcHit_phi",
"rpcHit_theta",
"rpcHit_tof",
"rpcHit_nSec",

// Active Shower histograms
"shoHit_scat",
"shoHit_sectorVsModule",
"shoHit_phi",
"shoHit_theta",
"shoHit_nRow",
"shoHit_nCol",
"shoHit_n[0]",
"shoHit_n[1]",
"shoHit_n[2]",
"shoHit_n[3]",
"shoHit_n[4]",
"shoHit_n[5]",
"showersums_0_0",
"showersums_0_1",
"showersums_0_2",
"showersums_1_0",
"showersums_1_1",
"showersums_1_2",
"showersums_2_0",
"showersums_2_1",
"showersums_2_2",
"showersums_3_0",
"showersums_3_1",
"showersums_3_2",
"showersums_4_0",
"showersums_4_1",
"showersums_4_2",
"showersums_5_0",
"showersums_5_1",
"showersums_5_2",
"shoHit_nm_0_0",
"shoHit_nm_0_1",
"shoHit_nm_0_2",
"shoHit_nm_1_0",
"shoHit_nm_1_1",
"shoHit_nm_1_2",
"shoHit_nm_2_0",
"shoHit_nm_2_1",
"shoHit_nm_2_2",
"shoHit_nm_3_0",
"shoHit_nm_3_1",
"shoHit_nm_3_2",
"shoHit_nm_4_0",
"shoHit_nm_4_1",
"shoHit_nm_4_2",
"shoHit_nm_5_0",
"shoHit_nm_5_1",
"shoHit_nm_5_2",

// Active Forward Wall histograms
"hWallCellSmall" ,
"hWallCellMedium",
"hWallCellLarge" ,
"hMultWall"      ,
"hWallCellTime"  ,
"hWallCellAdc"   ,
"hWallXY"        ,
"hWallHitNumI"   ,
"hWallHitNumII"  ,
"hWallHitNumIII" ,
"hWallHitNumIV"  ,


// Active Tracking (Kick,Spline) histograms
"splineTrack_scat",
"rungeKuttaTrack_scat",
"splineTrack_massCharge",
"rungeKuttaTrack_massCharge",
"trackingSpline_sys0[0]",
"trackingSpline_sys0[1]",
"trackingSpline_sys0[2]",
"trackingSpline_sys0[3]",
"trackingSpline_sys0[4]",
"trackingSpline_sys0[5]",
"trackingRK_sys0[0]",
"trackingRK_sys0[1]",
"trackingRK_sys0[2]",
"trackingRK_sys0[3]",
"trackingRK_sys0[4]",
"trackingRK_sys0[5]",
"trackingSpline_sys1[0]",
"trackingSpline_sys1[1]",
"trackingSpline_sys1[2]",
"trackingSpline_sys1[3]",
"trackingSpline_sys1[4]",
"trackingSpline_sys1[5]",
"trackingRK_sys1[0]",
"trackingRK_sys1[1]",
"trackingRK_sys1[2]",
"trackingRK_sys1[3]",
"trackingRK_sys1[4]",
"trackingRK_sys1[5]",

// Active MetaMatch histograms
"hsecspline",
"hsecspline0",
"hseckick1",
"hsecspline1",
"hXdiffvsshowersector",
"hYdiffvsshowersector",
"hXdiffvsshw",
"hYdiffvsshw",
"hshower_quality",
"htof_quality",
"hXdiffTof[0]",
"hXdiffTof[1]",
"hXdiffTof[2]",
"hXdiffTof[3]",
"hXdiffTof[4]",
"hXdiffTof[5]",
"hYdiffTof[0]",
"hYdiffTof[1]",
"hYdiffTof[2]",
"hYdiffTof[3]",
"hYdiffTof[4]",
"hYdiffTof[5]",

"hXdiffvstofstrip",
"hYdiffvstofstrip",
"hXdiffvsshoCol",
"hXdiffvsshoRow",
"hYdiffvsshoCol",
"hYdiffvsshoRow",
"hXdiffvsshowersectorRK",
"hXdiffvstofstripRK",
"hXdiffvstofstripRK_neg",
"hXdiffvsthetaRK_neg",
"hYdiffvsshowersectorRK",
"hYdiffvstofstripRK",
"hYdiffvstofstripRK_neg",
"hYdiffvsthetaRK_neg",
"hshower_qualityRK",
"htof_qualityRK",
"hXdiffvsshoColRK",
"hXdiffvsshoRowRK",
"hYdiffvsshoColRK",
"hYdiffvsshoRowRK",
"hXdiffsho[0]",
"hXdiffsho[1]",
"hXdiffsho[2]",
"hXdiffsho[3]",
"hXdiffsho[4]",
"hXdiffsho[5]",
"hYdiffsho[0]",
"hYdiffsho[1]",
"hYdiffsho[2]",
"hYdiffsho[3]",
"hYdiffsho[4]",
"hYdiffsho[5]",

"hXdiffvsRpcsector",
"hYdiffvsRpcsector",
"hXdiffvsRpc",
"hYdiffvsRpc",
"hRpc_quality",
"hXdiffRpc[0]",
"hXdiffRpc[1]",
"hXdiffRpc[2]",
"hXdiffRpc[3]",
"hXdiffRpc[4]",
"hXdiffRpc[5]",
"hYdiffRpc[0]",
"hYdiffRpc[1]",
"hYdiffRpc[2]",
"hYdiffRpc[3]",
"hYdiffRpc[4]",
"hYdiffRpc[5]",


// Active Corr histograms


//  Active Rich-MDC histograms

"richmdc_dtheta_sec0",
"richmdc_dtheta_sec1",
"richmdc_dtheta_sec2",
"richmdc_dtheta_sec3",
"richmdc_dtheta_sec4",
"richmdc_dtheta_sec5",

"richmdc_dphi_sec0",
"richmdc_dphi_sec1",
"richmdc_dphi_sec2",
"richmdc_dphi_sec3",
"richmdc_dphi_sec4",
"richmdc_dphi_sec5",

"richmdc_lep",

//Active Shower-RPC histograms
"shorpcXdiff_pre_s0",
"shorpcXdiff_pre_s1",
"shorpcXdiff_pre_s2",
"shorpcXdiff_pre_s3",
"shorpcXdiff_pre_s4",
"shorpcXdiff_pre_s5",
"shorpcXdiff_post1_s0",
"shorpcXdiff_post1_s1",
"shorpcXdiff_post1_s2",
"shorpcXdiff_post1_s3",
"shorpcXdiff_post1_s4",
"shorpcXdiff_post1_s5",
"shorpcXdiff_post2_s0",
"shorpcXdiff_post2_s1",
"shorpcXdiff_post2_s2",
"shorpcXdiff_post2_s3",
"shorpcXdiff_post2_s4",
"shorpcXdiff_post2_s5",
"shorpcXvs_pre_s0",
"shorpcXvs_pre_s1",
"shorpcXvs_pre_s2",
"shorpcXvs_pre_s3",
"shorpcXvs_pre_s4",
"shorpcXvs_pre_s5",
"shorpcXvs_post1_s0",
"shorpcXvs_post1_s1",
"shorpcXvs_post1_s2",
"shorpcXvs_post1_s3",
"shorpcXvs_post1_s4",
"shorpcXvs_post1_s5",
"shorpcXvs_post2_s0",
"shorpcXvs_post2_s1",
"shorpcXvs_post2_s2",
"shorpcXvs_post2_s3",
"shorpcXvs_post2_s4",
"shorpcXvs_post2_s5",
"shorpcYdiff_pre_s0",
"shorpcYdiff_pre_s1",
"shorpcYdiff_pre_s2",
"shorpcYdiff_pre_s3",
"shorpcYdiff_pre_s4",
"shorpcYdiff_pre_s5",
"shorpcYdiff_post1_s0",
"shorpcYdiff_post1_s1",
"shorpcYdiff_post1_s2",
"shorpcYdiff_post1_s3",
"shorpcYdiff_post1_s4",
"shorpcYdiff_post1_s5",
"shorpcYdiff_post2_s0",
"shorpcYdiff_post2_s1",
"shorpcYdiff_post2_s2",
"shorpcYdiff_post2_s3",
"shorpcYdiff_post2_s4",
"shorpcYdiff_post2_s5",
"shorpcYvs_pre_s0",
"shorpcYvs_pre_s1",
"shorpcYvs_pre_s2",
"shorpcYvs_pre_s3",
"shorpcYvs_pre_s4",
"shorpcYvs_pre_s5",
"shorpcYvs_post1_s0",
"shorpcYvs_post1_s1",
"shorpcYvs_post1_s2",
"shorpcYvs_post1_s3",
"shorpcYvs_post1_s4",
"shorpcYvs_post1_s5",
"shorpcYvs_post2_s0",
"shorpcYvs_post2_s1",
"shorpcYvs_post2_s2",
"shorpcYvs_post2_s3",
"shorpcYvs_post2_s4",
"shorpcYvs_post2_s5",

// Active PID histograms
//multiplicity
"hparticle_multrk",
"hparticle_lepton_tof_vs_rod_sys0",
"hparticle_lepton_tof_vs_rod_sys1",
"hparticle_lepton_tof_vs_startstrip_sys0",
"hparticle_lepton_tof_vs_startstrip_sys1",
"hparticle_lepton_tof_all_sys0",
"hparticle_lepton_tof_all_sys1",
"hparticle_lepton_tof_vs_start_sys0[0]",
"hparticle_lepton_tof_vs_start_sys0[1]",
"hparticle_lepton_tof_vs_start_sys0[2]",
"hparticle_lepton_tof_vs_start_sys0[3]",
"hparticle_lepton_tof_vs_start_sys0[4]",
"hparticle_lepton_tof_vs_start_sys0[5]",
"hparticle_lepton_tof_vs_start_sys0[6]",
"hparticle_lepton_tof_vs_start_sys0[7]",
"hparticle_lepton_tof_vs_start_sys0[8]",
"hparticle_lepton_tof_vs_start_sys0[9]",
"hparticle_lepton_tof_vs_start_sys0[10]",
"hparticle_lepton_tof_vs_start_sys0[11]",
"hparticle_lepton_tof_vs_start_sys0[12]",
"hparticle_lepton_tof_vs_start_sys0[13]",
"hparticle_lepton_tof_vs_start_sys0[14]",
"hparticle_lepton_tof_vs_start_sys0[15]",
"hparticle_lepton_tof_vs_start_sys1[0]",
"hparticle_lepton_tof_vs_start_sys1[1]",
"hparticle_lepton_tof_vs_start_sys1[2]",
"hparticle_lepton_tof_vs_start_sys1[3]",
"hparticle_lepton_tof_vs_start_sys1[4]",
"hparticle_lepton_tof_vs_start_sys1[5]",
"hparticle_lepton_tof_vs_start_sys1[6]",
"hparticle_lepton_tof_vs_start_sys1[7]",
"hparticle_lepton_tof_vs_start_sys1[8]",
"hparticle_lepton_tof_vs_start_sys1[9]",
"hparticle_lepton_tof_vs_start_sys1[10]",
"hparticle_lepton_tof_vs_start_sys1[11]",
"hparticle_lepton_tof_vs_start_sys1[12]",
"hparticle_lepton_tof_vs_start_sys1[13]",
"hparticle_lepton_tof_vs_start_sys1[14]",
"hparticle_lepton_tof_vs_start_sys1[15]",
"hparticle_pi_tof_vs_rod_sys0",
"hparticle_pi_tof_vs_rod_sys1",
"hparticle_pi_eloss_vs_rod_sys1",
"hparticle_p_eloss_vs_rod_sys1",
"hparticle_pi_metahit_vs_phi_sys1",
"hparticle_pi_tof_vs_startstrip_sys0",
"hparticle_pi_tof_vs_startstrip_sys1",
"hparticle_pi_tof_all_sys0",
"hparticle_pi_tof_all_sys1",
"hparticle_pi_tof_vs_start_sys0[0]",
"hparticle_pi_tof_vs_start_sys0[1]",
"hparticle_pi_tof_vs_start_sys0[2]",
"hparticle_pi_tof_vs_start_sys0[3]",
"hparticle_pi_tof_vs_start_sys0[4]",
"hparticle_pi_tof_vs_start_sys0[5]",
"hparticle_pi_tof_vs_start_sys0[6]",
"hparticle_pi_tof_vs_start_sys0[7]",
"hparticle_pi_tof_vs_start_sys0[8]",
"hparticle_pi_tof_vs_start_sys0[9]",
"hparticle_pi_tof_vs_start_sys0[10]",
"hparticle_pi_tof_vs_start_sys0[11]",
"hparticle_pi_tof_vs_start_sys0[12]",
"hparticle_pi_tof_vs_start_sys0[13]",
"hparticle_pi_tof_vs_start_sys0[14]",
"hparticle_pi_tof_vs_start_sys0[15]",
"hparticle_pi_tof_vs_startMod0_sys0[0]",
"hparticle_pi_tof_vs_startMod0_sys0[1]",
"hparticle_pi_tof_vs_startMod0_sys0[2]",
"hparticle_pi_tof_vs_startMod0_sys0[3]",
"hparticle_pi_tof_vs_startMod0_sys0[4]",
"hparticle_pi_tof_vs_startMod0_sys0[5]",
"hparticle_pi_tof_vs_startMod0_sys0[6]",
"hparticle_pi_tof_vs_startMod0_sys0[7]",
"hparticle_pi_tof_vs_startMod0_sys0[8]",
"hparticle_pi_tof_vs_startMod0_sys0[9]",
"hparticle_pi_tof_vs_startMod0_sys0[10]",
"hparticle_pi_tof_vs_startMod0_sys0[11]",
"hparticle_pi_tof_vs_startMod0_sys0[12]",
"hparticle_pi_tof_vs_startMod0_sys0[13]",
"hparticle_pi_tof_vs_startMod0_sys0[14]",
"hparticle_pi_tof_vs_startMod0_sys0[15]",
"hparticle_pi_tof_vs_startMod0_sys0[16]",
"hparticle_pi_tof_vs_startMod0_sys0[17]",
"hparticle_pi_tof_vs_startMod0_sys0[18]",
"hparticle_pi_tof_vs_startMod0_sys0[19]",
"hparticle_pi_tof_vs_startMod0_sys0[20]",
"hparticle_pi_tof_vs_startMod0_sys0[21]",
"hparticle_pi_tof_vs_startMod0_sys0[22]",
"hparticle_pi_tof_vs_startMod0_sys0[23]",
"hparticle_pi_tof_vs_startMod0_sys0[24]",
"hparticle_pi_tof_vs_startMod0_sys0[25]",
"hparticle_pi_tof_vs_startMod0_sys0[26]",
"hparticle_pi_tof_vs_startMod0_sys0[27]",
"hparticle_pi_tof_vs_startMod0_sys0[28]",
"hparticle_pi_tof_vs_startMod0_sys0[29]",
"hparticle_pi_tof_vs_startMod0_sys0[30]",
"hparticle_pi_tof_vs_startMod0_sys0[31]",
"hparticle_pi_tof_vs_startMod0_sys0[32]",
"hparticle_pi_tof_vs_startMod0_sys0[33]",
"hparticle_pi_tof_vs_startMod0_sys0[34]",
"hparticle_pi_tof_vs_startMod0_sys0[35]",
"hparticle_pi_tof_vs_startMod1_sys0[0]",
"hparticle_pi_tof_vs_startMod1_sys0[1]",
"hparticle_pi_tof_vs_startMod1_sys0[2]",
"hparticle_pi_tof_vs_startMod1_sys0[3]",
"hparticle_pi_tof_vs_startMod1_sys0[4]",
"hparticle_pi_tof_vs_startMod1_sys0[5]",
"hparticle_pi_tof_vs_startMod1_sys0[6]",
"hparticle_pi_tof_vs_startMod1_sys0[7]",
"hparticle_pi_tof_vs_startMod1_sys0[8]",
"hparticle_pi_tof_vs_startMod1_sys0[9]",
"hparticle_pi_tof_vs_startMod1_sys0[10]",
"hparticle_pi_tof_vs_startMod1_sys0[11]",
"hparticle_pi_tof_vs_startMod1_sys0[12]",
"hparticle_pi_tof_vs_startMod1_sys0[13]",
"hparticle_pi_tof_vs_startMod1_sys0[14]",
"hparticle_pi_tof_vs_startMod1_sys0[15]",
"hparticle_pi_tof_vs_start_sys1[0]",
"hparticle_pi_tof_vs_start_sys1[1]",
"hparticle_pi_tof_vs_start_sys1[2]",
"hparticle_pi_tof_vs_start_sys1[3]",
"hparticle_pi_tof_vs_start_sys1[4]",
"hparticle_pi_tof_vs_start_sys1[5]",
"hparticle_pi_tof_vs_start_sys1[6]",
"hparticle_pi_tof_vs_start_sys1[7]",
"hparticle_pi_tof_vs_start_sys1[8]",
"hparticle_pi_tof_vs_start_sys1[9]",
"hparticle_pi_tof_vs_start_sys1[10]",
"hparticle_pi_tof_vs_start_sys1[11]",
"hparticle_pi_tof_vs_start_sys1[12]",
"hparticle_pi_tof_vs_start_sys1[13]",
"hparticle_pi_tof_vs_start_sys1[14]",
"hparticle_pi_tof_vs_start_sys1[15]",
"hparticle_pi_tof_vs_start_sys1[16]",
"hparticle_pi_tof_vs_start_sys1[17]",
"hparticle_pi_tof_vs_start_sys1[18]",
"hparticle_pi_tof_vs_start_sys1[19]",
"hparticle_pi_tof_vs_start_sys1[20]",
"hparticle_pi_tof_vs_start_sys1[21]",
"hparticle_pi_tof_vs_start_sys1[22]",
"hparticle_pi_tof_vs_start_sys1[23]",
"hparticle_pi_tof_vs_start_sys1[24]",
"hparticle_pi_tof_vs_start_sys1[25]",
"hparticle_pi_tof_vs_start_sys1[26]",
"hparticle_pi_tof_vs_start_sys1[27]",
"hparticle_pi_tof_vs_start_sys1[28]",
"hparticle_pi_tof_vs_start_sys1[29]",
"hparticle_pi_tof_vs_start_sys1[30]",
"hparticle_pi_tof_vs_start_sys1[31]",
"hparticle_pi_tof_vs_start_sys1[32]",
"hparticle_pi_tof_vs_start_sys1[33]",
"hparticle_pi_tof_vs_start_sys1[34]",
"hparticle_pi_tof_vs_start_sys1[35]",
"hparticle_RK_theta_sec0",
"hparticle_RK_theta_sec1",
"hparticle_RK_theta_sec2",
"hparticle_RK_theta_sec3",
"hparticle_RK_theta_sec4",
"hparticle_RK_theta_sec5",
"hparticle_RK_phi",
"hparticle_RK_neg_theta_sec0",
"hparticle_RK_neg_theta_sec1",
"hparticle_RK_neg_theta_sec2",
"hparticle_RK_neg_theta_sec3",
"hparticle_RK_neg_theta_sec4",
"hparticle_RK_neg_theta_sec5",
"hparticle_rk_proton_momdif_sys0_sec0",
"hparticle_rk_proton_momdif_sys0_sec1",
"hparticle_rk_proton_momdif_sys0_sec2",
"hparticle_rk_proton_momdif_sys0_sec3",
"hparticle_rk_proton_momdif_sys0_sec4",
"hparticle_rk_proton_momdif_sys0_sec5",
"hparticle_rk_proton_momdif_sys1_sec0",
"hparticle_rk_proton_momdif_sys1_sec1",
"hparticle_rk_proton_momdif_sys1_sec2",
"hparticle_rk_proton_momdif_sys1_sec3",
"hparticle_rk_proton_momdif_sys1_sec4",
"hparticle_rk_proton_momdif_sys1_sec5",

"hparticle_MetaMatchQualTof[0]",
"hparticle_MetaMatchQualTof[1]",
"hparticle_MetaMatchQualTof[2]",
"hparticle_MetaMatchQualTof[3]",
"hparticle_MetaMatchQualTof[4]",
"hparticle_MetaMatchQualTof[5]",
"hparticle_MetaMatchQualRpc[0]",
"hparticle_MetaMatchQualRpc[1]",
"hparticle_MetaMatchQualRpc[2]",
"hparticle_MetaMatchQualRpc[3]",
"hparticle_MetaMatchQualRpc[4]",
"hparticle_MetaMatchQualRpc[5]",
"hparticle_MetaMatchQualShw[0]",
"hparticle_MetaMatchQualShw[1]",
"hparticle_MetaMatchQualShw[2]",
"hparticle_MetaMatchQualShw[3]",
"hparticle_MetaMatchQualShw[4]",
"hparticle_MetaMatchQualShw[5]",

"hparticle_mult[0][0]",
"hparticle_mult[1][0]",
"hparticle_mult[2][0]",
"hparticle_mult[3][0]",
"hparticle_mult[4][0]",
"hparticle_mult[5][0]",
"hparticle_mult[6][0]",
"hparticle_mult[0][1]",
"hparticle_mult[1][1]",
"hparticle_mult[2][1]",
"hparticle_mult[3][1]",
"hparticle_mult[4][1]",
"hparticle_mult[5][1]",

"hparticle_mult_select[0][0]",
"hparticle_mult_select[1][0]",
"hparticle_mult_select[2][0]",
"hparticle_mult_select[3][0]",
"hparticle_mult_select[4][0]",
"hparticle_mult_select[5][0]",
"hparticle_mult_select[6][0]",
"hparticle_mult_select[0][1]",
"hparticle_mult_select[1][1]",
"hparticle_mult_select[2][1]",
"hparticle_mult_select[3][1]",
"hparticle_mult_select[4][1]",
"hparticle_mult_select[5][1]",



"hparticle_mass",
"hparticle_mass_RPC",
"hparticle_mass_TOF",

"hparticle_TofdEdx",
