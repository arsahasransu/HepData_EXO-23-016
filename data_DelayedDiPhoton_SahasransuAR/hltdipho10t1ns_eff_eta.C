#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hltdipho10t1ns_eff_eta()
{
//=========Macro generated from canvas: c2025_11_20_15_40_27/c2025_11_20_15_40_27
//=========  (Thu Nov 20 15:40:27 2025) by ROOT version 6.36.04
   TCanvas *c2025_11_20_15_40_27 = new TCanvas("c2025_11_20_15_40_27", "c2025_11_20_15_40_27", 0, 0, 700, 700);
   gStyle->SetOptFit(0);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(1);
   gStyle->SetLineWidth(2);
   c2025_11_20_15_40_27->SetHighLightColor(2);
   TColor::SetPalette(80, nullptr);
   c2025_11_20_15_40_27->Range(-3.698137,-0.2012987,2.761491,1.097403);
   c2025_11_20_15_40_27->SetFillColor(0);
   c2025_11_20_15_40_27->SetBorderMode(0);
   c2025_11_20_15_40_27->SetBorderSize(2);
   c2025_11_20_15_40_27->SetLeftMargin(0.17);
   c2025_11_20_15_40_27->SetRightMargin(0.025);
   c2025_11_20_15_40_27->SetTopMargin(0.075);
   c2025_11_20_15_40_27->SetBottomMargin(0.155);
   c2025_11_20_15_40_27->SetFrameBorderMode(0);
   c2025_11_20_15_40_27->SetFrameBorderMode(0);
   
   std::vector<Double_t> dummyhist__130_x_vect140{
      -2.6, -2.4, -2.2, -2.1, -2, -1.8, -1.6, -1.4, -1.2, -1,
      -0.8, -0.6, -0.4, -0.2, 0, 0.2, 0.4, 0.6, 0.8, 1,
      1.2, 1.4, 1.6, 1.8, 2, 2.1, 2.2, 2.4, 2.6
   };
   TH1F *dummyhist__130 = new TH1F("dummyhist__130", "", 28, dummyhist__130_x_vect140.data());
   dummyhist__130->SetMinimum(0);
   dummyhist__130->SetMaximum(1);
   dummyhist__130->SetStats(0);
   dummyhist__130->SetLineColor(TColor::GetColor("#000099"));
   dummyhist__130->GetXaxis()->SetTitle("#eta (e_{2})");
   dummyhist__130->GetXaxis()->SetLabelFont(42);
   dummyhist__130->GetXaxis()->SetLabelSize(0.06499999761581421);
   dummyhist__130->GetXaxis()->SetTitleSize(0.06499999761581421);
   dummyhist__130->GetXaxis()->SetTitleOffset(1.090000033378601);
   dummyhist__130->GetXaxis()->SetTitleFont(42);
   dummyhist__130->GetYaxis()->SetTitle("L1T + HLT efficiency");
   dummyhist__130->GetYaxis()->SetLabelFont(42);
   dummyhist__130->GetYaxis()->SetLabelOffset(0.009999999776482582);
   dummyhist__130->GetYaxis()->SetLabelSize(0.06499999761581421);
   dummyhist__130->GetYaxis()->SetTitleSize(0.06499999761581421);
   dummyhist__130->GetYaxis()->SetTitleOffset(1.274999976158142);
   dummyhist__130->GetYaxis()->SetTitleFont(42);
   dummyhist__130->GetZaxis()->SetLabelFont(42);
   dummyhist__130->GetZaxis()->SetTitleOffset(1);
   dummyhist__130->GetZaxis()->SetTitleFont(42);
   dummyhist__130->Draw("e1");
   
   std::vector<Double_t> tid1ns_elprobe_inZwindow_eta_rebinned_clone12_x_vect141{
      -2.6, -2.4, -2.2, -2.1, -2, -1.8, -1.6, -1.4, -1.2, -1,
      -0.8, -0.6, -0.4, -0.2, 0, 0.2, 0.4, 0.6, 0.8, 1,
      1.2, 1.4, 1.6, 1.8, 2, 2.1, 2.2, 2.4, 2.6
   };
   TEfficiency *tid1ns_elprobe_inZwindow_eta_rebinned_clone12 = new TEfficiency("tid1ns_elprobe_inZwindow_eta_rebinned_clone", "", 28, tid1ns_elprobe_inZwindow_eta_rebinned_clone12_x_vect141.data());
   
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetConfidenceLevel(0.6826895);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetBetaAlpha(1);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetBetaBeta(1);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetWeight(1);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetStatisticOption(static_cast<TEfficiency::EStatOption>(0));
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPosteriorMode(0);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetShortestInterval(0);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(0,0);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(0,0);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(1,302);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(1,4);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(2,327);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(2,6);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(3,106);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(3,7);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(4,64);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(4,46);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(5,187);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(5,146);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(6,175);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(6,150);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(7,276);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(7,240);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(8,562);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(8,498);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(9,706);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(9,636);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(10,614);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(10,561);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(11,655);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(11,596);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(12,1048);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(12,946);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(13,560);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(13,499);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(14,1227);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(14,1116);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(15,1094);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(15,992);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(16,526);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(16,478);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(17,997);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(17,900);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(18,667);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(18,593);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(19,576);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(19,509);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(20,636);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(20,564);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(21,491);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(21,450);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(22,239);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(22,212);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(23,193);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(23,158);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(24,168);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(24,132);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(25,71);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(25,55);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(26,100);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(26,3);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(27,303);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(27,5);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(28,269);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(28,4);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetTotalEvents(29,0);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetPassedEvents(29,0);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetFillColor(19);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetLineWidth(2);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetMarkerStyle(20);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->SetMarkerSize(1.05);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone12->Draw("e1 samep");
   
   TLegend *leg = new TLegend(0.375, 0.4, 0.625, 0.45, nullptr, "brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *legentry = leg->AddEntry("tid1ns_elprobe_inZwindow_eta_rebinned_clone","e/#gamma_{2} E_{T} > 12 GeV","lpe");
   legentry->SetLineWidth(2);
   legentry->SetMarkerStyle(20);
   legentry->SetMarkerSize(1.05);
   legentry->SetTextFont(42);
   leg->Draw();
   TLatex *tex = new TLatex(0.375, 0.49, "#bf{CMS}");
   tex->SetTextFont(42);
   tex->SetTextSize(0.065);
   tex->SetLineWidth(2);
   tex->SetNDC();
   tex->Draw();
   tex = new TLatex(0.437, 0.34, "seed time > 1 ns,");
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->SetNDC();
   tex->Draw();
   tex = new TLatex(0.437, 0.26, "|#eta| < 2.1");
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
   
   TGaxis *gaxis = new TGaxis(-2.6, 1, 2.6, 1,           -2.6,            2.6, 506, "-", 0);
   gaxis->SetLineWidth(2);
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->Draw();
   
   gaxis = new TGaxis(2.6, 0, 2.6, 1,              0,              1, 510, "+", 0);
   gaxis->SetLineWidth(2);
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->Draw();
   c2025_11_20_15_40_27->Modified();
   c2025_11_20_15_40_27->SetSelected(c2025_11_20_15_40_27);

   c2025_11_20_15_40_27->SaveAs("hltdipho10t1ns_eff_eta.pdf");
}
