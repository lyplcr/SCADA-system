#include "stdafx.h"
#include "Potrosac.h"

Potrosac::Potrosac(){}
void Potrosac::setPotrosnja(double p){potrosnja=p;}
void Potrosac::setUkljucen(bool uk){ukljucen=uk;}

double Potrosac::getPotrosnja(){return potrosnja;}
bool Potrosac::getUkljucen(){return ukljucen;}