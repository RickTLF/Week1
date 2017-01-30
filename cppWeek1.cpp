// cppWeek1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyTimes.h"

int main(void) {
	MyTimes tijd;
	MyTimes aTijd;

	tijd.setTime(3, 40, 25);
	aTijd.setTime(3, 40, 20);

	cout << aTijd.equals(tijd) << endl;
	cin.get();
}

