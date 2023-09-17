#include"User_Register.h"
#include"Food.h"
#include"Admin5.h"
#include"Dilevery.h"
#include"Ride.h"
#include"Rider.h"


//objects
Person2 *P2;
User_Register UR;
Admin5 ad5;
Dilevery dd;
Ride rr;
Rider rt;



//data members

string admin_name = "Ahmad", admin_password = "loveu", read; int id, ij = 0, j = 0;


//functions
void userchoice();
void cordxy(int,int);
void designFirst(int,int,int,int);
void line(int);




//struct Person {
//    string driver_name, car_number, car_name;
//    long int phone_number;
//    void print() {
//        cout << driver_name << " " << phone_number << " " << car_name << " " << car_number << endl;
//    }
//    bool operator == (Person& temp) {
//        if (driver_name == temp.driver_name && phone_number == temp.phone_number && car_name == temp.car_name && car_name == temp.car_name)
//            return 1;
//        else return 0;
//    }
//    void operator = (Person& temp) {
//        driver_name = temp.driver_name;
//        phone_number = temp.phone_number;
//        car_name = temp.car_name;
//        car_number = temp.car_number;
//    }
//};
//
//Person Write;
//Person* Read = new Person;
//Person* temp = new Person;
//Person Modify;




void main(void) {
    system("color 2F");
    int ch;
    cordxy(24, 4);
    cout << "-------<(  W E L O C M E     T O    B Y K E A   A P P  )>--------";
    designFirst(25, 90, 6, 22);


    cordxy(46, 8);
    cout << "Press 1 for User ";
    cordxy(26, 10);
    line(64);
    cordxy(46, 12);
    cout << "Press 2 for Rider";
    cordxy(26, 14);
    line(64);
    cordxy(46, 16);
    cout << "Press 3 for Admin ";
    cordxy(26, 18);
    line(64);
    cordxy(46, 20);
    cout << "Press 4 for overview";
    cordxy(46, 25);
    cout << "Enter your choice\t\t"; cin >> ch;
    cin.ignore();
    if (ch == 1) {
        system("cls");
        userchoice();
    }
     if(ch==2)
    {

         rt.login_rider();
    }
     if (ch == 3) {
         system("cls");
         ad5.Admin1();
     }
     //Association

     if (ch == 4) {
         system("cls");
         P2 = &UR;
         UR.overview();
     }
    /*Food f;
    f.design();
    f.buyOrder();*/
   
    /*Menu m;
    m.slect();*/
}


void cordxy(int x, int y) {
    HANDLE  console = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD position; position.X = x; position.Y = y;
    SetConsoleCursorPosition(console, position);
}


void designFirst(int x, int y, int z, int g)
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


void line(int col)
{
    for (int i = 1; i <= col; i++)
    {
        if (i == 1 || i == col)
            cout << "+";
        else cout << "-";
    }
}

    
    void userchoice() {
    int ch;
    char ch1;
    cordxy(24, 4);
    cout << "-------<(  W E L O C M E     T O    C H O I C E    M E N U  )>--------";
    designFirst(25, 90, 6, 17);
   

    cordxy(46, 8);
    cout << "Press 1 for registereation ";
    cordxy(26, 10);
    line(64);
    cordxy(46, 12);
    cout << "Press 2 for login";
    cordxy(26, 14);
    line(64);
    cordxy(46, 16);
    cout << "Enter your choice ";
    cordxy(70, 16);
    cin >> ch;
    cin.ignore();
    switch (ch) {
    case 1: {
        system("cls");
     //   User_Register UR;
        UR.Registeration();
        system("cls");
        
        break; }
    case 2:
    {system("cls");
    UR.login();
    break; }
    }
}









//void Admin_choice();
//void Hotels();
//void viewHotels();
//void jhourtown();
//void wahdatcolony();
//void muslim();
//void alama();
//void anar();
//void samna();
//void ichra();
//void View_Rider();
//void Add_Rider();
//void Deleate_Rider();
//void Modify_Rider();
//
//
//
//void Admin() {
//ad:
//	cordxy(28, 6);
//	cout << "--<( W E L C O M E   Y O U   T O  A D M I N    P A N A L )>-- ";
//	string ad_name, ad_password;
//	designFirst(14, 95, 7, 18);
//	cordxy(24, 10);
//	cout << "Enter the User name ";
//	cordxy(15, 12);
//	line(80);
//	cordxy(24, 14);
//	cout << "Enter the password  ";
//	for (float i = 8.5; i <= 19; i++) {
//		cordxy(54, i);
//		cout << char(179);
//		i += 2;
//	}
//	cordxy(65, 10);
//	cin.ignore();
//	getline(cin, ad_name);
//	cordxy(65, 14);
//	getline(cin, ad_password);
//	if (ad_name != admin_name && ad_password != admin_password) {
//		system("cls");
//		cordxy(32, 24);
//		cout << "Wrong password or user name\n";
//		goto ad;
//
//	}
//	else
//	{
//		Admin_choice();
//	}
//
//}
//
//
//void Admin_choice() {
//	int sle;
//	system("cls");
//	designFirst(25, 85, 7, 25);
//	cordxy(46, 9);
//	cout << "V I E W   H O T E L S";
//	cordxy(26, 10);
//	line(59);
//	cordxy(46, 12);
//	cout << "V I E W   R I D E R S";
//	cordxy(26, 13);
//	line(59);
//	cordxy(46, 15);
//	cout << "A D D   N E W   H O T E L ";
//	cordxy(26, 16);
//	line(59);
//	cordxy(46, 18);
//	cout << "A D D   N E W  R I D E R S";
//	cordxy(26, 19);
//	line(59);
//	cordxy(46, 21);
//	cout << "D E L E A T E   R I D E R";
//	cordxy(26, 22);
//	line(59);
//	cordxy(46, 24);
//	cout << "M O D I F Y   R I D E R";
//	for (float i = 8.5; i <= 26; i++) {
//		cordxy(32, i);
//		cout << char(179);
//		i += 2;
//
//	}
//	cordxy(29, 9);
//	cout << "1.";
//	cordxy(29, 12);
//	cout << "2.";
//	cordxy(29, 15);
//	cout << "3.";
//	cordxy(29, 18);
//	cout << "4.";
//	cordxy(29, 21);
//	cout << "5.";
//	cordxy(29, 24);
//	cout << "6.";
//	designFirst(55, 59, 26, 28);
//	cordxy(34, 27);
//	cout << "Slect your choice\t";
//	cin >> sle;
//	if (sle == 3) {
//		Hotels();
//	}
//	else if (sle == 1) {
//		viewHotels();
//	}
//	else if (sle == 2) {
//		View_Rider();
//	}
//	else if (sle == 4) {
//		Add_Rider();
//	}
//	else if (sle == 5) {
//		Deleate_Rider();
//	}
//	else if (sle == 6) {
//		Modify_Rider();
//	}
//
//}
//
//
//void Hotels() {
//	system("cls");
//	int j = 0; string read; string hotel_name;
//	cordxy(6, 12);
//	cout << "--< AREAS >--";
//	designFirst(3, 21, 13, 28);
//	fstream areas("area.txt", ios::in);
//	while (!areas.eof()) {
//		getline(areas, read);
//		cordxy(6, 15 + j);
//		cout << read << endl;
//		j++;
//	}
//	areas.close();
//	int choice9;
//	cordxy(27, 7);
//	cout << "Slect the area where you want to enter new hotel \t\t\t";
//	cin >> choice9;
//	if (choice9 == 1) {
//		cordxy(27, 8);
//		cout << "Enter the id of the hotel"; cin >> id;
//		cordxy(27, 9);
//		cout << "Enter the name of the hotel\t"; cin >> hotel_name;
//		ofstream hotel;
//		hotel.open(" jhourtown.txt", ios::app);
//		int New;
//		hotel << id << "." << hotel_name << endl << endl;
//		hotel.close();
//
//	}
//	else if (choice9 == 2) {
//		cordxy(27, 8);
//		cout << "Enter the id of the hotel"; cin >> id;
//		cordxy(27, 9);
//		cout << "Enter the name of the hotel\t"; cin >> hotel_name;
//		ofstream hotel2;
//		hotel2.open(" wahdat.txt", ios::app);
//		int New;
//		hotel2 << id << "." << hotel_name << endl << endl;
//		hotel2.close();
//	}
//	else if (choice9 == 3) {
//		cordxy(27, 8);
//		cout << "Enter the id of the hotel"; cin >> id;
//		cordxy(27, 9);
//		cout << "Enter the name of the hotel\t"; cin >> hotel_name;
//		ofstream hotel3;
//		hotel3.open(" muslim.txt", ios::app);
//		int New;
//		hotel3 << id << "." << hotel_name << endl << endl;
//		hotel3.close();
//	}
//	else if (choice9 == 4) {
//		cordxy(27, 8);
//		cout << "Enter the id of the hotel"; cin >> id;
//		cordxy(27, 9);
//		cout << "Enter the name of the hotel\t"; cin >> hotel_name;
//		ofstream hotel4;
//		hotel4.open(" Allama.txt", ios::app);
//		int New;
//		hotel4 << id << "." << hotel_name << endl << endl;
//		hotel4.close();
//	}
//	else if (choice9 == 5) {
//		cordxy(27, 8);
//		cout << "Enter the id of the hotel"; cin >> id;
//		cordxy(27, 9);
//		cout << "Enter the name of the hotel\t"; cin >> hotel_name;
//		ofstream hotel5;
//		hotel5.open(" AnarQuali.txt", ios::app);
//		int New;
//		hotel5 << id << "." << hotel_name << endl << endl;
//		hotel5.close();
//	}
//	else if (choice9 == 6) {
//		cordxy(27, 8);
//		cout << "Enter the id of the hotel"; cin >> id;
//		cordxy(27, 9);
//		cout << "Enter the name of the hotel\t"; cin >> hotel_name;
//		ofstream hotel6;
//		hotel6.open(" Samnabad.txt", ios::app);
//		int New;
//		hotel6 << id << "." << hotel_name << endl << endl;
//		hotel6.close();
//	}
//	else if (choice9 == 7) {
//		cordxy(27, 8);
//		cout << "Enter the id of the hotel"; cin >> id;
//		cordxy(27, 9);
//		cout << "Enter the name of the hotel\t"; cin >> hotel_name;
//		ofstream hotel7;
//		hotel7.open(" Ichra.txt", ios::app);
//		int New;
//		hotel7 << id << "." << hotel_name << endl << endl;
//		hotel7.close();
//	}
//
//}
//
//
//void viewHotels() {
//	system("cls");
//	int j = 0, choice10 = 0, ij = 0; string read; string hotel_name;
//	cordxy(6, 12);
//	cout << "--< AREAS >--";
//	designFirst(3, 21, 13, 28);
//	fstream areas("area.txt", ios::in);
//	while (!areas.eof()) {
//		getline(areas, read);
//		cordxy(6, 15 + j);
//		cout << read << endl;
//		j++;
//	}
//	areas.close();
//	cordxy(27, 7);
//	cout << "Slect the area you want to view \t\t\t";
//	cin >> choice10;
//
//	if (choice10 == 1) {
//		jhourtown();
//	}
//	else if (choice10 == 2) {
//		wahdatcolony();
//	}
//	else if (choice10 == 3) {
//		muslim();
//	}
//	else if (choice10 == 4) {
//		alama();
//	}
//	else if (choice10 == 5) {
//		anar();
//	}
//	else if (choice10 == 6) {
//		samna();
//	}
//	else if (choice10 == 7) {
//		ichra();
//	}
//}
//
//
//
//
////                             Main Body
//void main(void) {
//	Admin_choice();
//	//int num;
//	//cout << "How many entry you want to do \t"; cin >> num;
//	//write_record(num);	
//	//display();
//}
//
//
//
//
//void jhourtown() {
//	int ch1;
//	cordxy(39, 13);
//	cout << "--<( HOTELS )>--";
//	designFirst(35, 57, 14, 28);
//	fstream jh(" jhourtown.txt", ios::in);
//	while (!jh.eof()) {
//		getline(jh, read);
//		cordxy(38, 16 + ij);
//		cout << read << endl;
//		ij++;
//	}
//	jh.close();
//	designFirst(54, 58, 29, 31);
//	cordxy(35, 30);
//	cout << "Slect your hotel\t"; cin >> ch1;
//	cordxy(85, 12);
//	cout << "--<( M E N U )>--";
//	designFirst(64, 115, 13, 27);
//	if (ch1 == 1) {
//		fstream fri("Frichick.txt", ios::in);
//		while (!fri.eof()) {
//			getline(fri, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		fri.close();
//		cout << "\n\n\n\n";
//	}
//	else if (ch1 == 2) {
//		fstream bu("bunduKhan.txt", ios::in);
//		while (!bu.eof()) {
//			getline(bu, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		bu.close();
//	}
//	else if (ch1 == 3) {
//		fstream ma("Madina.txt", ios::in);
//		while (!ma.eof()) {
//			getline(ma, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		ma.close();
//	}
//	else if (ch1 == 4) {
//		fstream mc("McDonal.txt", ios::in);
//		while (!mc.eof()) {
//			getline(mc, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		mc.close();
//	}
//	else if (ch1 == 5) {
//		fstream piz("pizza.txt", ios::in);
//		while (!piz.eof()) {
//			getline(piz, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		piz.close();
//
//	}
//
//}
//void wahdatcolony() {
//	int ch2;
//	cordxy(39, 13);
//	cout << "--<( HOTELS )>--";
//	designFirst(35, 57, 14, 28);
//	fstream wh(" wahdat.txt", ios::in);
//	while (!wh.eof()) {
//		getline(wh, read);
//		cordxy(38, 16 + ij);
//		cout << read << endl;
//		ij++;
//	}
//	wh.close();
//	designFirst(54, 58, 29, 31);
//	cordxy(35, 30);
//	cout << "Slect your hotel\t"; cin >> ch2;
//	cordxy(85, 12);
//	cout << "--<( M E N U )>--";
//	designFirst(64, 115, 13, 27);
//	if (ch2 == 1) {
//		fstream ra("Madina.txt", ios::in);
//		while (!ra.eof()) {
//			getline(ra, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		ra.close();
//	}
//	else if (ch2 == 2) {
//		fstream pz("pizza.txt", ios::in);
//		while (!pz.eof()) {
//			getline(pz, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		pz.close();
//	}
//	else if (ch2 == 3) {
//		fstream sh("shorma.txt", ios::in);
//		while (!sh.eof()) {
//			getline(sh, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//	}
//	else if (ch2 == 4) {
//		fstream bq("bbq.txt", ios::in);
//		while (!bq.eof()) {
//			getline(bq, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		bq.close();
//	}
//	else if (ch2 == 5) {
//		fstream nah("nahari.txt", ios::in);
//		while (!nah.eof()) {
//			getline(nah, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		nah.close();
//	}
//}
//void muslim() {
//	int ch3;
//	cordxy(39, 13);
//	cout << "--<( HOTELS )>--";
//	designFirst(35, 57, 14, 28);
//	fstream mu(" muslim.txt", ios::in);
//	while (!mu.eof()) {
//		getline(mu, read);
//		cordxy(38, 16 + ij);
//		cout << read << endl;
//		ij++;
//	}
//	mu.close();
//	designFirst(54, 58, 29, 31);
//	cordxy(35, 30);
//	cout << "Slect your hotel\t"; cin >> ch3;
//	cordxy(85, 12);
//	cout << "--<( M E N U )>--";
//	designFirst(64, 115, 13, 27);
//	if (ch3 == 1) {
//		fstream pz("pizza.txt", ios::in);
//		while (!pz.eof()) {
//			getline(pz, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		pz.close();
//	}
//	else if (ch3 == 2) {
//		fstream nah("nahari.txt", ios::in);
//		while (!nah.eof()) {
//			getline(nah, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		nah.close();
//	}
//	else if (ch3 == 3) {
//		fstream mc("McDonal.txt", ios::in);
//		while (!mc.eof()) {
//			getline(mc, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		mc.close();
//	}
//	else if (ch3 == 4) {
//		fstream ra("Madina.txt", ios::in);
//		while (!ra.eof()) {
//			getline(ra, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		ra.close();
//	}
//	else if (ch3 == 5) {
//		fstream kfc("KFC.txt", ios::in);
//		while (!kfc.eof()) {
//			getline(kfc, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		kfc.close();
//	}
//}
//
//void alama()
//{
//	int ch4;
//	cordxy(39, 13);
//	cout << "--<( HOTELS )>--";
//	designFirst(35, 57, 14, 28);
//	fstream al(" Allama.txt", ios::in);
//	while (!al.eof()) {
//		getline(al, read);
//		cordxy(38, 16 + ij);
//		cout << read << endl;
//		ij++;
//	}
//	al.close();
//	designFirst(54, 58, 29, 31);
//	cordxy(35, 30);
//	cout << "Slect your hotel\t"; cin >> ch4;
//	cordxy(85, 12);
//	cout << "--<( M E N U )>--";
//	designFirst(64, 115, 13, 27);
//	if (ch4 == 1) {
//		fstream ra("Madina.txt", ios::in);
//		while (!ra.eof()) {
//			getline(ra, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		ra.close();
//	}
//	else if (ch4 == 2) {
//		fstream mc("McDonal.txt", ios::in);
//		while (!mc.eof()) {
//			getline(mc, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		mc.close();
//	}
//	else if (ch4 == 3) {
//		fstream bq("bbq.txt", ios::in);
//		while (!bq.eof()) {
//			getline(bq, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		bq.close();
//	}
//	else if (ch4 == 4) {
//		fstream kfc("KFC.txt", ios::in);
//		while (!kfc.eof()) {
//			getline(kfc, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		kfc.close();
//	}
//	else if (ch4 == 5) {
//		fstream bir("biryani.txt", ios::in);
//		while (!bir.eof()) {
//			getline(bir, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		bir.close();
//	}
//
//}
//
//void anar()
//{
//	int ch5;
//	cordxy(39, 13);
//	cout << "--<( HOTELS )>--";
//	designFirst(35, 57, 14, 28);
//	fstream wh(" AnarQuali.txt", ios::in);
//	while (!wh.eof()) {
//		getline(wh, read);
//		cordxy(38, 16 + ij);
//		cout << read << endl;
//		ij++;
//	}
//	wh.close();
//	designFirst(54, 58, 29, 31);
//	cordxy(35, 30);
//	cout << "Slect your hotel\t"; cin >> ch5;
//	cordxy(85, 12);
//	cout << "--<( M E N U )>--";
//	designFirst(64, 115, 13, 27);
//	if (ch5 == 1) {
//		fstream ra("Madina.txt", ios::in);
//		while (!ra.eof()) {
//			getline(ra, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		ra.close();
//	}
//	else if (ch5 == 2) {
//		fstream pz("pizza.txt", ios::in);
//		while (!pz.eof()) {
//			getline(pz, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		pz.close();
//	}
//	else if (ch5 == 3) {
//		fstream sh("shorma.txt", ios::in);
//		while (!sh.eof()) {
//			getline(sh, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//	}
//	else if (ch5 == 4) {
//		fstream bq("bbq.txt", ios::in);
//		while (!bq.eof()) {
//			getline(bq, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		bq.close();
//	}
//	else if (ch5 == 5) {
//		fstream nah("nahari.txt", ios::in);
//		while (!nah.eof()) {
//			getline(nah, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		nah.close();
//	}
//}
//
//void samna()
//{
//	int ch6;
//	cordxy(39, 13);
//	cout << "--<( HOTELS )>--";
//	designFirst(35, 57, 14, 28);
//	fstream mu(" Samnabad.txt", ios::in);
//	while (!mu.eof()) {
//		getline(mu, read);
//		cordxy(38, 16 + ij);
//		cout << read << endl;
//		ij++;
//	}
//	mu.close();
//	designFirst(54, 58, 29, 31);
//	cordxy(35, 30);
//	cout << "Slect your hotel\t"; cin >> ch6;
//	cordxy(85, 12);
//	cout << "--<( M E N U )>--";
//	designFirst(64, 115, 13, 27);
//	if (ch6 == 1) {
//		fstream pz("pizza.txt", ios::in);
//		while (!pz.eof()) {
//			getline(pz, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		pz.close();
//	}
//	else if (ch6 == 2) {
//		fstream nah("nahari.txt", ios::in);
//		while (!nah.eof()) {
//			getline(nah, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		nah.close();
//	}
//	else if (ch6 == 3) {
//		fstream mc("McDonal.txt", ios::in);
//		while (!mc.eof()) {
//			getline(mc, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		mc.close();
//	}
//	else if (ch6 == 4) {
//		fstream ra("Madina.txt", ios::in);
//		while (!ra.eof()) {
//			getline(ra, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		ra.close();
//	}
//	else if (ch6 == 5) {
//		fstream kfc("KFC.txt", ios::in);
//		while (!kfc.eof()) {
//			getline(kfc, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		kfc.close();
//	}
//}
//
//void ichra()
//{
//	int ch7;
//	cordxy(39, 13);
//	cout << "--<( HOTELS )>--";
//	designFirst(35, 57, 14, 28);
//	fstream jh(" Ichra.txt", ios::in);
//	while (!jh.eof()) {
//		getline(jh, read);
//		cordxy(38, 16 + ij);
//		cout << read << endl;
//		ij++;
//	}
//	jh.close();
//	designFirst(54, 58, 29, 31);
//	cordxy(35, 30);
//	cout << "Slect your hotel\t"; cin >> ch7;
//	cordxy(85, 12);
//	cout << "--<( M E N U )>--";
//	designFirst(64, 115, 13, 27);
//	if (ch7 == 1) {
//		fstream fri("Frichick.txt", ios::in);
//		while (!fri.eof()) {
//			getline(fri, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		fri.close();
//	}
//	else if (ch7 == 2) {
//		fstream bu("bunduKhan.txt", ios::in);
//		while (!bu.eof()) {
//			getline(bu, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		bu.close();
//	}
//	else if (ch7 == 3) {
//		fstream ma("Madina.txt", ios::in);
//		while (!ma.eof()) {
//			getline(ma, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		ma.close();
//	}
//	else if (ch7 == 4) {
//		fstream mc("McDonal.txt", ios::in);
//		while (!mc.eof()) {
//			getline(mc, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		mc.close();
//	}
//	else if (ch7 == 5) {
//		fstream piz("pizza.txt", ios::in);
//		while (!piz.eof()) {
//			getline(piz, read);
//			cordxy(66, 14 + j);
//			cout << read << endl;
//			j++;
//		}
//		piz.close();
//	}
//}
//
//
//void View_Rider() {
//	system("cls");
//
//	ifstream inFile("test.txt", ios::binary);
//	while (!inFile.eof())
//	{
//		*temp = *Read;
//		inFile.read((char*)Read, sizeof(Person));
//
//		if (*Read == *temp)
//			break;
//
//		Read->print();
//
//	}
//	inFile.close();
//}
//
//
//
//void Add_Rider() {
//	system("cls");
//
//	cout << "Enter name of the rider: ";
//	cin.ignore();
//	getline(cin, Write.driver_name);
//
//	cout << "Enter the phone number of the rider: ";
//
//	cin >> Write.phone_number;
//
//	cout << "Enter the car name of the rider:";
//	cin.ignore();
//	getline(cin, Write.car_name);
//
//	cout << "Enter the number of the rider vehical:";
//	getline(cin, Write.car_number);
//
//
//	ofstream outFile("test.txt", ios::binary | ios::app);
//	outFile.write((char*)&Write, sizeof(Person));
//	outFile.close();
//
//}
//
//
//void Deleate_Rider() {
//	system("cls");
//	cout << "Enter name you wnt to serch search: ";
//	cin.ignore();
//	getline(cin, Modify.driver_name);
//	ifstream inFile("test.txt", ios::binary);
//	ofstream Temp("temp.txt", ios::binary);
//	while (!inFile.eof())
//	{
//		int pos = inFile.tellg();
//		*temp = *Read;
//		inFile.read((char*)Read, sizeof(Person));
//		if (*Read == *temp)
//			break;
//		if (Read->driver_name == Modify.driver_name)
//			continue;
//
//		Temp.write((char*)Read, sizeof(Person));
//	}
//	Temp.close();
//	inFile.close();
//	remove("test.txt");
//	rename("temp.txt", "test.txt");
//}
//
//
//
//void Modify_Rider() {
//	system("cls");
//	cout << "Enter name of the rider you want to serch to search: ";
//	cin.ignore();
//	getline(cin, Modify.driver_name);
//	fstream inFile("test.txt", ios::binary | ios::in | ios::out);
//	while (!inFile.eof())
//	{
//		int pos = inFile.tellg();
//		inFile.read((char*)Read, sizeof(Person));
//		if (Read->driver_name == Modify.driver_name)
//		{
//			inFile.seekg(pos);
//			system("cls");
//			cout << "Enter name to place: ";
//			cin.ignore();
//			getline(cin, Modify.driver_name);
//			cout << "Enter phone number to place: ";
//			cin >> Modify.phone_number;
//			cout << "Enter the name of the car to place:";
//			cin.ignore();
//			getline(cin, Modify.car_name);
//			cout << "Enter the number of the vehical to place:";
//			getline(cin, Modify.car_number);
//			inFile.write((char*)&Modify, sizeof(Person));
//			break;
//		}
//	}
//	inFile.close();
//}