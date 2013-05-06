#ifndef POTROSAC_H
#define POTROSAC_H
#include "stdafx.h"

using namespace System;
using namespace System::Collections;
using namespace System::IO;

ref class Potrosac{
public:
Potrosac();
void setPotrosnja(double p);
void setUkljucen(bool uk);
void setIme(String ^i){ime=i;}

double getPotrosnja();
bool getUkljucen();
String^ getIme(){return ime;}
void Write(BinaryWriter ^bw)
{
	bw->Write(ime);
	bw->Write(potrosnja);
	bw->Write(ukljucen);
}
void Read(BinaryReader ^br)
{
	ime=br->ReadString();
	potrosnja=br->ReadDouble();
	ukljucen=br->ReadBoolean();
}
private:
	String ^ime;
	double potrosnja;
	bool ukljucen;
	
	
};
#endif