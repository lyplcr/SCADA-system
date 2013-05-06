#include "stdafx.h"
#include "Vjetroelektrana.h"


double Vjetroelektrana::getBrzinaVjetra() { return brzina_vjetra;}
String^ Vjetroelektrana::getSmjerVjetra(){return smjer_vjetra;}
void Vjetroelektrana::setBrzinaVjetra(double bv){brzina_vjetra=bv;}
void Vjetroelektrana::setSmjerVjetra(String ^ sv){smjer_vjetra=sv;}
void Vjetroelektrana::PostaviParametreVE(String ^ime,double brzina_vjetra,double max_vjetar,double min_vjetar,String^ smjer,double p,double q, double u, double f, double ibat, double ubat, double napon_baterije, double min_napon, double max_napon, double min_f, double max_f, double min_struja, double max_struja,double p_pid, double i_pid, double d_pid, double max_snaga)
{
	brzina_vjetra=brzina_vjetra;max_vjetar=max_vjetar;min_vjetar=min_vjetar;smjer_vjetra=smjer;
	Elektrana::PostaviParametre(ime,p,q, u,  f,  ibat,  ubat,  napon_baterije,  min_napon, max_napon,  min_f, max_f,  min_struja, max_struja, p_pid,  i_pid,  d_pid,  max_snaga);
}
	
