#include "Dilevery.h"
#include<iostream>
#include<string>
#include"Dilevery.h"
#include<string.h>
#include<fstream>
#include<Windows.h>
using  namespace std;


void Dilevery ::loc()
{
	
	string read;
	fstream ah("Location.txt", ios::in);
	while (!ah.eof()) {
		getline(ah, read);
		cout << read << endl;
	}


}

void Dilevery::driB()
{
	for (int i = 0; i < 2; i++)
	{
		drivername[i++];
		driverid[i++];
		driverPh[i++];
	}

	srand((unsigned)time(0));
	int r = rand() % 2;
	cout << "                   Name:" << drivername[r] << endl;
	cout << "                   Driver ID:" << driverid[r] << endl;
	cout << "                   Contact:" << driverPh[r] << endl;

}

void Dilevery::track()
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

void Dilevery::confirmation()
{
	
	cout << "                                                                        Book Ride?  ";
	cin >> choice3;
	if (choice3 == "y")
	{
		system("cls");
		totalfare = dist * bkm *peakfactor;
		cout << endl << endl << "                                                    Dilevery Fare: Rs." << totalfare << endl;
		cout << endl << "                                                            Continue?  ";
		cin >> choice4;
		if (choice4 == "y")
		{
			cout << endl << "                                                        Your Captain is on the way" << endl;
			driB();
			track();
		}
		else
		{
			dilevery1();
		}


	}
	else
	{
		dilevery1();
	}
}

void Dilevery:: distance( string pl,string  dl )
{
	string a, b, c, d, e, h,i;
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
			while (fin>>a>>b>>c>>d>>e>>f>>g)
			{
				h = a+k + b;
				i = d+k + e;
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


void Dilevery::dilevery1()
{
	
	cout << "1. I have a Dilevery adress" << endl
		<< "2. Just Come(extra Rs. 10)" << endl;
	cin >> choice;
	if (choice == 1)
	{
		cout << "1. No Cash Collection" << endl
			<< "2. Cash on dilevery" << endl;
		cin >> choice2;
		if (choice2 == 1)
		{
			cin.ignore();
			loc();
			cout << "Enter Senders Adress: ";
			getline(cin, dl);
			cout << endl << "Enter Block: ";
			cin >> dblock;

			cin.ignore();
			cout << endl << "Enter Recievers Adress: ";
			getline(cin, pl);
			cout << endl << "Enter Block: ";
			cin >> pblock;
			cout << endl;

			

			distance(pl,dl);

			confirmation();
			
			

		}

		else if (choice2 == 2)
		{
			loc();
			cin.ignore();
			cout << "Enter Senders Adress: ";
			getline(cin, dl);
			cout << endl << "Enter Block: ";
			cin >> dblock;

			cin.ignore();
			cout << endl << "Enter Recievers Adress: ";
			getline(cin, pl);
			cout << endl << "Enter Block: ";
			cin >> pblock;
			cout << endl;

			

			distance(pl,dl);

			confirmation();



		}

		else
		{
			dilevery1();
		}
	}
		
	else if (choice==2)
	{
		loc();
		cin.ignore();
		cout << "Enter Pick-up Adress: ";
		getline(cin, dl);
		cout << endl << "Enter Block: ";
		cin >> dblock;

		cout << "                                                                        Book Ride?  ";
		cin >> choice3;
		if (choice3 == "y")
		{
			system("cls");
			cout << endl << "                                                            Continue?  ";
			cin >> choice4;
			if (choice4 == "y")
			{
				cout << endl << "                                                        Your Captain is on the way" << endl;
				driB();
				track();
			}


		}
		else
		{
			dilevery1();
		}
	}

	else
	{
		dilevery1();
	}
}


