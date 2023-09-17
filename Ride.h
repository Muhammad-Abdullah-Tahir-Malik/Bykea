#pragma once
#include<string>
using namespace std;
class Ride
{
protected:
	string dl, pl, dblock, pblock, loc1_name, loc2_name, loc3_name,
		loc4_name, loc5_name, loc6_name, loc7_name, loc8_name, loc9_name, loc10_name, choice, choice2,                         driver_name[2] = { "Abdullah","Ali" };
	double bkm=4.69,  avg_b = 50, ptp = 234, peakfactor=2.5;
	float totalfare,dist;
	char x = 236;
	                                                                                                                           int d, driver_id[2] = { 10012,10013 }, driver_Ph[2]{ 031342,030011 };
		
public:

	void distance(string, string);
	void confirmation();
		void loc();										
		void ride1();
		void driB();
		void track();
};													




