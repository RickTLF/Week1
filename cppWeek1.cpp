// cppWeek1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyTimes.h"
#include "Voertuig.h"

/*int main(void) {
	MyTimes tijd;
	tijd.setTime(3, 40, 119);
	tijd.giveTime();
	cin.get();
}*/

int main(int argc, char* argv[])
{
	char voertuigen[][80] = { "1990 motor bmw" ,
		"2000 auto Opel",
		"1984 vrachtwagen Daf" };

	Voertuig voertuig("Yahama", "boot", 2000);
	Voertuig vt;
	voertuig.geefWeer();
	// vt.leesData(voertuigen[0]);
	// vt.geefWeer();
	// vt.leesData(voertuigen[1]);
	// vt.geefWeer();
	// vt.leesData(voertuigen[2]);
	// vt.geefWeer();
	cin.get();
	return 0;
}