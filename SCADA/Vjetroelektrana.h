#ifndef VJETROELEKTRANA_H
#define VJETROELEKTRANA_H
#include "stdafx.h"
#include "Elektrana.h"

using namespace System;
using namespace System::Collections;
using namespace System::IO;

ref class Vjetroelektrana : Elektrana{
public:
	Vjetroelektrana(){}
	Vjetroelektrana(String ^ime):Elektrana(ime){brzina_vjetra=0;max_vjetar=100;min_vjetar=10;smjer_vjetra="";}
	void PostaviParametreVE(String ^ime,double brzina_vjetra,double max_vjetar,double min_vjetar,String^ smjer,double p,double q, double u, double f, double ibat, double ubat, double napon_baterije, double min_napon, double max_napon, double min_f, double max_f, double min_struja, double max_struja,double p_pid, double i_pid, double d_pid, double max_snaga);
	double getBrzinaVjetra();
	String^ getSmjerVjetra();
	void setBrzinaVjetra(double bv);
	void setSmjerVjetra(String^ sv);
	double getMaxVjetar(){return max_vjetar;}
	double getMinVjetar(){return min_vjetar;}
	void setMaxVjetar(double maxv){max_vjetar=maxv;}
	void setMinVjetar(double minv){min_vjetar=minv;}
	void WriteVE(BinaryWriter ^bw)
	{
		bw->Write(brzina_vjetra);
		bw->Write(max_vjetar);
		bw->Write(min_vjetar);
		bw->Write(smjer_vjetra);
		Elektrana::Write(bw);
	}
	void ReadVE(BinaryReader ^br)
	{
		brzina_vjetra=br->ReadDouble();
		max_vjetar=br->ReadDouble();
		min_vjetar=br->ReadDouble();
		smjer_vjetra=br->ReadString();
		Elektrana::Read(br);
	}
	
private:
	double brzina_vjetra;
	double max_vjetar, min_vjetar; //VE
	String^ smjer_vjetra;
	
};
#endif