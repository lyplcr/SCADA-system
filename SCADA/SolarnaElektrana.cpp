#include "stdafx.h"
#include "SolarnaElektrana.h"


void SolarnaElektrana::setInsolacija(double ins){insolacija=ins;}
double SolarnaElektrana::getInsolacija(){return insolacija;}
void SolarnaElektrana::setUgao(double u){ugao=u;}
double SolarnaElektrana::getUgao(){return ugao;}
void SolarnaElektrana::PostaviParametreSE(String ^ime,double insol,double ugao,double min_ins,double max_ins,double min_ugao,double max_ugao,double p,double q, double u, double f, double ibat, double ubat, double napon_baterije, double min_napon, double max_napon, double min_f, double max_f, double min_struja, double max_struja,double p_pid, double i_pid, double d_pid, double max_snaga)
{
	insolacija=insol;ugao=ugao;min_insolacija=min_ins;max_insolacija=max_ins;max_ugao=max_ugao;min_ugao=min_ugao;
	Elektrana::PostaviParametre(ime,p,q, u,  f,  ibat,  ubat,  napon_baterije,  min_napon, max_napon,  min_f, max_f,  min_struja, max_struja, p_pid,  i_pid,  d_pid,  max_snaga);
}