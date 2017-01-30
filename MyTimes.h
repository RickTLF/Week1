#pragma once
#include <iostream>
using namespace std;

class MyTimes {
	int h, m, s;

public:
	void setTime(int hour, int min, int sec);
	int getHours();
	void giveTime();
	// int getMins();
	// int getSecs();
	void tick(); //1 second
	void add(int hour, int min, int sec);
	bool equals(MyTimes & time);

private:
	void normalise(); // vb: 61 min 61 sec. ==> 1 h 2 min 1 sec
};