#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;

    // fout.open("abc.txt");
    // fout << "Hello Brother";
    // fout.close();

    fin.open("abc.txt");
    char ch;
    int pos;

    // pos = fin.tellg();
    // cout << pos << " : ";

    // ch = fin.get();
    // cout << ch << endl;

    // position ane index banne print krse
    // while (!fin.eof())
    // {
           // kyathi read krva nu saru krvu che.
    //     pos = fin.tellg();
    //     cout << pos << " : ";

    //     cout << ch << endl;
    //     ch = fin.get();
    // }
    fin.close();

    // fout.open("abc.txt",ios::app);
    // fout << "   Hello Brother";
    // fout.close();

    fout.open("abc.txt",ios::app);
    pos = fout.tellp();
    // kyathi lakhva nu start krvu te.
    // 0 thi start thay ne pele thi je lakhelu hoy te ignore kre.
    // ios::app hoy to lakhela pachi thi kre. 
    cout << pos; // print 0
    fout << "ABC";
    pos = fout.tellp();
    cout << pos; 
    fout.close();


}

