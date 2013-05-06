#pragma once

using namespace System;
using namespace System::Collections;
using namespace System::IO;

ref class Elektrana
{


public:
	Elektrana(){}
	Elektrana(String ^i) {ime=i;P=1;Q=1;napon=1;frekvencija=50;max_napon=5;min_napon=0;max_f=60;min_f=40;max_struja=5;min_struja=1;p_pid=1; i_pid=1; d_pid=1;max_snaga=5;struja_bat=1; napon_bat=1; napunjenost_bat=0.5;punjenje=true; praznjenje=false; baterija=true; napajanje=false;ukljucena=true;}
	void PostaviParametre(String ^ime,double p,double q, double u, double f, double ibat, double ubat, double napon_baterije, double min_napon, double max_napon, double min_f, double max_f, double min_struja, double max_struja,double p_pid, double i_pid, double d_pid, double max_snaga);
	void setP(double p);
	void setQ(double q);
	void setU(double u);
	void setF(double f);
	void setIBat(double ibat);
	void setUBat(double ubat);
	void setNapBat(double nb);
	void setPunjenje(bool p);
	void setPražnjenje(bool p);
	void setBaterija(bool b);
	void setNapajanje(bool nap);
	void setMaxNapon(double m_n){max_napon=m_n;}
	void setMinNapon(double min_n){min_napon=min_n;}
	void setMaxSnaga(double s){max_snaga=s;}
	void setMinF(double minf){min_f=minf;}
	void setMaxF(double maxf){max_f=maxf;}
	void setMinStruja(double mins){min_struja=mins;}
	void setMaxStruja(double maxs){max_struja=maxs;}
	void setPPid(double ppid){p_pid=ppid;}
	void setIPid(double ipid){i_pid=ipid;}
	void setDPid(double dpid){d_pid=dpid;}
	void setUkljucena(bool uk){ukljucena=uk;napajanje=uk;}

	bool MozeLiPunjenje();
	bool getUkljucena() {return ukljucena;}
	double getP();
	double getQ();
	double getU();
	double getF();
	double getIbat();
	double getUBat();
	double getNapBat();
	bool getPunjnje();
	bool getPraznjenje();
	bool getBaterija();
	bool getNapajanje();
	double getMaxNapon(){return max_napon;}
	double getMinNapon(){return min_napon;}
	double getMaxFreq(){return max_f;}
	double getMinFreq(){return min_f;}
	double getMaxStruja(){return max_struja;}
	double getMinStruja(){return min_struja;}
	double getPPid(){return p_pid;}
	double getIPid(){return i_pid;}
	double getDPid(){return d_pid;}
	double getMaxSnaga(){return max_snaga;}
	String^ getIme(){return ime;}
	void Write(BinaryWriter^ bw)
	{
		bw->Write(ime);
		bw->Write(P);
		bw->Write(Q);
		bw->Write(napon);
		bw->Write(frekvencija);
		bw->Write(max_napon);
		bw->Write(min_napon);
		bw->Write(max_f);
		bw->Write(min_f);
		bw->Write(max_struja);
		bw->Write(min_struja);
		bw->Write(p_pid);
		bw->Write(i_pid);
		bw->Write(d_pid);
		bw->Write(max_snaga);
		bw->Write(struja_bat);
		bw->Write(napon_bat);
		bw->Write(napunjenost_bat);
		bw->Write(punjenje);
		bw->Write(praznjenje);
		bw->Write(baterija);
		bw->Write(napajanje);
		bw->Write(ukljucena);
	}
	void Read(BinaryReader^ br)
	{
		ime=br->ReadString();
		P=br->ReadDouble();
		Q=br->ReadDouble();
		napon=br->ReadDouble();
		frekvencija=br->ReadDouble();
		max_napon=br->ReadDouble();
		min_napon=br->ReadDouble();
		max_f=br->ReadDouble();
		min_f=br->ReadDouble();
		max_struja=br->ReadDouble();
		min_struja=br->ReadDouble();
		p_pid=br->ReadDouble();
		i_pid=br->ReadDouble();
		d_pid=br->ReadDouble();
		max_snaga=br->ReadDouble();
		struja_bat=br->ReadDouble();
		napon_bat=br->ReadDouble();
		napunjenost_bat=br->ReadDouble();
		punjenje=br->ReadBoolean();
		praznjenje=br->ReadBoolean();
		baterija=br->ReadBoolean();
		napajanje=br->ReadBoolean();
		ukljucena=br->ReadBoolean();
	}
	
	private:
	String^ ime;
	double P, Q;
	double napon, frekvencija;
	double max_napon, min_napon;
	double max_f, min_f;
	double max_struja, min_struja;
	double p_pid, i_pid, d_pid; //parametri regulatora, sve elektrane
	double max_snaga;
	double struja_bat, napon_bat, napunjenost_bat;
	bool punjenje, praznjenje, baterija, napajanje, ukljucena;

	
};
