#pragma once
#include<string>
using namespace std;
class Dilevery
{
protected:
	string dl, pl, dblock, pblock, drivername[2] = { "Abdullah","Ali" },choice3,choice4;
	float totalfare, bkm = 4.69, avg_b = 50, ptp = 234, peakfactor = 2.5, dist;
	char x = 236;
	int choice, choice2, d, driverid[2] = { 10012,10013 }, driverPh[2]{ 031342,030011 };
	
public:
	void loc();
	void driB();
	void track();
	void distance(string, string);
	void confirmation();
	void dilevery1();
};

