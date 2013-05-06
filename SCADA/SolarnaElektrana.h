#ifndef SOLARNAELEKTRANA_H
#define SOLARNAELEKTRANA_H
#include "stdafx.h"
#include "Elektrana.h"

using namespace System;
using namespace System::Collections;
using namespace System::IO;

ref class SolarnaElektrana :public Elektrana
{
public:
	SolarnaElektrana(){}
	SolarnaElektrana(String ^i):Elektrana(i){insolacija=1;ugao=1;min_insolacija=0;max_insolacija=10;min_ugao=0;max_ugao=360;}
	void PostaviParametreSE(String ^ime,double insol,double ugao,double min_ins,double max_ins,double min_ugao,double max_ugao,double p,double q, double u, double f, double ibat, double ubat, double napon_baterije, double min_napon, double max_napon, double min_f, double max_f, double min_struja, double max_struja,double p_pid, double i_pid, double d_pid, double max_snaga);
	void setInsolacija(double ins);
	double getInsolacija();
	void WriteSE(BinaryWriter^ bw)
	{
		bw->Write(insolacija);
		bw->Write(ugao);
		bw->Write(min_insolacija);
		bw->Write(max_insolacija);
		bw->Write(min_ugao);
		bw->Write(max_ugao);
		Elektrana::Write(bw);
	}
	void setUgao(double u);
	void setMinIns(double min){min_insolacija=min;}
	void setMaxIns(double max){max_insolacija=max;}
	void setMinUgao(double minu){min_ugao=minu;}
	void ReadSE(BinaryReader^ br)
	{
		insolacija=br->ReadDouble();
		ugao=br->ReadDouble();
		min_insolacija=br->ReadDouble();
		max_insolacija=br->ReadDouble();;
		min_ugao=br->ReadDouble();
		max_ugao=br->ReadDouble();
		Elektrana::Read(br);
	}
	void setMaxUgao(double maxu){max_ugao=maxu;}
	double getUgao();
	double getMinInsolacija(){return min_insolacija;}
	double getMaxInsolacija(){return max_insolacija;}
	double getMinUgao(){return min_ugao;}
	double getMaxUgao(){return max_ugao;}
	
	
	
private:
	double insolacija,ugao;
	double min_insolacija, max_insolacija; //SE
	double min_ugao, max_ugao; //SE

	
};
#endif