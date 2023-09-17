#include "Ride.h"
#include<iostream>
#include<string>
#include<string.h>
#include<fstream>
#include<Windows.h>
using namespace std;
void Ride::loc()
{
	string read;
	fstream ah("Location.txt", ios::in);
	while (!ah.eof()) {
		getline(ah, read);
		cout << read << endl;
	}
}

void Ride::distance(string pl, string  dl)
{
	string a, b, c, d, e, h, i;
	string k = " ";
	char f;
	float g;
	ifstream fin;
	fin.open("Distance.txt");
	if (!fin.is_open())
	{
		cout << "Error ";
	}
	if (fin)
	{
		string temp, foundpass;
		//int i = 1;
		while (fin >> a >> b >> c >> d >> e >> f >> g)
		{
			h = a + k + b;
			i = d + k + e;
			if (h == pl && i == dl)
			{

				dist = g;
				cout << "Distance: " << g << endl;
				fin.close();
				break;
			}
			/*cout << i;*/
		}

	}
	fin.close();

}

void Ride::confirmation()
{
	cout << "                                                                        Book Ride?  ";
	cin >> choice;
	if (choice == "y")
	{
		system("cls");
		totalfare = dist * bkm * peakfactor;
		cout << endl << endl << "                                                    Fare: Rs." << totalfare << endl;
		cout << endl << "                                                            Continue?  ";
		cin >> choice2;
		if (choice2 == "y")
		{
			cout << endl << "                                                        Your Captain is on the way" << endl;
			driB();
			track();
		}

	}
}

void Ride::driB()
{
	for (int i = 0; i < 2; i++)
	{
		driver_name[i++];
		driver_id[i++];
		driver_Ph[i++];
	}
	
	srand((unsigned)time(0));
	int r = rand() % 2;
	cout << "                   Name:" << driver_name[r] << endl;
	cout << "                   Driver ID:" << driver_id[r] << endl;
	cout << "                   Contact:" << driver_Ph[r] << endl;

}

void Ride::track()
{
	cout << "________________________________________________________________________________________________________________________________________________________________" << endl;
	cout << "                                                                                                                                                                 " << endl;
	cout << "                                                                                                                                                                 " << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

	
	for (int i = 0; i < 150; i++)
	{
		cout << x;
		if (i < 10)
			Sleep(200);
		if (i >= 50 && i < 100)
		{
			Sleep(150);
			if (i >= 100)
			{
				Sleep(100);
			}

		}

	}
	cout << "                                                                                                                                                                 " << endl;
	cout << "________________________________________________________________________________________________________________________________________________________________" << endl;
}

void Ride::ride1()
{
	loc();
	cin.ignore();
	cout << endl << "                                                                Enter dropoff location: ";
	getline(cin, dl);                                                                
	cout << endl << "                                                                Enter Block: ";
	cin >> dblock;	                                                                 
					                                                                 
	cin.ignore();	                                                                 
	cout << endl << "                                                                Enter pickup location:  ";
	getline(cin, pl);                                                                
	cout << endl << "                                                                Enter Block: ";
	cin >> pblock;
	cout << endl;
	distance(pl, dl);
	confirmation();
	




																		    
																		    
	
}