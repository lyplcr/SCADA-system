#include "stdafx.h"
#include "Elektrana.h"



void Elektrana::setP(double p){P=p;}
void Elektrana::setQ(double q){Q=q;}
void Elektrana::setU(double u){napon=u;}
void Elektrana::setF(double f){frekvencija=f;}
void Elektrana::setIBat(double ibat){struja_bat=ibat;}
void Elektrana::setUBat(double ubat){napon_bat=ubat;}
void Elektrana::setNapBat(double nb){napunjenost_bat=P/max_snaga;}
void Elektrana::setPunjenje(bool p){punjenje=p; struja_bat=2;}
void Elektrana::setPranjenje(bool p){praznjenje=p;struja_bat=0;}
void Elektrana::setBaterija(bool b){baterija=b;}
void Elektrana::setNapajanje(bool nap){napajanje=nap;}
void Elektrana::PostaviParametre(String ^ime,double p,double q, double u, double f, double ibat, double ubat, double napon_baterije, double min_napon, double max_napon, double min_f, double max_f, double min_struja, double max_struja,double p_pid, double i_pid, double d_pid, double max_snaga)
{
	ime=ime;P=p;Q=q;napon=u;frekvencija=f;struja_bat=ibat;napon_bat=ubat;napunjenost_bat=napon_baterije;min_napon=min_napon;max_napon=max_napon;min_f=min_f;max_f=max_f;min_struja=min_struja;max_struja=max_struja;p_pid=p_pid;i_pid=i_pid;d_pid=d_pid;max_snaga=max_snaga;
}

double Elektrana::getP(){return P;}
double Elektrana::getQ(){return Q;}
double Elektrana::getU(){return napon;}
double Elektrana::getF(){return frekvencija;}
double Elektrana::getIbat(){return struja_bat;}
double Elektrana::getUBat(){return napon_bat;}
double Elektrana::getNapBat(){return P/max_snaga;}
bool Elektrana::getPunjnje(){return punjenje;}
bool Elektrana::getPraznjenje(){return praznjenje;}
bool Elektrana::getBaterija(){return baterija;}
bool Elektrana::getNapajanje(){return napajanje;}
bool Elektrana::MozeLiPunjenje()
{
	if(P>0.05*max_snaga)
	{
		
		return false;
	}

	else
	{
		return true;
		
	}
}

