#include "stdafx.h"
#include "Voertuig.h"
#include <string>

Voertuig::Voertuig(string merk, string soort, int jaar) {
	this->merk = merk;
	this->soort = soort;
	this->jaartal = to_string(jaar);
	this->jaar = jaar;
}

void Voertuig::geefWeer() { //zet data op het scherm
	cout << "Soort: " << soort << " merk: " << merk << " gekocht: " << jaar << endl;
}

void Voertuig::naarJaar() {
	char hetJaar[5];
	strncpy_s(hetJaar, jaartal.c_str(), 4);
	jaar = zetJaarOm(hetJaar);
}

int zetJaarOm(char jaar[6]) {
	int aantalJaar = 0;
	for (int i = 0; i<4; i++) {
		aantalJaar *= 10;
		aantalJaar += jaar[i] - 48;
	}
	if (aantalJaar > 1900 && aantalJaar < 2100) return aantalJaar;
	return 0;
}

//"1990 motor bmw" ,"2000 auto Opel", "1984 vrachtwagen Daf"
void Voertuig::leesData(char data[]) {
	jaartal.clear();
	jaartal = string(data).substr(0, string(data).find_first_of(" "));
	naarJaar();

	/*
	 * Use 'find_first_of(" ") + 1' and 'find_last_of(" ")' 
	 * to get the two indexes of any string between spaces.
	 * use '+ 1' to skip the first space.
	 */
	string tempString = string(data).substr(string(data).find_first_of(" ") + 1, string(data).find_last_of(" "));
	
	soort.clear();
	soort = tempString.substr(0, tempString.find_first_of(" "));
	
	merk.clear();
	merk = tempString.substr(tempString.find_first_of(" ") + 1, tempString.find_last_of(" "));
}