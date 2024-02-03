#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("abc.txt");
    // cout << fin.tellg();
    // cout << "\n"
    //      << (char)fin.get();
    // cout << (char)fin.get();
    cout << "Pela hu hato aaya : ";
    cout << fin.tellg() << endl;
    fin.seekg(6);

    cout << "Pachi mane mokalyo aaya : ";
    cout << fin.tellg();
    cout << "\n"
         << (char)fin.get();
    cout << (char)fin.get();
    cout << (char)fin.get();
    cout << (char)fin.get();
    cout << (char)fin.get();
    cout << (char)fin.get();

    cout << endl;
    cout << "Ane hve hu chu atyare aaya : ";
    cout << fin.tellg() << endl;

    cout << endl;
    // 3 dagla aagal vadhia currant thi.
    fin.seekg(3,ios_base::cur);
    // saru thi kre...
    // seekp same j che khali ofstream mate m.
    // fin.seekg(3,ios_base::beg);
    //pachal thi ocha kre.
    // fin.seekg(-3,ios_base::end);
    cout << "3 dagla aagal : ";
    cout << fin.tellg();
    cout << " ";
    cout << "\n"
         << (char)fin.get();
    cout << (char)fin.get();
    cout << (char)fin.get();
    cout << (char)fin.get();

    cout << endl;
    cout << "ane pacha pochi gya appde aaya : ";
    cout << fin.tellg();
    fin.close();
    getch();
}    