#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hltdipho10t1ns_eff_eta()
{
//=========Macro generated from canvas: c2025_11_19_00_26_42/c2025_11_19_00_26_42
//=========  (Wed Nov 19 00:26:42 2025) by ROOT version 6.36.04
   TCanvas *c2025_11_19_00_26_42 = new TCanvas("c2025_11_19_00_26_42", "c2025_11_19_00_26_42", 0, 0, 700, 700);
   gStyle->SetOptFit(0);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(1);
   gStyle->SetLineWidth(2);
   c2025_11_19_00_26_42->SetHighLightColor(2);
   TColor::SetPalette(80, nullptr);
   c2025_11_19_00_26_42->Range(-3.698137,-0.2012987,2.761491,1.097403);
   c2025_11_19_00_26_42->SetFillColor(0);
   c2025_11_19_00_26_42->SetBorderMode(0);
   c2025_11_19_00_26_42->SetBorderSize(2);
   c2025_11_19_00_26_42->SetLeftMargin(0.17);
   c2025_11_19_00_26_42->SetRightMargin(0.025);
   c2025_11_19_00_26_42->SetTopMargin(0.075);
   c2025_11_19_00_26_42->SetBottomMargin(0.155);
   c2025_11_19_00_26_42->SetFrameBorderMode(0);
   c2025_11_19_00_26_42->SetFrameBorderMode(0);
   
   std::vector<Double_t> dummyhist__11_x_vect12{
      -2.6, -2.4, -2.2, -2.1, -2, -1.8, -1.6, -1.4, -1.2, -1,
      -0.8, -0.6, -0.4, -0.2, 0, 0.2, 0.4, 0.6, 0.8, 1,
      1.2, 1.4, 1.6, 1.8, 2, 2.1, 2.2, 2.4, 2.6
   };
   TH1F *dummyhist__11 = new TH1F("dummyhist__11", "", 28, dummyhist__11_x_vect12.data());
   dummyhist__11->SetMinimum(0);
   dummyhist__11->SetMaximum(1);
   dummyhist__11->SetStats(0);
   dummyhist__11->SetLineColor(TColor::GetColor("#000099"));
   dummyhist__11->GetXaxis()->SetTitle("#eta (e_{2})");
   dummyhist__11->GetXaxis()->SetLabelFont(42);
   dummyhist__11->GetXaxis()->SetLabelSize(0.06499999761581421);
   dummyhist__11->GetXaxis()->SetTitleSize(0.06499999761581421);
   dummyhist__11->GetXaxis()->SetTitleOffset(1.090000033378601);
   dummyhist__11->GetXaxis()->SetTitleFont(42);
   dummyhist__11->GetYaxis()->SetTitle("L1T + HLT efficiency");
   dummyhist__11->GetYaxis()->SetLabelFont(42);
   dummyhist__11->GetYaxis()->SetLabelOffset(0.009999999776482582);
   dummyhist__11->GetYaxis()->SetLabelSize(0.06499999761581421);
   dummyhist__11->GetYaxis()->SetTitleSize(0.06499999761581421);
   dummyhist__11->GetYaxis()->SetTitleOffset(1.274999976158142);
   dummyhist__11->GetYaxis()->SetTitleFont(42);
   dummyhist__11->GetZaxis()->SetLabelFont(42);
   dummyhist__11->GetZaxis()->SetTitleOffset(1);
   dummyhist__11->GetZaxis()->SetTitleFont(42);
   dummyhist__11->Draw("e1");
   
   std::vector<Double_t> tid1ns_elprobe_inZwindow_eta_rebinned_clone3_x_vect13{
      -2.6, -2.4, -2.2, -2.1, -2, -1.8, -1.6, -1.4, -1.2, -1,
      -0.8, -0.6, -0.4, -0.2, 0, 0.2, 0.4, 0.6, 0.8, 1,
      1.2, 1.4, 1.6, 1.8, 2, 2.1, 2.2, 2.4, 2.6
   };
   TEfficiency *tid1ns_elprobe_inZwindow_eta_rebinned_clone3 = new TEfficiency("tid1ns_elprobe_inZwindow_eta_rebinned_clone", "", 28, tid1ns_elprobe_inZwindow_eta_rebinned_clone3_x_vect13.data());
   
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetConfidenceLevel(0.6826895);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetBetaAlpha(1);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetBetaBeta(1);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetWeight(1);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetStatisticOption(static_cast<TEfficiency::EStatOption>(0));
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPosteriorMode(0);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetShortestInterval(0);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(0,0);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(0,0);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(1,302);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(1,4);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(2,327);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(2,6);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(3,106);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(3,7);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(4,64);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(4,46);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(5,187);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(5,146);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(6,175);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(6,150);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(7,276);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(7,240);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(8,562);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(8,498);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(9,706);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(9,636);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(10,614);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(10,561);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(11,655);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(11,596);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(12,1048);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(12,946);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(13,560);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(13,499);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(14,1227);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(14,1116);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(15,1094);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(15,992);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(16,526);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(16,478);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(17,997);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(17,900);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(18,667);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(18,593);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(19,576);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(19,509);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(20,636);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(20,564);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(21,491);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(21,450);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(22,239);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(22,212);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(23,193);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(23,158);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(24,168);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(24,132);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(25,71);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(25,55);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(26,100);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(26,3);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(27,303);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(27,5);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(28,269);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(28,4);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetTotalEvents(29,0);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetPassedEvents(29,0);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetFillColor(19);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetMarkerStyle(20);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->SetMarkerSize(1.05);
   tid1ns_elprobe_inZwindow_eta_rebinned_clone3->Draw("e1 samep");
   
   TLegend *leg = new TLegend(0.375, 0.4, 0.625, 0.45, nullptr, "brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *legentry = leg->AddEntry("tid1ns_elprobe_inZwindow_eta_rebinned_clone","e/#gamma_{2} E_{T} > 12 GeV,","lpe");
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
   TLine *line = new TLine(-2.6, 1, 2.6, 1);
   line->SetLineWidth(2);
   line->Draw("SAME");
   line = new TLine(2.6, 0, 2.6, 1);
   line->SetLineWidth(2);
   line->Draw("SAME");
   c2025_11_19_00_26_42->Modified();
   c2025_11_19_00_26_42->SetSelected(c2025_11_19_00_26_42);

   c2025_11_19_00_26_42->SaveAs("hltdipho10t1ns_eff_eta_fromC.pdf");
}
