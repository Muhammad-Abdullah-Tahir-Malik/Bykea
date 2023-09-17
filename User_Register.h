#pragma once
//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<string>
#include<windows.h>
#include<fstream>
#include"Food.h"
#include"Person1.h"
#include"Ride.h"
#include"Dilevery.h"
using namespace std;
class User_Register:public Person2
{
protected:
	Food *Fo;
	Ride *Rid;
	Dilevery* dil;
	string/* User_Name, User_Password,*/ User_Email,Con_Pass, phone;//register
	string us_name, us_pass;//login
public:
	User_Register();
	void Registeration();
	void cordxy(int ,int);
	void designFirst(int,int,int,int);
	void line(int);
	void login();
	void Menu();
	void overview();
	~User_Register();
	
};

