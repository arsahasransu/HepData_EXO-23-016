#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hltdipho10t1ns_eff_pt()
{
//=========Macro generated from canvas: c2025_11_19_00_26_36/c2025_11_19_00_26_36
//=========  (Wed Nov 19 00:26:36 2025) by ROOT version 6.36.04
   TCanvas *c2025_11_19_00_26_36 = new TCanvas("c2025_11_19_00_26_36", "c2025_11_19_00_26_36", 0, 0, 700, 700);
   gStyle->SetOptFit(0);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(1);
   gStyle->SetLineWidth(2);
   c2025_11_19_00_26_36->SetHighLightColor(2);
   TColor::SetPalette(80, nullptr);
   c2025_11_19_00_26_36->Range(-7.291925,-0.2012987,47.36646,1.097403);
   c2025_11_19_00_26_36->SetFillColor(0);
   c2025_11_19_00_26_36->SetBorderMode(0);
   c2025_11_19_00_26_36->SetBorderSize(2);
   c2025_11_19_00_26_36->SetLeftMargin(0.17);
   c2025_11_19_00_26_36->SetRightMargin(0.025);
   c2025_11_19_00_26_36->SetTopMargin(0.075);
   c2025_11_19_00_26_36->SetBottomMargin(0.155);
   c2025_11_19_00_26_36->SetFrameBorderMode(0);
   c2025_11_19_00_26_36->SetFrameBorderMode(0);
   
   std::vector<Double_t> dummyhist__10_x_vect10{
      0, 2, 4, 6, 8, 10, 12, 14, 16, 18,
      20, 22, 24, 26, 28, 30, 32, 34, 36, 38,
      40, 42, 44, 46
   };
   TH1F *dummyhist__10 = new TH1F("dummyhist__10", "", 23, dummyhist__10_x_vect10.data());
   dummyhist__10->SetMinimum(0);
   dummyhist__10->SetMaximum(1);
   dummyhist__10->SetStats(0);
   dummyhist__10->SetLineColor(TColor::GetColor("#000099"));
   dummyhist__10->GetXaxis()->SetTitle("p_{T} (e_{2}) [GeV]");
   dummyhist__10->GetXaxis()->SetRange(2, 23);
   dummyhist__10->GetXaxis()->SetLabelFont(42);
   dummyhist__10->GetXaxis()->SetLabelSize(0.06499999761581421);
   dummyhist__10->GetXaxis()->SetTitleSize(0.06499999761581421);
   dummyhist__10->GetXaxis()->SetTitleOffset(1.090000033378601);
   dummyhist__10->GetXaxis()->SetTitleFont(42);
   dummyhist__10->GetYaxis()->SetTitle("L1T + HLT efficiency");
   dummyhist__10->GetYaxis()->SetLabelFont(42);
   dummyhist__10->GetYaxis()->SetLabelOffset(0.009999999776482582);
   dummyhist__10->GetYaxis()->SetLabelSize(0.06499999761581421);
   dummyhist__10->GetYaxis()->SetTitleSize(0.06499999761581421);
   dummyhist__10->GetYaxis()->SetTitleOffset(1.274999976158142);
   dummyhist__10->GetYaxis()->SetTitleFont(42);
   dummyhist__10->GetZaxis()->SetLabelFont(42);
   dummyhist__10->GetZaxis()->SetTitleOffset(1);
   dummyhist__10->GetZaxis()->SetTitleFont(42);
   dummyhist__10->Draw("e1");
   
   std::vector<Double_t> tid1ns_elprobe_inZwindow_pt_rebinned_clone2_x_vect11{
      0, 2, 4, 6, 8, 10, 12, 14, 16, 18,
      20, 22, 24, 26, 28, 30, 32, 34, 36, 38,
      40, 42, 44, 46
   };
   TEfficiency *tid1ns_elprobe_inZwindow_pt_rebinned_clone2 = new TEfficiency("tid1ns_elprobe_inZwindow_pt_rebinned_clone", "", 23, tid1ns_elprobe_inZwindow_pt_rebinned_clone2_x_vect11.data());
   
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetConfidenceLevel(0.6826895);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetBetaAlpha(1);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetBetaBeta(1);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetWeight(1);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetStatisticOption(static_cast<TEfficiency::EStatOption>(0));
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPosteriorMode(0);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetShortestInterval(0);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(0,0);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(0,0);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(1,0);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(1,0);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(2,0);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(2,0);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(3,49);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(3,4);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(4,84);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(4,1);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(5,78);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(5,6);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(6,79);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(6,36);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(7,101);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(7,57);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(8,139);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(8,80);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(9,186);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(9,130);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(10,256);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(10,176);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(11,326);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(11,239);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(12,420);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(12,295);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(13,488);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(13,360);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(14,586);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(14,444);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(15,675);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(15,517);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(16,871);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(16,678);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(17,952);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(17,764);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(18,1149);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(18,953);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(19,1282);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(19,1097);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(20,1378);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(20,1201);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(21,1589);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(21,1376);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(22,1257);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(22,1112);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(23,685);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(23,595);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetTotalEvents(24,509);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetPassedEvents(24,385);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetFillColor(19);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetMarkerStyle(20);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->SetMarkerSize(1.05);
   tid1ns_elprobe_inZwindow_pt_rebinned_clone2->Draw("e1 samep");
   
   TLegend *leg = new TLegend(0.51, 0.45, 0.71, 0.5, nullptr, "brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *legentry = leg->AddEntry("tid1ns_elprobe_inZwindow_pt_rebinned_clone","e/#gamma_{2} E_{T} > 12 GeV,","lpe");
   legentry->SetMarkerStyle(20);
   legentry->SetMarkerSize(1.05);
   legentry->SetTextFont(42);
   leg->Draw();
   TLatex *tex = new TLatex(0.225, 0.835, "#bf{CMS}");
   tex->SetTextFont(42);
   tex->SetTextSize(0.065);
   tex->SetLineWidth(2);
   tex->SetNDC();
   tex->Draw();
   tex = new TLatex(0.56, 0.39, "seed time > 1 ns,");
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->SetNDC();
   tex->Draw();
   tex = new TLatex(0.56, 0.32, "|#eta| < 2.1");
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->SetNDC();
   tex->Draw();
   tex = new TLatex(0.975, 0.945, "10.8 fb^{-1} (2023) (13.6 TeV)");
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->SetNDC();
   tex->Draw();
   TLine *line = new TLine(2, 1, 46, 1);
   line->SetLineWidth(2);
   line->Draw("SAME");
   line = new TLine(46, 0, 46, 1);
   line->SetLineWidth(2);
   line->Draw("SAME");
   c2025_11_19_00_26_36->Modified();
   c2025_11_19_00_26_36->SetSelected(c2025_11_19_00_26_36);

   c2025_11_19_00_26_36->SaveAs("hltdipho10t1ns_eff_pt_fromC.pdf");
}
