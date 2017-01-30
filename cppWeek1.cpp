// cppWeek1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyTimes.h"

int main(void) {
	MyTimes tijd;
	MyTimes aTijd;

	tijd.setTime(3, 20, 45);
	aTijd.setTime(3, 40, 20);
	
	// tijd.setTime(12, 30, 20);
	// tijd.giveTime();
	cout << tijd.equals(aTijd) << endl;
	cin.get();
}

