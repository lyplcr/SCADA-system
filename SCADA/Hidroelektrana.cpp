#include "stdafx.h"
#include "Hidroelektrana.h"



double Hidroelektrana::getRefNivo(){return ref_nivo;}
double Hidroelektrana::getNivoGornjeg(){return nivo_gornjeg;}
double Hidroelektrana::getNivoDonjeg(){return nivo_donjeg;}
double Hidroelektrana::getSnagaPumpe(){return snaga_pumpe;}
double Hidroelektrana::getOtvKlipa(){return otvorenost_klipa;}

void Hidroelektrana::setNivoGornjeg(double ng){nivo_gornjeg=ng;}
void Hidroelektrana::setNivoDonjeg(double nd) {nivo_donjeg=nd;}
void Hidroelektrana::setRefNivo(double rn){ref_nivo=rn;}
void Hidroelektrana::setSnagaPumpe(double sp){snaga_pumpe=sp;}
void Hidroelektrana::setOtvorenostKlipa(double otv){otvorenost_klipa=otv;}
void Hidroelektrana::PostaviParametreHE(String ^ime,double r_n, double n_g, double n_d, double max_gornji, double min_gornji, double max_donji, double min_donji, double snaga_pumpe, double otvorenost, double p, double q, double u, double f, double ibat, double ubat, double napon_baterije, double min_napon, double max_napon, double min_f, double max_f, double min_struja, double max_struja, double p_pid, double i_pid, double d_pid, double max_snaga)
{
	ref_nivo=r_n;nivo_gornjeg=n_g;nivo_donjeg=n_d;max_gornji=max_gornji;min_gornji=min_gornji;max_donji=max_donji;min_donji=min_donji;snaga_pumpe=snaga_pumpe;otvorenost_klipa=otvorenost;
	Elektrana::PostaviParametre(ime,p,q, u,  f,  ibat,  ubat,  napon_baterije,  min_napon, max_napon,  min_f, max_f,  min_struja, max_struja, p_pid,  i_pid,  d_pid,  max_snaga);
}
