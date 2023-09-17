#pragma once
#include<iostream>
#include<fstream>
#include<windows.h>
#include<string>
using namespace std;
class Admin5
{
protected:
	string admin_name = "Ahmad", admin_password = "loveu";
	string driver_name, car_number, car_name;
	long int phone_number;	

public:

	void print();
	bool operator == (Admin5& temp);
	void operator = (Admin5& temp);
	void Admin1();
	void cordxy(int, int);					//design
	void designFirst(int, int, int, int);
	void line(int);
	void Admin_choice();
	void Hotels();
	void viewHotels();
	void jhourtown();
	void wahdatcolony();
	void muslim();
	void alama();
	void anar();
	void samna();
	void ichra();
	void View_Rider();
	void Add_Rider();
	void Deleate_Rider();
	void Modify_Rider();

};

