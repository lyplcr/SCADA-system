#ifndef HIDROELEKTRANA_H
#define HIDROELEKTRANA_H
#include "stdafx.h"
#include "Elektrana.h"

using namespace System;
using namespace System::Collections;
using namespace System::IO;

ref class Hidroelektrana :public Elektrana{
public:
	Hidroelektrana(){}
	Hidroelektrana(String ^ime):Elektrana(ime){ref_nivo=1; nivo_gornjeg=1; nivo_donjeg=1;max_gornji=1; min_gornji=1; max_donji=1; min_donji=1;snaga_pumpe=1;otvorenost_klipa=0.5;}
	
	double getRefNivo();
	double getNivoGornjeg();
	double getNivoDonjeg();
	double getSnagaPumpe();
	double getOtvKlipa();
	double getMaxGornji(){return max_gornji;}
	double getMinGornji(){return min_gornji;}
	double getMaxDonji(){return max_donji;}
	double getMinDonji(){return min_donji;}
	void PostaviParametreHE(String ^ime,double r_n, double n_g, double n_d, double max_gornji,double min_gornji,double max_donji,double min_donji,double snaga_pumpe, double otvorenost,double p,double q, double u, double f, double ibat, double ubat, double napon_baterije, double min_napon, double max_napon, double min_f, double max_f, double min_struja, double max_struja,double p_pid, double i_pid, double d_pid, double max_snaga);
	void setNivoGornjeg(double ng);
	void setNivoDonjeg(double nd);
	void setRefNivo(double rn);	
	void setSnagaPumpe(double sp);
	void setOtvorenostKlipa(double otv); //HE
	void setMinGornji(double m){min_gornji=m;}
	void setMaxGornji(double ma){max_gornji=ma;}
	void Write(BinaryWriter ^bw)
	{
		bw->Write(ref_nivo);
		bw->Write(nivo_gornjeg);
		bw->Write(nivo_donjeg);
		bw->Write(max_gornji);
		bw->Write(min_gornji);
		bw->Write(max_donji);
		bw->Write(min_donji);
		bw->Write(snaga_pumpe);
		bw->Write(otvorenost_klipa);
		Elektrana::Write(bw);
	}
	void Read(BinaryReader ^br)
	{
		ref_nivo=br->ReadDouble();
		nivo_gornjeg=br->ReadDouble();
		nivo_donjeg=br->ReadDouble();
		max_gornji=br->ReadDouble();
		min_gornji=br->ReadDouble();
		max_donji=br->ReadDouble();
		min_donji=br->ReadDouble();
		snaga_pumpe=br->ReadDouble();
		otvorenost_klipa=br->ReadDouble();
		Elektrana::Read(br);
	}
	
private:
	double ref_nivo, nivo_gornjeg, nivo_donjeg;
	double max_gornji, min_gornji, max_donji, min_donji; //HE, min_donji i max_donji su ustvari min_referentni i max_referentni
	double snaga_pumpe;
	double otvorenost_klipa; //HE


	
};
#endif