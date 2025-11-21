#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hltdipho10t1ns_eff_seedtime()
{
//=========Macro generated from canvas: c2025_11_20_15_37_50/c2025_11_20_15_37_50
//=========  (Thu Nov 20 15:37:50 2025) by ROOT version 6.36.04
   TCanvas *c2025_11_20_15_37_50 = new TCanvas("c2025_11_20_15_37_50", "c2025_11_20_15_37_50", 0, 0, 700, 700);
   gStyle->SetOptFit(0);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(1);
   gStyle->SetLineWidth(2);
   c2025_11_20_15_37_50->SetHighLightColor(2);
   TColor::SetPalette(80, nullptr);
   c2025_11_20_15_37_50->Range(0.1832298,-0.2012987,2.046584,1.097403);
   c2025_11_20_15_37_50->SetFillColor(0);
   c2025_11_20_15_37_50->SetBorderMode(0);
   c2025_11_20_15_37_50->SetBorderSize(2);
   c2025_11_20_15_37_50->SetLeftMargin(0.17);
   c2025_11_20_15_37_50->SetRightMargin(0.025);
   c2025_11_20_15_37_50->SetTopMargin(0.075);
   c2025_11_20_15_37_50->SetBottomMargin(0.155);
   c2025_11_20_15_37_50->SetFrameBorderMode(0);
   c2025_11_20_15_37_50->SetFrameBorderMode(0);
   
   std::vector<Double_t> dummyhist__126_x_vect132{
      0.5, 0.6, 0.7, 0.7999999999999999, 0.8999999999999999, 0.9999999999999999, 1.1, 1.2, 1.3, 1.4,
      1.5, 1.6, 1.7, 1.8, 1.9, 2
   };
   TH1F *dummyhist__126 = new TH1F("dummyhist__126", "", 15, dummyhist__126_x_vect132.data());
   dummyhist__126->SetMinimum(0);
   dummyhist__126->SetMaximum(1);
   dummyhist__126->SetStats(0);
   dummyhist__126->SetLineColor(TColor::GetColor("#000099"));
   dummyhist__126->GetXaxis()->SetTitle("seed time (e_{2}) [ns]");
   dummyhist__126->GetXaxis()->SetLabelFont(42);
   dummyhist__126->GetXaxis()->SetLabelSize(0.06499999761581421);
   dummyhist__126->GetXaxis()->SetTitleSize(0.06499999761581421);
   dummyhist__126->GetXaxis()->SetTitleOffset(1.090000033378601);
   dummyhist__126->GetXaxis()->SetTitleFont(42);
   dummyhist__126->GetYaxis()->SetTitle("L1T + HLT efficiency");
   dummyhist__126->GetYaxis()->SetLabelFont(42);
   dummyhist__126->GetYaxis()->SetLabelOffset(0.009999999776482582);
   dummyhist__126->GetYaxis()->SetLabelSize(0.06499999761581421);
   dummyhist__126->GetYaxis()->SetTitleSize(0.06499999761581421);
   dummyhist__126->GetYaxis()->SetTitleOffset(1.274999976158142);
   dummyhist__126->GetYaxis()->SetTitleFont(42);
   dummyhist__126->GetZaxis()->SetLabelFont(42);
   dummyhist__126->GetZaxis()->SetTitleOffset(1);
   dummyhist__126->GetZaxis()->SetTitleFont(42);
   dummyhist__126->Draw("e1");
   
   std::vector<Double_t> tid_elprobe_inZwindow_seedtime_rebinned_clone8_x_vect133{
      0.5, 0.6, 0.7, 0.7999999999999999, 0.8999999999999999, 0.9999999999999999, 1.1, 1.2, 1.3, 1.4,
      1.5, 1.6, 1.7, 1.8, 1.9, 2
   };
   TEfficiency *tid_elprobe_inZwindow_seedtime_rebinned_clone8 = new TEfficiency("tid_elprobe_inZwindow_seedtime_rebinned_clone", "", 15, tid_elprobe_inZwindow_seedtime_rebinned_clone8_x_vect133.data());
   
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetConfidenceLevel(0.6826895);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetBetaAlpha(1);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetBetaBeta(1);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetWeight(1);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetStatisticOption(static_cast<TEfficiency::EStatOption>(0));
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPosteriorMode(0);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetShortestInterval(0);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(0,179751);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(0,1609);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(1,10329);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(1,113);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(2,8954);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(2,103);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(3,7617);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(3,99);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(4,6451);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(4,66);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(5,5648);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(5,57);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(6,2447);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(6,1868);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(7,2050);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(7,1609);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(8,1659);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(8,1306);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(9,1395);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(9,1152);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(10,1102);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(10,902);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(11,868);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(11,717);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(12,682);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(12,570);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(13,578);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(13,486);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(14,439);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(14,363);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(15,410);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(15,350);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetTotalEvents(16,1509);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetPassedEvents(16,1183);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetFillColor(19);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetLineWidth(2);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetMarkerStyle(20);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->SetMarkerSize(1.05);
   tid_elprobe_inZwindow_seedtime_rebinned_clone8->Draw("e1 samep");
   
   TLegend *leg = new TLegend(0.51, 0.45, 0.71, 0.5, nullptr, "brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *legentry = leg->AddEntry("tid_elprobe_inZwindow_seedtime_rebinned_clone","e/#gamma_{2} E_{T} > 12 GeV,","lpe");
   legentry->SetLineWidth(2);
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
   
   TGaxis *gaxis = new TGaxis(0.5, 1, 2, 1,            0.5,              2, 408, "-", 0);
   gaxis->SetLineWidth(2);
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->Draw();
   
   gaxis = new TGaxis(2, 0, 2, 1,              0,              1, 510, "+", 0);
   gaxis->SetLineWidth(2);
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->Draw();
   c2025_11_20_15_37_50->Modified();
   c2025_11_20_15_37_50->SetSelected(c2025_11_20_15_37_50);

   c2025_11_20_15_37_50->SaveAs("hltdipho10t1ns_eff_seedtime.pdf");
}
