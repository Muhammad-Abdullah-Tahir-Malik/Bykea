#include "Rider.h"


Rider::Rider() {
	choice = NULL;
}


void Rider::login_rider()
{
rrr:
	system("cls");
	string nam, pas; int iid;
	cout << "\t\t\t\tW E L C O M E   Y O U   T O  R I D E R   L O G I N\n\n";
	cout << "\tEnter your name\t"; cin >> name2;
	cout << "\tEnter your password\t"; cin >> password2;
	ifstream ride("RiderData.txt", ios::in);
	bool b = 0;
	while (ride >> iid >> nam >> pas) {
		if (nam == name2 && pas == password2) {
			b = 0;
			cout << "You have successfully login\n";
		}
	}
	if (b) {
		cout << "Your Password or user name is incorrect\n";
		goto rrr;
	}
	work();
}

void Rider::work()
{
	system("cls");
	char c45;
	cout << "\t\t\t\tW E L C O M E  Y O U  T O  W O R K\n\n";
	cout << "You have a request of ride near you\n";
	cout << " Do you want to pic the ride\n"; cin >> c45;
	if (c45 == 'y' || c45 == 'Y') {
		cout << "You accepted the request of roide \n";
		cout << "Sending message that you are on way\n\n";
	}
	else
	{
		cout << "Request Rejected\n";
	}

}
