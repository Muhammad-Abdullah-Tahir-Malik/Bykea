#include "Admin5.h"
Admin5 Write;
Admin5* Read = new Admin5;
Admin5* temp = new Admin5;
Admin5 Modify;

void Admin5::print()
{
	cout << driver_name << " " << phone_number << " " << car_name << " " << car_number << endl;
}

bool Admin5::operator==(Admin5& temp)
{
	if (driver_name == temp.driver_name && phone_number == temp.phone_number && car_name == temp.car_name && car_name == temp.car_name)
		return 1;
	else return 0;
}

void Admin5::operator=(Admin5& temp)
{
	driver_name = temp.driver_name;
	phone_number = temp.phone_number;
	car_name = temp.car_name;
	car_number = temp.car_number;
}

void Admin5::Admin1()
{
	system("cls");
	ask:
	string name89, pas89;
	cout << "Enter your name\t"; cin >> name89;
	cout << "Enter your password\t"; cin >> pas89;
	if (name89 == admin_name && pas89 == admin_password) {
		cout << "\nYou have Successfully login";
	}
	else {
		cout << "\nYour password is incorrect\n";
		goto ask;
	}
	Admin_choice();

}

void Admin5::cordxy(int x, int y)
{
	HANDLE  console = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD position; position.X = x; position.Y = y;
	SetConsoleCursorPosition(console, position);
}

void Admin5::designFirst(int x, int y, int z, int g)
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

void Admin5::line(int col)
{
	for (int i = 1; i <= col; i++)
	{
		if (i == 1 || i == col)
			cout << "+";
		else cout << "-";
	}
}

void Admin5::Admin_choice()
{
	int sle;
	system("cls");
	designFirst(25, 85, 7, 25);
	cordxy(46, 9);
	cout << "V I E W   H O T E L S";
	cordxy(26, 10);
	line(59);
	cordxy(46, 12);
	cout << "V I E W   R I D E R S";
	cordxy(26, 13);
	line(59);
	cordxy(46, 15);
	cout << "A D D   N E W   H O T E L ";
	cordxy(26, 16);
	line(59);
	cordxy(46, 18);
	cout << "A D D   N E W  R I D E R S";
	cordxy(26, 19);
	line(59);
	cordxy(46, 21);
	cout << "D E L E A T E   R I D E R";
	cordxy(26, 22);
	line(59);
	cordxy(46, 24);
	cout << "M O D I F Y   R I D E R";
	for (float i = 8.5; i <= 26; i++) {
		cordxy(32, i);
		cout << char(179);
		i += 2;

	}
	cordxy(29, 9);
	cout << "1.";
	cordxy(29, 12);
	cout << "2.";
	cordxy(29, 15);
	cout << "3.";
	cordxy(29, 18);
	cout << "4.";
	cordxy(29, 21);
	cout << "5.";
	cordxy(29, 24);
	cout << "6.";
	designFirst(55, 59, 26, 28);
	cordxy(34, 27);
	cout << "Slect your choice\t";
	cin >> sle;
	if (sle == 3) {
		Hotels();
	}
	else if (sle == 1) {
		viewHotels();
	}
	else if (sle == 2) {
		View_Rider();
	}
	else if (sle == 4) {
		Add_Rider();
	}
	else if (sle == 5) {
		Deleate_Rider();
	}
	else if (sle == 6) {
		Modify_Rider();
	}

}

void Admin5::Hotels()
{
	int id = 0,ii=0,n=0;
	system("cls");
	int j = 0,price=0; string read; string hotel_name,menu11;
	cordxy(6, 12);
	cout << "--< AREAS >--";
	designFirst(3, 21, 13, 28);
	fstream areas("area.txt", ios::in);
	while (!areas.eof()) {
		getline(areas, read);
		cordxy(6, 15 + j);
		cout << read << endl;
		j++;
	}
	areas.close();
	int choice9;
	cordxy(27, 7);
	cout << "Slect the area where you want to enter new hotel \t\t\t";
	cin >> choice9;
	if (choice9 == 1) {
		cordxy(27, 8);
		cout << "Enter the id of the hotel"; cin >> id;
		cordxy(27, 9);
		cout << "Enter the name of the hotel\t"; cin >> hotel_name;
		ofstream hotel;
		hotel.open("jhourtown.txt", ios::app);
		int New;
		hotel << id << "." << hotel_name << endl << endl;
		hotel.close();
		cordxy(27, 10);
		cout << "how namy things you want to enter in menu\t"; cin >> ii;

		ofstream m2("newmenu2.txt", ios::app);
		for (int i = 0; i < ii; i++) {
			cordxy(27, 11 + n);
			cout << "Enter the product\t"; cin >> menu11;
			cordxy(27, 13 + n);
			cout << "Enter the price\t"; cin >> price;
			m2 << i+1<<" " << menu11 << " " <<price<< endl;
			n++;
		}
		m2.close();
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	

	}
	else if (choice9 == 2) {
		cordxy(27, 8);
		cout << "Enter the id of the hotel"; cin >> id;
		cordxy(27, 9);
		cout << "Enter the name of the hotel\t"; cin >> hotel_name;
		ofstream hotel2;
		hotel2.open("wahdat.txt", ios::app);
		int New;
		hotel2 << id << "." << hotel_name << endl << endl;
		hotel2.close();
		cordxy(27, 10);
		cout << "how namy things you want to enter in menu\t"; cin >> ii;
		
			ofstream m1("newmenu.txt", ios::app);
			for (int i = 0; i < ii; i++) {
				cordxy(27, 11+n);
				cout << "Enter the product\t"; cin >> menu11;
				cordxy(27, 13 + n);
				cout << "Enter the price\t"; cin >> price;
				m1 << i + 1 << " " << menu11 << " " << price << endl;
				n++;
			}
		m1.close();
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	}
	else if (choice9 == 3) {
		cordxy(27, 8);
		cout << "Enter the id of the hotel"; cin >> id;
		cordxy(27, 9);
		cout << "Enter the name of the hotel\t"; cin >> hotel_name;
		ofstream hotel3;
		hotel3.open("muslim.txt", ios::app);
		int New;
		hotel3 << id << "." << hotel_name << endl << endl;
		hotel3.close();
		cordxy(27, 10);
		cout << "how namy things you want to enter in menu\t"; cin >> ii;

		ofstream m3("newmenu3.txt", ios::app);
		for (int i = 0; i < ii; i++) {
			cordxy(27, 11 + n);
			cout << "Enter the product\t"; cin >> menu11;
			cordxy(27, 13 + n);
			cout << "Enter the price\t"; cin >> price;
			m3 << i + 1 << " " << menu11 << " " << price << endl;
			n++;
		}
		m3.close();
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	}
	else if (choice9 == 4) {
		cordxy(27, 8);
		cout << "Enter the id of the hotel"; cin >> id;
		cordxy(27, 9);
		cout << "Enter the name of the hotel\t"; cin >> hotel_name;
		ofstream hotel4;
		hotel4.open("Allama.txt", ios::app);
		int New;
		hotel4 << id << "." << hotel_name << endl << endl;
		hotel4.close();
		cordxy(27, 10);
		cout << "how namy things you want to enter in menu\t"; cin >> ii;

		ofstream m4("newmenu4.txt", ios::app);
		for (int i = 0; i < ii; i++) {
			cordxy(27, 11 + n);
			cout << "Enter the product\t"; cin >> menu11;
			cordxy(27, 13 + n);
			cout << "Enter the price\t"; cin >> price;
			m4 << i + 1 << " " << menu11 << " " << price << endl;
			n++;
		}
		m4.close();
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	}
	else if (choice9 == 5) {
		cordxy(27, 8);
		cout << "Enter the id of the hotel"; cin >> id;
		cordxy(27, 9);
		cout << "Enter the name of the hotel\t"; cin >> hotel_name;
		ofstream hotel5;
		hotel5.open("Anar.txt", ios::app);
		int New;
		hotel5 << id << "." << hotel_name << endl << endl;
		hotel5.close();
		cordxy(27, 10);
		cout << "how namy things you want to enter in menu\t"; cin >> ii;

		ofstream m5("newmenu5.txt", ios::app);
		for (int i = 0; i < ii; i++) {
			cordxy(27, 11 + n);
			cout << "Enter the product\t"; cin >> menu11;
			cordxy(27, 13 + n);
			cout << "Enter the price\t"; cin >> price;
			m5 << i + 1 << " " << menu11 << " " << price << endl;
			n++;
		}
		m5.close();
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	}
	else if (choice9 == 6) {
		cordxy(27, 8);
		cout << "Enter the id of the hotel"; cin >> id;
		cordxy(27, 9);
		cout << "Enter the name of the hotel\t"; cin >> hotel_name;
		ofstream hotel6;
		hotel6.open("Samnabad.txt", ios::app);
		int New;
		hotel6 << id << "." << hotel_name << endl << endl;
		hotel6.close();
		cordxy(27, 10);
		cout << "how namy things you want to enter in menu\t"; cin >> ii;

		ofstream m6("newmenu6.txt", ios::app);
		for (int i = 0; i < ii; i++) {
			cordxy(27, 11 + n);
			cout << "Enter the product\t"; cin >> menu11;
			cordxy(27, 12 + n);
			cout << "Enter the price\t"; cin >> price;
			m6 << i + 1 << " " << menu11 << " " << price << endl;
			n++;
		}
		m6.close();
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	}
	else if (choice9 == 7) {
		cordxy(27, 8);
		cout << "Enter the id of the hotel"; cin >> id;
		cordxy(27, 9);
		cout << "Enter the name of the hotel\t"; cin >> hotel_name;
		ofstream hotel7;
		hotel7.open("Ichra.txt", ios::app);
		int New;
		hotel7 << id << "." << hotel_name << endl << endl;
		hotel7.close();
		cordxy(27, 10);
		cout << "how namy things you want to enter in menu\t"; cin >> ii;

		ofstream m7("newmenu7.txt", ios::app);
		for (int i = 0; i < ii; i++) {
			cordxy(27, 11 + n);
			cout << "Enter the product\t"; cin >> menu11;
			cordxy(27, 13 + n);
			cout << "Enter the price\t"; cin >> price;
			m7 << i + 1 << " " << menu11 << " " << price << endl;
			n++;
		}
		m7.close();
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	}
	char co;
	cout << "Do you want to view hotels\t"; cin >> co;
	if (co == 'y'||co=='Y') {
		viewHotels();
	}
	else {
		Admin_choice();
	}
}

void Admin5::viewHotels()
{
	system("cls");
	int j = 0, choice10 = 0, ij = 0; string read; string hotel_name;
	cordxy(6, 12);
	cout << "--< AREAS >--";
	designFirst(3, 21, 13, 28);
	fstream areas("area.txt", ios::in);
	while (!areas.eof()) {
		getline(areas, read);
		cordxy(6, 15 + j);
		cout << read << endl;
		j++;
	}
	areas.close();
	cordxy(27, 7);
	cout << "Slect the area you want to view \t\t\t";
	cin >> choice10;

	if (choice10 == 1) {
		jhourtown();
	}
	else if (choice10 == 2) {
		wahdatcolony();
	}
	else if (choice10 == 3) {
		muslim();
	}
	else if (choice10 == 4) {
		alama();
	}
	else if (choice10 == 5) {
		anar();
	}
	else if (choice10 == 6) {
		samna();
	}
	else if (choice10 == 7) {
		ichra();
	}
}

void Admin5::jhourtown()
{
	string read4; int j9 = 0, ij8 = 0;
	int ch1;
	cordxy(39, 13);
	cout << "--<( HOTELS )>--";
	designFirst(35, 57, 14, 28);
	fstream jh("jhourtown.txt", ios::in);
	while (!jh.eof()) {
		getline(jh, read4);
		cordxy(38, 16 + ij8);
		cout << read4 << endl;
		ij8++;
	}
	jh.close();
	designFirst(54, 58, 29, 31);
	cordxy(35, 30);
	cout << "Slect your hotel\t"; cin >> ch1;
	cordxy(85, 12);
	cout << "--<( M E N U )>--";
	designFirst(64, 115, 13, 27);
	if (ch1 == 1) {
		fstream fri("Frichick.txt", ios::in);
		while (!fri.eof()) {
			getline(fri, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		fri.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch1 == 2) {
		fstream bu("bunduKhan.txt", ios::in);
		while (!bu.eof()) {
			getline(bu, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		bu.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch1 == 3) {
		fstream ma("Madina.txt", ios::in);
		while (!ma.eof()) {
			getline(ma, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		ma.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch1 == 4) {
		fstream mc("McDonal.txt", ios::in);
		while (!mc.eof()) {
			getline(mc, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		mc.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch1 == 5) {
		fstream piz("pizza.txt", ios::in);
		while (!piz.eof()) {
			getline(piz, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		piz.close();
		cout << "\n\n\n\n\n\n\n\n";

	}
	else if (ch1 == 6) {
		fstream jha("newmenu2.txt", ios::in);
		while (!jha.eof()) {
			getline(jha, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		jha.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	char co;
	cout << "Do you want to go back to menu\t"; cin >> co;
	if (co == 'y' || co == 'Y') {
		Admin_choice();
	}
	else {
		exit(0);
	}
}

void Admin5::wahdatcolony()
{
	string read4; int j9 = 0, ij8 = 0;
	int ch2;
	cordxy(39, 13);
	cout << "--<( HOTELS )>--";
	designFirst(35, 57, 14, 28);
	fstream wh("wahdat.txt", ios::in);
	while (!wh.eof()) {
		getline(wh, read4);
		cordxy(38, 16 + ij8);
		cout << read4 << endl;
		ij8++;
	}
	wh.close();
	designFirst(54, 58, 29, 31);
	cordxy(35, 30);
	cout << "Slect your hotel\t"; cin >> ch2;
	cordxy(85, 12);
	cout << "--<( M E N U )>--";
	designFirst(64, 115, 13, 27);
	if (ch2 == 1) {
		fstream ra("Madina.txt", ios::in);
		while (!ra.eof()) {
			getline(ra, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		ra.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch2 == 2) {
		fstream pz("pizza.txt", ios::in);
		while (!pz.eof()) {
			getline(pz, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		pz.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch2 == 3) {
		fstream sh("shorma.txt", ios::in);
		while (!sh.eof()) {
			getline(sh, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch2 == 4) {
		fstream bq("bbq.txt", ios::in);
		while (!bq.eof()) {
			getline(bq, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		bq.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch2 == 5) {
		fstream nah("nahari.txt", ios::in);
		while (!nah.eof()) {
			getline(nah, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		nah.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch2 == 6) {
		fstream wha("newmenu.txt", ios::in);
		while (!wha.eof()) {
			getline(wha, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
		}
		wha.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	char co;
	cout << "Do you want to go back to menu\t"; cin >> co;
	if (co == 'y' || co == 'Y') {
		Admin_choice();
	}
	else {
		exit(0);
	}
}

void Admin5::muslim()
{
	string read4; int j9 = 0, ij8 = 0;
	int ch3;
	cordxy(39, 13);
	cout << "--<( HOTELS )>--";
	designFirst(35, 57, 14, 28);
	fstream mu("muslim.txt", ios::in);
	while (!mu.eof()) {
		getline(mu, read4);
		cordxy(38, 16 + ij8);
		cout << read4 << endl;
		ij8++;
	}
	mu.close();
	designFirst(54, 58, 29, 31);
	cordxy(35, 30);
	cout << "Slect your hotel\t"; cin >> ch3;
	cordxy(85, 12);
	cout << "--<( M E N U )>--";
	designFirst(64, 115, 13, 27);
	if (ch3 == 1) {
		fstream pz("pizza.txt", ios::in);
		while (!pz.eof()) {
			getline(pz, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		pz.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch3 == 2) {
		fstream nah("nahari.txt", ios::in);
		while (!nah.eof()) {
			getline(nah, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		nah.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch3 == 3) {
		fstream mc("McDonal.txt", ios::in);
		while (!mc.eof()) {
			getline(mc, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		mc.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch3 == 4) {
		fstream ra("Madina.txt", ios::in);
		while (!ra.eof()) {
			getline(ra, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		ra.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch3 == 5) {
		fstream kfc("KFC.txt", ios::in);
		while (!kfc.eof()) {
			getline(kfc, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		kfc.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch3 == 6) {
		fstream mus("newmenu3.txt", ios::in);
		while (!mus.eof()) {
			getline(mus, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		mus.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	char co;
	cout << "Do you want to go back to menu\t"; cin >> co;
	if (co == 'y' || co == 'Y') {
		Admin_choice();
	}
	else {
		exit(0);
	}
	
}

void Admin5::alama()
{
	string read4; int j9 = 0, ij8 = 0;
	int ch4;
	cordxy(39, 13);
	cout << "--<( HOTELS )>--";
	designFirst(35, 57, 14, 28);
	fstream al("Allama.txt", ios::in);
	while (!al.eof()) {
		getline(al, read4);
		cordxy(38, 16 + ij8);
		cout << read4 << endl;
		ij8++;
	}
	al.close();
	designFirst(54, 58, 29, 31);
	cordxy(35, 30);
	cout << "Slect your hotel\t"; cin >> ch4;
	cordxy(85, 12);
	cout << "--<( M E N U )>--";
	designFirst(64, 115, 13, 27);
	if (ch4 == 1) {
		fstream ra("Madina.txt", ios::in);
		while (!ra.eof()) {
			getline(ra, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		ra.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch4 == 2) {
		fstream mc("McDonal.txt", ios::in);
		while (!mc.eof()) {
			getline(mc, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		mc.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch4 == 3) {
		fstream bq("bbq.txt", ios::in);
		while (!bq.eof()) {
			getline(bq, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		bq.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch4 == 4) {
		fstream kfc("KFC.txt", ios::in);
		while (!kfc.eof()) {
			getline(kfc, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		kfc.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch4 == 5) {
		fstream bir("biryani.txt", ios::in);
		while (!bir.eof()) {
			getline(bir, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		bir.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch4 == 6) {
		fstream al("newmenu4.txt", ios::in);
		while (!al.eof()) {
			getline(al, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		al.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	char co;
	cout << "Do you want to go back to menu\t"; cin >> co;
	if (co == 'y' || co == 'Y') {
		Admin_choice();
	}
	else {
		exit(0);
	}
}

void Admin5::anar()
{
	string read4; int j9 = 0, ij8 = 0;
	int ch5;
	cordxy(39, 13);
	cout << "--<( HOTELS )>--";
	designFirst(35, 57, 14, 28);
	fstream wh("Anar.txt", ios::in);
	while (!wh.eof()) {
		getline(wh, read4);
		cordxy(38, 16 + ij8);
		cout << read4 << endl;
		ij8++;
	}
	wh.close();
	designFirst(54, 58, 29, 31);
	cordxy(35, 30);
	cout << "Slect your hotel\t"; cin >> ch5;
	cordxy(85, 12);
	cout << "--<( M E N U )>--";
	designFirst(64, 115, 13, 27);
	if (ch5 == 1) {
		fstream ra("Madina.txt", ios::in);
		while (!ra.eof()) {
			getline(ra, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		ra.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch5 == 2) {
		fstream pz("pizza.txt", ios::in);
		while (!pz.eof()) {
			getline(pz, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		pz.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch5 == 3) {
		fstream sh("shorma.txt", ios::in);
		while (!sh.eof()) {
			getline(sh, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch5 == 4) {
		fstream bq("bbq.txt", ios::in);
		while (!bq.eof()) {
			getline(bq, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		bq.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch5 == 5) {
		fstream nah("nahari.txt", ios::in);
		while (!nah.eof()) {
			getline(nah, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		nah.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch5 == 6) {
		fstream an("newmenu5.txt", ios::in);
		while (!an.eof()) {
			getline(an, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		an.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	char co;
	cout << "Do you want to go back to menu\t"; cin >> co;
	if (co == 'y' || co == 'Y') {
		Admin_choice();
	}
	else {
		exit(0);
	}
}

void Admin5::samna()
{
	string read4; int j9 = 0, ij8 = 0;
	int ch6;
	cordxy(39, 13);
	cout << "--<( HOTELS )>--";
	designFirst(35, 57, 14, 28);
	fstream mu("Samnabad.txt", ios::in);
	while (!mu.eof()) {
		getline(mu, read4);
		cordxy(38, 16 + ij8);
		cout << read4 << endl;
		ij8++;
	}
	mu.close();
	designFirst(54, 58, 29, 31);
	cordxy(35, 30);
	cout << "Slect your hotel\t"; cin >> ch6;
	cordxy(85, 12);
	cout << "--<( M E N U )>--";
	designFirst(64, 115, 13, 27);
	if (ch6 == 1) {
		fstream pz("pizza.txt", ios::in);
		while (!pz.eof()) {
			getline(pz, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		pz.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch6 == 2) {
		fstream nah("nahari.txt", ios::in);
		while (!nah.eof()) {
			getline(nah, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		nah.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch6 == 3) {
		fstream mc("McDonal.txt", ios::in);
		while (!mc.eof()) {
			getline(mc, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		mc.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch6 == 4) {
		fstream ra("Madina.txt", ios::in);
		while (!ra.eof()) {
			getline(ra, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		ra.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch6 == 5) {
		fstream kfc("KFC.txt", ios::in);
		while (!kfc.eof()) {
			getline(kfc, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		kfc.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch6 == 6) {
		fstream sam("newmenu6.txt", ios::in);
		while (!sam.eof()) {
			getline(sam, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		sam.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	char co;
	cout << "Do you want to go back to menu\t"; cin >> co;
	if (co == 'y' || co == 'Y') {
		Admin_choice();
	}
	else {
		exit(0);
	}
}

void Admin5::ichra()
{
	string read4; int j9 = 0, ij8 = 0;
	int ch7;
	cordxy(39, 13);
	cout << "--<( HOTELS )>--";
	designFirst(35, 57, 14, 28);
	fstream jh("Ichra.txt", ios::in);
	while (!jh.eof()) {
		getline(jh, read4);
		cordxy(38, 16 + ij8);
		cout << read4 << endl;
		ij8++;
	}
	jh.close();
	designFirst(54, 58, 29, 31);
	cordxy(35, 30);
	cout << "Slect your hotel\t"; cin >> ch7;
	cordxy(85, 12);
	cout << "--<( M E N U )>--";
	designFirst(64, 115, 13, 27);
	if (ch7 == 1) {
		fstream fri("Frichick.txt", ios::in);
		while (!fri.eof()) {
			getline(fri, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		fri.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch7 == 2) {
		fstream bu("bunduKhan.txt", ios::in);
		while (!bu.eof()) {
			getline(bu, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		bu.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch7 == 3) {
		fstream ma("Madina.txt", ios::in);
		while (!ma.eof()) {
			getline(ma, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		ma.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch7 == 4) {
		fstream mc("McDonal.txt", ios::in);
		while (!mc.eof()) {
			getline(mc, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		mc.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch7 == 5) {
		fstream piz("pizza.txt", ios::in);
		while (!piz.eof()) {
			getline(piz, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		piz.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	else if (ch7 == 6) {
		fstream ich("newmenu7.txt", ios::in);
		while (!ich.eof()) {
			getline(ich, read4);
			cordxy(66, 14 + j9);
			cout << read4 << endl;
			j9++;
		}
		ich.close();
		cout << "\n\n\n\n\n\n\n\n";
	}
	char co;
	cout << "Do you want to go back to menu\t"; cin >> co;
	if (co == 'y' || co == 'Y') {
		Admin_choice();
	}
	else {
		exit(0);
	}
}

void Admin5::View_Rider()
{
	system("cls");

	ifstream inFile("test.txt", ios::binary);
	while (!inFile.eof())
	{
		*temp = *Read;
		inFile.read((char*)Read, sizeof(Admin5));

		if (*Read == *temp)
			break;

		Read->print();

	}
	inFile.close();
	char co;
	cout << "Do you want to go back to menu\t"; cin >> co;
	if (co == 'y' || co == 'Y') {
		Admin_choice();
	}
	else {
		exit(0);
	}
}

void Admin5::Add_Rider()
{
	system("cls");

	cout << "Enter name of the rider: ";
	cin.ignore();
	getline(cin, Write.driver_name);

	cout << "Enter the phone number of the rider: ";

	cin >> Write.phone_number;
	cin.ignore();
	cout << "Enter the car name of the rider:";
	
	getline(cin, Write.car_name);

	cout << "Enter the number of the rider vehical:";
	getline(cin, Write.car_number);


	ofstream outFile("test.txt", ios::binary | ios::app);
	outFile.write((char*)&Write, sizeof(Admin5));
	outFile.close();
	char co;
	cout << "Do you want to go back to menu\t"; cin >> co;
	if (co == 'y' || co == 'Y') {
		Admin_choice();
	}
	else {
		exit(0);
	}
}

void Admin5::Deleate_Rider()
{
	system("cls");
	cout << "Enter name you wnt to serch search: ";
	cin.ignore();
	getline(cin, Modify.driver_name);
	ifstream inFile("test.txt", ios::binary);
	ofstream Temp("temp.txt", ios::binary);
	while (!inFile.eof())
	{
		int pos = inFile.tellg();
		*temp = *Read;
		inFile.read((char*)Read, sizeof(Admin5));
		if (*Read == *temp)
			break;
		if (Read->driver_name == Modify.driver_name)
			continue;

		Temp.write((char*)Read, sizeof(Admin5));
	}
	Temp.close();
	inFile.close();
	remove("test.txt");
	rename("temp.txt", "test.txt");
	char co;
	cout << "Do you want to go back to menu\t"; cin >> co;
	if (co == 'y' || co == 'Y') {
		Admin_choice();
	}
	else {
		exit(0);
	}
}

void Admin5::Modify_Rider()
{
	system("cls");
	cout << "Enter name of the rider you want to serch to search: ";
	cin.ignore();
	getline(cin, Modify.driver_name);
	fstream inFile("test.txt", ios::binary | ios::in | ios::out);
	while (!inFile.eof())
	{
		int pos = inFile.tellg();
		inFile.read((char*)Read, sizeof(Admin5));
		if (Read->driver_name == Modify.driver_name)
		{
			inFile.seekg(pos);
			system("cls");
			cout << "Enter name to place: ";
			cin.ignore();
			getline(cin, Modify.driver_name);
			cout << "Enter phone number to place: ";
			cin >> Modify.phone_number;
			cout << "Enter the name of the car to place:";
			cin.ignore();
			getline(cin, Modify.car_name);
			cout << "Enter the number of the vehical to place:";
			getline(cin, Modify.car_number);
			inFile.write((char*)&Modify, sizeof(Admin5));
			break;
		}
	}
	inFile.close();
	char co;
	cout << "Do you want to go back to menu\t"; cin >> co;
	if (co == 'y' || co == 'Y') {
		Admin_choice();
	}
	else {
		exit(0);
	}
}
