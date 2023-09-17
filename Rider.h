#include<iostream>
#include<windows.h>
#include<string>
#include<fstream>
#include"Person1.h"
using namespace std;
class Rider :public Person2{
protected :
	int choice;
public:
	Rider();
void login_rider();
	void work();
};