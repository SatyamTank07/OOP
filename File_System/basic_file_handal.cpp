#include<fstream>
#include<iostream>
using namespace std;

int main(){
    ofstream fout;

    // write kryu.
    fout.open("myfile.txt");
    fout<<"fodi lesu";
    fout.close();
    
    char ch;
    ifstream fin;
    // read kri print kryu
    // fin>>ch;
    ch = fin.get();
    fin.open("file.txt");
    while(!fin.eof()){
        cout << ch;
        ch = fin.get();
    }
    fin.close();

    // default
    // fin.open("myfile.dat",ios::in);
    // fout.open("myfile.dat",ios::out);
    // fout.open("myfile.dat",ios::app); // exits file ma append krse
    // fout.open("myfile.dat",ios::ate); // update kre su kre e khabar ny
    // fout.open("myfile.dat",ios::binary); // special char as it is print kre like \n 

}