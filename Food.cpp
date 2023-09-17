#include "Food.h"
//string read; int ij = 0,j=0;

Food::Food() {
    choice = NULL;
}

void Food::coordxy(int x, int y) {
    HANDLE  console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position; position.X = x; position.Y = y;
    SetConsoleCursorPosition(console, position);
}

void Food::designFirst(int x, int y, int z, int g)   {
    int a, b, c, d;
    a = x; b = y; c = z, d = g;
    //We draw FRAME for the bar
    for (int i = x; i < y; i++)
    {
        coordxy(i, z);
        cout << char(205);     // 2 horizontal lines
        coordxy(i, g);
        cout << char(205);
    }
    for (int i = z + 1; i < g; i++)   //2 vertical lines
    {
        coordxy(a, i);
        cout << char(186);
        coordxy(b, i);
        cout << char(186);
    }
    coordxy(a, z);   //top left
    cout << char(201);
    coordxy(b, z);   //top right
    cout << char(187);
    coordxy(a, g);  // bottom left
    cout << char(200);
    coordxy(b, g);    //bottom right
    cout << char(188);
}

void Food::design()
{
    designFirst(45, 72, 4, 7);
    coordxy(47, 6);
    cout << "H O  J A A Y E  M A Z A";
    coordxy(24, 1);
    cout << " *\\/*\\/*\\/*\\/*\\/*\\/*";
    coordxy(24, 2);
    cout << "*   |  |  |  |  |   *";
    coordxy(24, 3);
    cout << " *  |  |  |  |  |  *";
    coordxy(24, 4);
    cout << "  * |  |  |  |  | *";
    coordxy(24, 5);
    cout << "    *  |  |  |   *";
    coordxy(24, 6);
    cout << "    ###########";
    coordxy(24, 7);
    cout << "    *  __   __  *";
    coordxy(24, 8);
    cout << "    *  0    =   *";
    coordxy(24, 9);
    cout << "     *   ~.~   *";
    coordxy(24, 10);
    cout << "      * !===! *";
    coordxy(24, 11);
    cout << "          *";


    coordxy(73, 1);
    cout << " *\\/*\\/*\\/*\\/*\\/*\\/*";
    coordxy(73, 2);
    cout << "*   |  |  |  |  |   *";
    coordxy(73, 3);
    cout << " *  |  |  |  |  |  *";
    coordxy(73, 4);
    cout << "  * |  |  |  |  | *";
    coordxy(73, 5);
    cout << "    *  |  |  |   *";
    coordxy(73, 6);
    cout << "    ###########";
    coordxy(73, 7);
    cout << "    *  __   __  *";
    coordxy(73, 8);
    cout << "    *  0    =   *";
    coordxy(73, 9);
    cout << "     *   ~.~   *";
    coordxy(73, 10);
    cout << "      * !===! *";
    coordxy(73, 11);
    cout << "          *";
}

//                                                  JhourTown

void Food::jhourTown()
{
    m:
    string file3, b3; int a3, c3, fare3 = 0;
    string read; int ij = 0, j = 0;
    coordxy(39, 13);
    cout << "--< HOTELS >--";
    designFirst(35, 57, 14, 28);
    fstream jh("jhourtown.txt", ios::in);
    while (!jh.eof()) {
        getline(jh, read);
        coordxy(38, 16 + ij);
        cout << read << endl;
        ij++;
    }
    jh.close();
    designFirst(54,58, 29, 31);
    coordxy(35, 30);
    cout << "Slect your hotel\t"; cin >> choice;
    coordxy(85, 12);
    cout << "--< M E N U >--";
    designFirst(64, 115, 13, 27);
    designFirst(103, 107, 29, 31);
    designFirst(103, 107, 32, 34);
    if (choice == 1) {
        fstream fri("Frichick.txt", ios::in);
        while (fri >> a3 >> b3 >> c3) {
            file3 = "Frichick.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        fri.close();
        cout << "\n\n\n\n";
    }
    else if (choice == 2) {
        fstream bu("bunduKhan.txt", ios::in);
        while (bu >> a3 >> b3 >> c3) {
            file3 = "bunduKhan.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        bu.close();
    }
    else if (choice == 3) {
        fstream ma("Madina.txt", ios::in);
        while (ma >> a3 >> b3 >> c3) {
            file3 = "Madina.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        ma.close();
    }
    else if (choice == 4) {
        fstream mc("McDonal.txt", ios::in);
        while (mc >> a3 >> b3 >> c3) {
            file3 = "McDonal.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        mc.close();
    }
    else if (choice == 5) {
        fstream piz("pizza.txt", ios::in);
        while (piz >> a3 >> b3 >> c3) {
            file3 = "pizza.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        piz.close();
    }
    else if (choice == 6) {
        fstream jho("newmenu2.txt", ios::in);
        while (jho >> a3 >> b3 >> c3) {
            file3 = "newmenu2.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        jho.close();
    }
    coordxy(79, 30);
    cout << "Slect the Food  \t\t"; cin >> j;
    coordxy(79, 33);
    cout << "Enter the quantity\t"; cin >> ij;
    fstream MyFile(file3, ios::in);
    while (MyFile >> a3 >> b3 >> c3)
    {
        if (a3 == j)
        {
            fare3 = c3 * ij;
            coordxy(31, 36);
            cout << "------------------------------------------------------------\n\n\n";
            coordxy(55, 35);
            cout <<"Your bill is " << fare3<<endl;
        }
    }
    MyFile.close();
    char co;
    cout << "Do you want to order anything else\t"; cin >> co;
    if (co == 'y' || co == 'Y') {
        goto m;
    }
    else {
        exit(0);
    }
}


//                                                  WahdatColony

void Food::wahdatRoad()
{
    n:
    string file3, b3; int a3, c3, fare3 = 0;
    string read; int ij = 0, j = 0;
    coordxy(39, 13);
    cout << "--< HOTELS >--";
    designFirst(35, 57, 14, 28);
    fstream wh("wahdat.txt", ios::in);
    while (!wh.eof()) {
        getline(wh, read);
        coordxy(38, 16 + ij);
        cout << read << endl;
        ij++;
    }
    wh.close();
    designFirst(54, 58, 29, 31);
    coordxy(35, 30);
    cout << "Slect your hotel\t"; cin >> choice;
    coordxy(85, 12);
    cout << "--< M E N U >--";
    designFirst(64, 115, 13, 27);
    designFirst(103, 107, 31, 33);
    designFirst(103, 107, 34, 36);
    if (choice == 1) {
        fstream ra("Madina.txt", ios::in);
        while (ra >> a3 >> b3 >> c3) {
            file3 = "Madina.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        ra.close();
    }
    else if (choice == 2) {
        fstream pz("pizza.txt", ios::in);
        while (pz >> a3 >> b3 >> c3) {
            file3 = "pizza.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        pz.close();
    }
    else if (choice == 3) {
        fstream sh("shorma.txt", ios::in);
        while (sh >> a3 >> b3 >> c3) {
            file3 = "shorma.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;    
        }
    }
    else if (choice == 4) {
        fstream bq("bbq.txt", ios::in);
        while (bq >> a3 >> b3 >> c3) {
            file3 = "bbq.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        bq.close();
    }
    else if (choice == 5) {
        fstream nah("nahari.txt", ios::in);
        while (nah >> a3 >> b3 >> c3) {
            file3 = "nahari.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        nah.close();
    }
    else if (choice == 6) {
        fstream wah("newmenu.txt", ios::in);
        while (wah >> a3 >> b3 >> c3) {
            file3 = "newmenu.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        wah.close();
    }
    coordxy(79, 30);
    cout << "Slect the Food  \t\t"; cin >> j;
    coordxy(79, 33);
    cout << "Enter the quantity\t"; cin >> ij;
    fstream MyFile(file3, ios::in);
    while (MyFile >> a3 >> b3 >> c3)
    {
        if (a3 == j)
        {
            fare3 = c3 * ij;
            coordxy(31, 36);
            cout << "------------------------------------------------------------\n\n\n";
            coordxy(55, 35);
            cout <<"Your bill is " << fare3<<endl;
        }
    }
    MyFile.close();
    char co;
    cout << "Do you want to order anything else\t"; cin >> co;
    if (co == 'y' || co == 'Y') {
        goto n;
    }
    else {
        exit(0);
    }
}

//                                                   Muslim
void Food::muslimTown()
{
    o:
    string file3, b3; int a3, c3, fare3 = 0;
    string read; int ij = 0, j = 0;
    coordxy(39, 13);
    cout << "--< HOTELS >--";
    designFirst(35, 57, 14, 28);
    fstream mu("muslim.txt", ios::in);
    while (!mu.eof()) {
        getline(mu, read);
        coordxy(38, 16 + ij);
        cout << read << endl;
        ij++;
    }
    mu.close();
    designFirst(54, 58, 29, 31);
    coordxy(35, 30);
    cout << "Slect your hotel\t"; cin >> choice;
    coordxy(85, 12);
    cout << "--< M E N U >--";
    designFirst(64, 115, 13, 27);
    designFirst(103, 107, 29, 31);
    designFirst(103, 107, 32, 34);
    if (choice == 1) {
        fstream pz("pizza.txt", ios::in);
        while (pz >> a3 >> b3 >> c3) {
            file3 = "pizza.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        pz.close();
    }
    else if (choice == 2) {
        fstream nah("nahari.txt", ios::in);
        while (nah >> a3 >> b3 >> c3) {
            file3 = "nahari.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        nah.close();
    }
    else if (choice == 3) {
        fstream mc("McDonal.txt", ios::in);
        while (mc >> a3 >> b3 >> c3) {
            file3 = "McDonal.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        mc.close();
    }
    else if (choice == 4) {
        fstream ra("Madina.txt", ios::in);
        while (ra >> a3 >> b3 >> c3) {
            file3 = "Madina.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        ra.close();
    }
    else if (choice == 5) {
        fstream kfc("KFC.txt", ios::in);
        while (kfc >> a3 >> b3 >> c3) {
            file3 = "KFC.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        kfc.close();
    }
    else if (choice == 6) {
        fstream mus("newmenu3.txt", ios::in);
        while (mus >> a3 >> b3 >> c3) {
            file3 = "newmenu3.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        mus.close();
    }
    coordxy(79, 30);
    cout << "Slect the Food  \t\t"; cin >> j;
    coordxy(79, 33);
    cout << "Enter the quantity\t"; cin >> ij;
    fstream MyFile(file3, ios::in);
    while (MyFile >> a3 >> b3 >> c3)
    {
        if (a3 == j)
        {
            fare3 = c3 * ij;
            coordxy(31, 36);
            cout << "------------------------------------------------------------\n\n\n";
            coordxy(55, 35);
            cout <<"Your bill is" << fare3<<endl;
        }
    }
    MyFile.close();
    char co;
    cout << "Do you want to order anything else\t"; cin >> co;
    if (co == 'y' || co == 'Y') {
        goto o;
    }
    else {
        exit(0);
    }
}
                                                   // Alama
void Food::AllamaIqbal()
{
    p:
    string file3, b3; int a3, c3,fare3=0;
    string read; int ij = 0, j = 0;
    coordxy(39, 13);
    cout << "--< HOTELS >--";
    designFirst(35, 57, 14, 28);
    fstream al("Allama.txt", ios::in);
    while (!al.eof()) {
        getline(al, read);
        coordxy(38, 16 + ij);
        cout << read << endl;
        ij++;
    }
    al.close();
    designFirst(54, 58, 29, 31);
    coordxy(35, 30);
    cout << "Slect your hotel\t"; cin >> choice;
    coordxy(85, 12);
    cout << "--< M E N U >--";
    designFirst(64, 115, 13, 27);
    designFirst(103, 107, 29, 31);
    designFirst(103, 107, 32, 34);
    if (choice == 1) {
        fstream ra("Madina.txt", ios::in);
        while (ra >> a3 >> b3 >> c3) {
            file3 = "Madina.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        ra.close();
    }
    else if (choice == 2) {
        fstream mc("McDonal.txt", ios::in);
        while (mc >> a3 >> b3 >> c3) {
            file3 = "McDonal.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        mc.close();
    }
    else if (choice == 3) {
        fstream bq("bbq.txt", ios::in);
        while (bq >> a3 >> b3 >> c3) {
            file3 = "bbq.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        bq.close();
    }
    else if (choice == 4) {
        fstream kfc("KFC.txt", ios::in);
        while (kfc >> a3 >> b3 >> c3) {
            file3 = "KFC.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        kfc.close();
    }
    else if (choice == 5) {
        fstream bir("biryani.txt", ios::in);
        while (bir >> a3 >> b3 >> c3) {
            file3 = "biryani.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            cout << read << endl;
            j++;
        }
        bir.close();
    }
    else if (choice == 6) {
        fstream ala("newmenu4.txt", ios::in);
        while (ala >> a3 >> b3 >> c3) {
            file3 = "newmenu4.txt";
            coordxy(66, 14 + j);
            cout << a3 << "." << " " << b3 << "       -----------" << "Rs-" << c3 << endl;
            j++;
        }
        ala.close();
    }
    coordxy(79, 30);
    cout << "Slect the Food  \t\t"; cin >> j;
    coordxy(79, 33);
    cout << "Enter the quantity\t"; cin >> ij;
    fstream MyFile(file3, ios::in);
    while (MyFile >> a3 >> b3 >> c3)
    {
        if (a3 == j)
        {
            fare3 = c3 * ij;
            coordxy(31, 36);
            cout << "------------------------------------------------------------\n\n\n";
            coordxy(55, 35);
            cout << "Your Bill is\t" << fare3 << endl;
        }
    }
    MyFile.close();
    char co;
    cout << "Do you want to order anything else\t"; cin >> co;
    if (co == 'y' || co == 'Y') {
        goto p;
    }
    else {
        exit(0);
    }

}

//                                                 Anar

void Food::AnarQuali()
{
    r:
    string file2, b2; int a2, c2;
    string read; int ij = 0, j = 0;
    coordxy(39, 13);
    cout << "--< HOTELS >--";
    designFirst(35, 57, 14, 28);
    fstream wh("Anar.txt", ios::in);
    while (!wh.eof()) {
        getline(wh, read);
        coordxy(38, 16 + ij);
        cout << read << endl;
        ij++;
    }
    wh.close();
    designFirst(54, 58, 29, 31);
    coordxy(35, 30);
    cout << "Slect your hotel\t"; cin >> choice;
    coordxy(85, 12);
    cout << "--< M E N U >--";
    designFirst(64, 115, 13, 27);
    designFirst(103, 107, 29, 31);
    designFirst(103, 107, 32, 34);
    if (choice == 1) {
        fstream ra("Madina.txt", ios::in);
        while (ra >> a2 >> b2 >> c2) {
            file2 = "Madina.txt";
            coordxy(66, 14 + j);
            cout << a2 << "." << " " << b2 << "       -----------" << "Rs-" << c2 << endl;
            j++;
        }
        ra.close();
    }
    else if (choice == 2) {
        fstream pz("pizza.txt", ios::in);
        while (pz >> a2 >> b2 >> c2) {
            file2 = "pizza.txt";
            coordxy(66, 14 + j);
            cout << a2 << "." << " " << b2 << "       -----------" << "Rs-" << c2 << endl;
            j++;
        }
        pz.close();
    }
    else if (choice == 3) {
        fstream sh("shorma.txt", ios::in);
        while (sh >> a2 >> b2 >> c2) {
            file2 = "shorma.txt";
            coordxy(66, 14 + j);
            cout << a2 << "." << " " << b2 << "       -----------" << "Rs-" << c2 << endl;
            j++;
        }
    }
    else if (choice == 4) {
        fstream bq("bbq.txt", ios::in);
        while (bq >> a2 >> b2 >> c2) {
            file2 = "bbq.txt";
            coordxy(66, 14 + j);
            cout << a2 << "." << " " << b2 << "       -----------" << "Rs-" << c2 << endl;
            j++;
        }
        bq.close();
    }
    else if (choice == 5) {
        fstream nah("nahari.txt", ios::in);
        while (nah >> a2 >> b2 >> c2) {
            file2 = "nahari.txt";
            coordxy(66, 14 + j);
            cout << a2 << "." << " " << b2 << "       -----------" << "Rs-" << c2 << endl;
            j++;
        }
        nah.close();
    }
    else if (choice == 6) {
        fstream qa("newmenu5.txt", ios::in);
        while (qa >> a2 >> b2 >> c2) {
            file2 = "newmenu5.txt";
            coordxy(66, 14 + j);
            cout << a2 << "." << " " << b2 << "       -----------" << "Rs-" << c2 << endl;
            j++;
        }
        qa.close();
    }
    int fare2 = 0;
    coordxy(79, 30);
    cout << "Slect the Food  \t\t"; cin >> j;
    coordxy(79, 33);
    cout << "Enter the quantity\t"; cin >> ij;
    fstream MyFile(file2, ios::in);
    while (MyFile >> a2 >> b2 >> c2)
    {
        if (a2 == j)
        {
            fare2 = c2 * ij;
            coordxy(31, 36);
            cout << "------------------------------------------------------------\n\n\n";
            coordxy(55, 35);
            cout << "Your bill is" << fare2 << endl;
        }
    }
    MyFile.close();
    char co;
    cout << "Do you want to order anything else\t"; cin >> co;
    if (co == 'y' || co == 'Y') {
        goto r;
    }
    else {
        exit(0);
    }
}

//                                              SamnaBad

void Food::SamnaBad()
{
    s:
    string file1, b1;
    int a1, c1;
    string read; int ij = 0, j = 0;
    coordxy(39, 13);
    cout << "--< HOTELS >--";
    designFirst(35, 57, 14, 28);
    fstream mu("Samnabad.txt", ios::in);
    while (!mu.eof()) {
        getline(mu, read);
        coordxy(38, 16 + ij);
        cout << read << endl;
        ij++;
    }
    mu.close();
    designFirst(54, 58, 29, 31);
    coordxy(35, 30);
    cout << "Slect your hotel\t"; cin >> choice;
    coordxy(85, 12);
    cout << "--< M E N U >--";
    designFirst(64, 115, 13, 27);
    designFirst(103, 107, 29, 31);
    designFirst(103, 107, 32, 34);
    if (choice == 1) {
        fstream pz("pizza.txt", ios::in);
        while (pz>>a1>>b1>>c1) {
            file1 = "pizza.txt";
            coordxy(66, 14 + j);
            cout << a1 << "." << " " << b1 << "      -------------" << " Rs-" << c1 << endl;
            j++;
        }
        pz.close();
    }
    else if (choice == 2) {
        fstream nah("nahari.txt", ios::in);
        while (nah>>a1>>b1>>c1) {
            file1 = "nahari.txt";
            coordxy(66, 14 + j);
            cout << a1 << "." << " " << b1 << "      -------------" << " Rs-" << c1 << endl;
            j++;
        }
        nah.close();
    }
    else if (choice == 3) {
        fstream mc("McDonal.txt", ios::in);
        while (mc>>a1>>b1>>c1) {
            file1 = "McDonal.txt";
            coordxy(66, 14 + j);
            cout << a1 << "." << " " << b1 << "      -------------" << " Rs-" << c1 << endl;
            j++;
        }
        mc.close();
    }
    else if (choice == 4) {
        fstream ra("Madina.txt", ios::in);
        while (ra>>a1>>b1>>c1) {
            file1 = "Madina.txt";
            coordxy(66, 14 + j);
            cout << a1 << "." << " " << b1 << "        -------------" << "Rs-" << c1 << endl;
            j++;
        }
        ra.close();
    }
    else if (choice == 5) {
        fstream kfc("KFC.txt", ios::in);
        while (kfc>>a1>>b1>>c1) {
            file1 = "KFC.txt";
            coordxy(66, 14 + j);
            cout << a1<<"."<<" "<<b1<<"       -----------"<<"Rs-"<<c1<<endl;
            j++;
        }
        kfc.close();
    }
    else if (choice == 6) {
        fstream samn("newmenu6.txt", ios::in);
        while (samn>>a1>>b1>>c1) {
            file1 = "newmenu6.txt";
            coordxy(66, 14 + j);
            cout << a1 << "." << " " << b1 << "       -----------" << "Rs-" << c1 << endl;
            j++;
        }
        samn.close();
    }
    coordxy(79, 30);
    cout << "Slect the Food  \t\t"; cin >> j;
    coordxy(79, 33);
    cout << "Enter the quantity\t"; cin >> ij;
    int fare1 = 0;
    fstream MyFile(file1, ios::in);
    while (MyFile >> a1 >> b1 >> c1)
    {
        if (a1 == j)
        {
            fare1 = c1 * ij;
            coordxy(31, 36);
            cout << "------------------------------------------------------------\n\n\n";
            coordxy(55, 35);
            cout << "Your bill is " << fare1<<endl;
        }
    }
    MyFile.close();
    char co;
    cout << "Do you want to order anything else\t"; cin >> co;
    if (co == 'y' || co == 'Y') {
        goto s;
    }
    else {
        exit(0);
    }
   
   
}

//                                             ICHRA

void Food::Ichra()
{
    t:
    string file;
    int a, c;
    string b;
    string read; int ij = 0, j = 0;
    coordxy(39, 13);
    cout << "--< HOTELS >--";
    designFirst(35, 57, 14, 28);
    fstream jh("Ichra.txt", ios::in);
    while (!jh.eof()) {
        getline(jh, read);
        coordxy(38, 16 + ij);
        cout << read << endl;
        ij++;
    }
    jh.close();
    designFirst(54, 58, 29, 31);
    coordxy(35, 30);
    cout << "Slect your hotel\t"; cin >> choice;
    coordxy(85, 12);
    cout << "--< M E N U >--";
    designFirst(64, 115, 13, 27);
    designFirst(103, 107, 29, 31);
    designFirst(103, 107, 32, 34);
    if (choice == 1) {
        fstream fri("Frichick.txt", ios::in);
        while (fri>>a>>b>>c) {
            file = "Frichick.txt";
            coordxy(66, 14 + j);
            cout << a << "." << " " << b << "      -------------" << " Rs-" << c << endl;
            j++;
        }
        fri.close();
    }
    else if (choice == 2) {
        fstream bu("bunduKhan.txt", ios::in);
        while (bu>>a>>b>>c) {
            file = "bunduKhan.txt";
            coordxy(66, 14 + j);
            cout << a <<"."<<" "<< b<<"      -------------"<<"Rs-"<<c<<endl;
            j++;
        }
        bu.close();
    }
    else if (choice == 3) {
        fstream ma("Madina.txt", ios::in);
        while (ma>>a>>b>>c) {
            file = "Madina.txt";
            coordxy(66, 14 + j);
            cout << a << "." << " " << b << "        -------------" << "Rs-" << c << endl;
            j++;
        }
        ma.close();
    }
    else if (choice == 4) {
        fstream mc("McDonal.txt", ios::in);
        while (mc>>a>>b>>c) {
            file = "McDonal.txt";
            coordxy(66, 14 + j);
            cout << a << "." << " " << b << "        -------------" << "Rs-" << c << endl;
            j++;
        }
        mc.close();
    }
    else if (choice == 5) {
        
        fstream piz("pizza.txt", ios::in);
        while (piz>>a>>b>>c) {
            file="pizza.txt";
            coordxy(66, 14 + j);
            cout <<a<<"."<<" "<<b<<"        -------------"<<"Rs-"<<c<<endl;
            j++;
        }
        piz.close();
    }
    else if (choice == 6) {
        fstream uc("newmenu7.txt", ios::in);
        while (uc >> a >> b >> c) {
            file = "newmenu7.txt";
            coordxy(66, 14 + j);
            cout << a << "." << " " << b << "        -------------" << "Rs-" << c << endl;
            j++;
        }
        uc.close();
    }
    int fare=0;
    coordxy(79, 30);
    cout << "Slect the Food  \t\t"; cin >> j;
    coordxy(79, 33);
    cout << "Enter the quantity\t"; cin >> ij;
    fstream MyFile(file, ios::in);
    while (MyFile >> a >> b >> c)
    {
        if (a == j)
        {
            fare = c * ij;
            coordxy(31, 36);
            cout << "------------------------------------------------------------\n\n\n";
            coordxy(55, 35);
            cout << "Your bill is" << fare<<endl;
        }
    }
    MyFile.close();
    char co;
    cout << "Do you want to order anything else\t"; cin >> co;
    if (co == 'y' || co == 'Y') {
        goto t;
    }
    else {
        exit(0);
    }
}


void Food::buyOrder() {
    int j=0; string read;
    coordxy(6, 12);
    cout << "--< AREAS >--";
    designFirst(3, 21, 13, 28);
    fstream areas("area.txt", ios::in);
    while (!areas.eof()) {
        getline(areas, read);
        coordxy(6, 15+j);
        cout << read << endl;
        j++;
    }
    areas.close();
    designFirst(22, 26, 29, 31);
    coordxy(2, 30);
    cout << "Slect your area\t"; cin >> choice;
    if (choice == 1) {
        
        jhourTown();
       
    }
    else if (choice == 2) {
        wahdatRoad();
    }
    else if (choice == 3) {
        muslimTown();
    }
    else if (choice == 4) {
        AllamaIqbal();
    }
    else if (choice == 5) {
        AnarQuali();
    }
    else if (choice == 6) {
        SamnaBad();
    }
    else if (choice == 7) {
        Ichra();
    }
  

}