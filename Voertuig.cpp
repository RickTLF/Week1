#include "stdafx.h"
#include "Voertuig.h"
#include <string>

Voertuig::Voertuig(string merk, string soort, int jaar) {
	this->merk = merk;
	this->soort = soort;
	this->jaartal = std::to_string(jaar);
	this->jaar = jaar;
}

void Voertuig::geefWeer() { //zet data op het scherm
	cout << soort << " merk: " << merk << " gekocht: " << jaar << endl;
}