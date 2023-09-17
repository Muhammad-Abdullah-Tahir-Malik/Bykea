#include "User_Register.h"
User_Register::User_Register() {
	/*User_Name = '\0'; User_Password = '\0';*/ User_Email = '\0'; phone = '\0';
	Con_Pass = '\0';
	Fo = new  Food;
	Rid = new Ride;
	dil = new Dilevery;
}
User_Register::~User_Register() {
	delete Fo;
	delete Rid;
	delete dil;
}
void User_Register::cordxy(int x,int y) {
	HANDLE  console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position; position.X = x; position.Y = y;
	SetConsoleCursorPosition(console, position);
}

void User_Register::line(int col)
{
	for (int i = 1; i <= col; i++)
	{
		if (i == 1 || i == col)
			cout << "+";
		else cout << "-";
	}
}

void User_Register ::designFirst(int x, int y, int z, int g)
{
	int a, b, c, d;
	a = x; b = y; c = z, d = g;
	//We draw FRAME for the bar
	for (int i = x; i < y; i++)
	{
		cordxy(i, z);
		cout << char(205);     // 2 horizontal lines
		cordxy(i, g);
		cout << char(205);
	}
	for (int i = z + 1; i < g; i++)   //2 vertical lines
	{
		cordxy(a, i);
		cout << char(186);
		cordxy(b, i);
		cout << char(186);
	}
	cordxy(a, z);   //top left
	cout << char(201);
	cordxy(b, z);   //top right
	cout << char(187);
	cordxy(a, g);  // bottom left
	cout << char(200);
	cordxy(b, g);    //bottom right
	cout << char(188);
}


void User_Register::Registeration() {
	string read, name, em,pass; char choice; int id = 0;
b:
	cordxy(28, 6);
	cout << "--< W E L C O M E   YOU  T O   R E G I S T E R A T I O N >--";
	//fstream()
	designFirst(14, 95, 7, 21);
	cordxy(22, 10);
	cout << "Enter Your User Name :";
	cordxy(15, 11);
	line(80);
	cordxy(22, 12);
	cout << "Enter your e-mail :";
	cordxy(15, 13);
	line(80);
	cordxy(22, 14);
	cout << "Enter your Password :";
	cordxy(15, 15);
	line(80);
	cordxy(22, 16);
	cout << "Conform your password :";
	cordxy(15, 17);
	line(80);
	cordxy(22, 18);
	cout << "Enter your phone number :";
	for (float i = 8.5; i <= 21; i++) {
		cordxy(54, i);
		cout << char(179);
		i += 2;
	}
	char cc[12];
	cordxy(65, 10);
	getline(cin, name2);
	cordxy(65, 12);
	getline(cin, User_Email);
	cordxy(65, 14);
		getline(cin, password2);
	cordxy(65, 16);
	getline(cin, Con_Pass);
	cordxy(65, 18);
	getline(cin, phone);
	if (Con_Pass != password2) {
		system("cls");
		cordxy(26, 25);
		cout << "Password is not same";
		goto b;
	}
	ifstream file1("User_Data.txt");
	if (file1.is_open()) {
		while (file1 >> id >> name >> pass) {
			getline(file1, read);
			if (name == name2) {
				system("cls");
				cout << "Nmae is already taken";
				goto b;
			}
		}
	}
	file1.close();
	cordxy(26, 26);
	line(32);
	cordxy(26, 25);
	cout << "Do you want to creat an account\t ";
	//cordxy(87, 27);
	cin >> choice;
	if (choice == 'y' || choice == 'Y') {
		ofstream file2;
		file2.open("User_Data.txt", ios::app);
		int n;
		fstream rv("value_of_i.txt", ios::in);
		if (rv.is_open()) {
			rv >> id;
		}
		rv.close();
		file2 << ++id << " " << name2 << " " << password2 << endl;
		file2.close();
		fstream i("value_of_i.txt", ios::out | ios::trunc);
		i << id;
		i.close();
		cordxy(26, 29);
		line(37);
		cordxy(26, 28);
		cout << "Your account is successfully created";
		cordxy(26, 32);
		line(32);
		designFirst(63, 67, 30, 32);
		cordxy(26, 31);
		cout << "Do You want to go to login page ?\t"; cin >> choice;
		if (choice == 'y' || choice == 'Y') {
			login();
		}
		else
		{
			exit(0);
		}
		

	}
	else if (choice == 'n' || choice=='N') {
		exit(0);
	}

}




void User_Register::login() {
	string read, name1, password; int id1 = 0, count = 0; char choice1;

e:
	system("cls");
	cordxy(32, 8);
	cout << "--<'W E L C O M E   Y O U   T O   U S E R L O G I N'>-- ";
	designFirst(17, 95, 9, 17);
	cordxy(31, 10);
	cout << "Enter your user name";
	cordxy(18, 13);
	line(77);
	cordxy(31, 14);
	cout << "Enter ypur password";
	
	for (float i = 10.5; i <= 18; i++) {
		cordxy(59, i);
		cout << char(179);
		i += 1;

	}
	
	cordxy(65, 10);
	getline(cin, us_name);
	cordxy(64, 14);
	
	getline(cin, us_pass);
	
	ifstream file("User_Data.txt");
	bool b = 1;
	while (file >> id1 >> name1 >> password) {
		if (name1 == us_name && password == us_pass) {
			b = 0;
			cordxy(26, 27);
			cout << "You have successfully login ";
			Menu();
			system("pause");
		}
		
			
		
	}
	if(b)
	{	
		cordxy(37, 18);
		cout << "User name or password is incorrect";
	
		file.close();
		goto e; 
	}
	file.close();
}


void User_Register::Menu() {
	system("cls");
	cordxy(28, 6);
	cout << "--<  W E L C O M E   Y O U   T O   M A I N   M E N U  >--";
	designFirst(14, 95, 7, 21);
	cordxy(45, 8);
	cout << "SLECT YOUR CHOICE";
	cordxy(15, 9);
	line(80);
	for (float i = 10.5; i <= 21; i++) {
		cordxy(54, i);
		cout << char(179);
		i += 2;

	}
	for (float i = 10.5; i <= 21; i++) {
		cordxy(19, i);
		cout << char(179);
		i += 2;

	}
	cordxy(16, 10);
	cout << "1.";
	cordxy(15, 12);
	line(80);
	cordxy(16, 13);
	cout << "2.";
	cordxy(15, 15);
	line(80);
	cordxy(16, 16);
	cout << "3.";
	cordxy(15, 18);
	line(80);
	cordxy(16, 19);
	cout << "4.\n\n\n";
	cordxy(32, 10);
	cout << "F O O D";
	cordxy(32, 13);
	cout << "R I D E";
	cordxy(29, 16);
	cout << "D E L I V E R Y";
	cordxy(32, 19);
	cout << "E X I T\n\n\n\n";
	cordxy(58, 10);
	cout << "ORDRE FOOD  ANY WHERE ANY TIME ";
	cordxy(58, 13);
	cout << "TRAVEL SAVE AND SOUND WITH BIKEA";
	cordxy(56, 16);
	cout << "EVERYTHING DELIVER AT YOUR DOOR STEPS";
	cordxy(58, 19);
	cout << "JUST PRESS 4\n\n\n\n";
	int choice1;
	cordxy(23, 24);
	cout << "Enter your choice\t\t\t\t";
	cin >> choice1;
	if (choice1 == 1) {
		system("cls");
		Fo->design();		// Aggereation
		Fo->buyOrder();
	}
	else if (choice1 == 2) {
		system("cls");
		Rid->ride1();
	}
	else if (choice1 == 3) {
		system("cls");
		dil->dilevery1();
	}
	
	else if (choice1 == 4) {
		exit(0);
	}

}



void User_Register::overview() {
	string read1; int jp1=0;
	fstream ov("overview.txt", ios::in);
	while (!ov.eof()) {
		getline(ov, read1);
		cordxy(23, 4 + jp1);
		cout << read1;
		jp1++;
	}
	ov.close();
}