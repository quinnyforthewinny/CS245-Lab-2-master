// main.cpp
//
// tester program for your debugged decrypt() function
//

#include "stdafx.h"
#include "decrypt.h"
#include <string>
#include <iostream>
using std::cout; using std::endl;


int main()
{
	// P.B.
	std::string pb_actual_text = decrypt("XLI KVIEXIWX FERH MR XLI ASVPH MW GLYQFEAYQFE", 0);
	std::string pb_expected_text = "";
	cout << pb_actual_text << endl;

	// C.C.
	std::string cc_actual_text = decrypt("GZ ZNK KTJ UL 'ZOZGTOI', ZNK HUGZ YOTQY", 0);
	std::string cc_expected_text = "";
	cout << cc_actual_text << endl;

	// C.D.
	std::string cd_actual_text = decrypt("ZVFSLUA NYLLU PZ THKL VM WLVWSL", 0);
	std::string cd_expected_text = "";
	cout << cd_actual_text << endl;

	// Z.E.
	std::string ze_actual_text = decrypt("YZIDN DN (ZSKGZODQZ).  T XCVMGZZ CVOZ? (WZXVPNZ YZIDN DN V WVNOVMYO HVI!)", 0);
	std::string ze_expected_text = "";
	cout << ze_actual_text << endl;

	// Z.F.
	std::string zf_actual_text = decrypt("ILUH LV KRW", 0);
	std::string zf_expected_text = "";
	cout << zf_actual_text << endl;

	// T.G.
	std::string tg_actual_text = decrypt("AXOQE SXABO FP IRHB PHVTXIHBO'P CXQEBO", 0);
	std::string tg_expected_text = "";
	cout << tg_actual_text << endl;

	// N.H.
	std::string nh_actual_text = decrypt("UKQ DWZ IA WP 'OYWNWIQYYE'", 0);
	std::string nh_expected_text = "";
	cout << nh_actual_text << endl;

	// C.K.
	std::string ck_actual_text = decrypt("TWDM QA EPIB UISMA I ACJIZC I ACJIZC", 0);
	std::string ck_expected_text = "";
	cout << ck_actual_text << endl;

	// D.P.
	std::string dp_actual_text = decrypt("BFYJW NX BJY", 0);
	std::string dp_expected_text = "";
	cout << dp_actual_text << endl;

	// H.Q.
	std::string hq_actual_text = decrypt("FYL QMJM GQ BCYB", -2);
	std::string hq_expected_text = "HAN SOLO IS DEAD";
	cout <<	hq_actual_text << endl;

	// D.S.
	std::string ds_actual_text = decrypt("RW CQN 'BRGCQ BNWBN', KADLN FRUURB RB MNJM CQN FQXUN CRVN", 0);
	std::string ds_expected_text = "";
	cout << ds_actual_text << endl;

	// T.T.
	std::string tt_actual_text = decrypt("UHU KHLL PTL T WKBEE BGLMKNVMHK BG MAX NGBMXW LMTMXL TBK YHKVX", 0);
	std::string tt_expected_text = "";
	cout << tt_actual_text << endl;

}

