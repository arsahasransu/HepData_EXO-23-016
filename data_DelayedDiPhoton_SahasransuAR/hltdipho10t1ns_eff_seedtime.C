#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hltdipho10t1ns_eff_seedtime()
{
//=========Macro generated from canvas: c2025_11_19_00_26_29/c2025_11_19_00_26_29
//=========  (Wed Nov 19 00:26:29 2025) by ROOT version 6.36.04
   TCanvas *c2025_11_19_00_26_29 = new TCanvas("c2025_11_19_00_26_29", "c2025_11_19_00_26_29", 0, 0, 700, 700);
   gStyle->SetOptFit(0);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(1);
   gStyle->SetLineWidth(2);
   c2025_11_19_00_26_29->SetHighLightColor(2);
   TColor::SetPalette(80, nullptr);
   c2025_11_19_00_26_29->Range(0.1832298,-0.2012987,2.046584,1.097403);
   c2025_11_19_00_26_29->SetFillColor(0);
   c2025_11_19_00_26_29->SetBorderMode(0);
   c2025_11_19_00_26_29->SetBorderSize(2);
   c2025_11_19_00_26_29->SetLeftMargin(0.17);
   c2025_11_19_00_26_29->SetRightMargin(0.025);
   c2025_11_19_00_26_29->SetTopMargin(0.075);
   c2025_11_19_00_26_29->SetBottomMargin(0.155);
   c2025_11_19_00_26_29->SetFrameBorderMode(0);
   c2025_11_19_00_26_29->SetFrameBorderMode(0);
   
   std::vector<Double_t> dummyhist__9_x_vect8{
      0.5, 0.6, 0.7, 0.7999999999999999, 0.8999999999999999, 0.9999999999999999, 1.1, 1.2, 1.3, 1.4,
      1.5, 1.6, 1.7, 1.8, 1.9, 2
   };
   TH1F *dummyhist__9 = new TH1F("dummyhist__9", "", 15, dummyhist__9_x_vect8.data());
   dummyhist__9->SetMinimum(0);
   dummyhist__9->SetMaximum(1);
   dummyhist__9->SetStats(0);
   dummyhist__9->SetLineColor(TColor::GetColor("#000099"));
   dummyhist__9->GetXaxis()->SetTitle("seed time (e_{2}) [ns]");
   dummyhist__9->GetXaxis()->SetLabelFont(42);
   dummyhist__9->GetXaxis()->SetLabelSize(0.06499999761581421);
   dummyhist__9->GetXaxis()->SetTitleSize(0.06499999761581421);
   dummyhist__9->GetXaxis()->SetTitleOffset(1.090000033378601);
   dummyhist__9->GetXaxis()->SetTitleFont(42);
   dummyhist__9->GetYaxis()->SetTitle("L1T + HLT efficiency");
   dummyhist__9->GetYaxis()->SetLabelFont(42);
   dummyhist__9->GetYaxis()->SetLabelOffset(0.009999999776482582);
   dummyhist__9->GetYaxis()->SetLabelSize(0.06499999761581421);
   dummyhist__9->GetYaxis()->SetTitleSize(0.06499999761581421);
   dummyhist__9->GetYaxis()->SetTitleOffset(1.274999976158142);
   dummyhist__9->GetYaxis()->SetTitleFont(42);
   dummyhist__9->GetZaxis()->SetLabelFont(42);
   dummyhist__9->GetZaxis()->SetTitleOffset(1);
   dummyhist__9->GetZaxis()->SetTitleFont(42);
   dummyhist__9->Draw("e1");
   
   std::vector<Double_t> tid_elprobe_inZwindow_seedtime_rebinned_clone1_x_vect9{
      0.5, 0.6, 0.7, 0.7999999999999999, 0.8999999999999999, 0.9999999999999999, 1.1, 1.2, 1.3, 1.4,
      1.5, 1.6, 1.7, 1.8, 1.9, 2
   };
   TEfficiency *tid_elprobe_inZwindow_seedtime_rebinned_clone1 = new TEfficiency("tid_elprobe_inZwindow_seedtime_rebinned_clone", "", 15, tid_elprobe_inZwindow_seedtime_rebinned_clone1_x_vect9.data());
   
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetConfidenceLevel(0.6826895);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetBetaAlpha(1);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetBetaBeta(1);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetWeight(1);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetStatisticOption(static_cast<TEfficiency::EStatOption>(0));
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPosteriorMode(0);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetShortestInterval(0);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(0,179751);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(0,1609);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(1,10329);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(1,113);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(2,8954);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(2,103);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(3,7617);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(3,99);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(4,6451);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(4,66);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(5,5648);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(5,57);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(6,2447);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(6,1868);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(7,2050);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(7,1609);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(8,1659);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(8,1306);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(9,1395);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(9,1152);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(10,1102);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(10,902);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(11,868);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(11,717);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(12,682);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(12,570);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(13,578);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(13,486);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(14,439);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(14,363);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(15,410);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(15,350);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetTotalEvents(16,1509);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetPassedEvents(16,1183);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetFillColor(19);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetMarkerStyle(20);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->SetMarkerSize(1.05);
   tid_elprobe_inZwindow_seedtime_rebinned_clone1->Draw("e1 samep");
   
   TLegend *leg = new TLegend(0.51, 0.45, 0.71, 0.5, nullptr, "brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *legentry = leg->AddEntry("tid_elprobe_inZwindow_seedtime_rebinned_clone","e/#gamma_{2} E_{T} > 12 GeV,","lpe");
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
   TLine *line = new TLine(0.5, 1, 2, 1);
   line->SetLineWidth(2);
   line->Draw("SAME");
   line = new TLine(2, 0, 2, 1);
   line->SetLineWidth(2);
   line->Draw("SAME");
   c2025_11_19_00_26_29->Modified();
   c2025_11_19_00_26_29->SetSelected(c2025_11_19_00_26_29);

   c2025_11_19_00_26_29->SaveAs("hltdipho10t1ns_eff_seedtime_fromC.pdf");
}
