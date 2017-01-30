#include "stdafx.h"
#include "MyTimes.h"

void MyTimes::setTime(int hour, int min, int sec) {
	h = hour; m = min; s = sec;
}

int MyTimes::getHours() {
	return(h); 
}

void MyTimes::tick() { 
	s++; 
}

void MyTimes::add(int hour, int min, int sec) {
	h += hour, m += min, s += sec;
}

bool MyTimes::equals(MyTimes & time) {
	if ((time.h == h) && (time.m == m) && (time.s == s)) {
		return true;
	}
	return false;	
}

void MyTimes::giveTime()
{
	// normalise();
	cout << h << " h " << m << " min " << s << " sec ";
}
