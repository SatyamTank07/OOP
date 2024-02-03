#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Account
{
    int accid;
    string acctype;
    string cust_name;
    int payment;
    string payment_date;

public:
    Account(int aid = 0, string actyp = "", string cnm = "", int pay = 0, string pay_date = "") : accid(aid), acctype(actyp), cust_name(cnm), payment(pay), payment_date(pay_date)
    {
        cout << "account constructor called" << endl;
    }
    void inputdata()
    {
        cout << "Enter Account No,Type,Name,Currant Payment,Payment Date" << endl;
        cin >> accid >> acctype >> cust_name >> payment >> payment_date;
    }
    void displaydata()
    {
        // cout.setf(ios :: left, ios::adjustfield);
        cout << left << setw(10) ;
        // cout << setw(11);
        cout << accid ;
        cout.setf(ios :: left, ios::adjustfield);
        cout << setw(8);
        cout << acctype ;
        cout.setf(ios :: left, ios::adjustfield);
        cout << setw(9);
        cout << cust_name ;
        cout.setf(ios :: left, ios::adjustfield);
        cout << setw(18);
        cout << payment ;
        cout.setf(ios :: left, ios::adjustfield);
        cout << setw(10);
        cout << payment_date << endl;
    }
    void savetofile(const string &filename)
    {

        ofstream wr(filename, ios::binary | ios::app);

        if (wr.is_open())
        {
            wr.write((char *)this, sizeof(*this));
            if (wr)
            {
                cout << "write Successfully!" << endl;
            }
            else
            {
                cerr << "Error writeing from file!" << endl;
            }
            wr.close();
            // cout << "Write Sucessfully !";
        }
        else
        {
            cout << "Error opening file for writing!" << endl;
        }
    }
    void readfromfile(const string &filename)
    {
        ifstream rd(filename,ios::in|ios::binary);
            while (rd.read((char *)this, sizeof(*this)))
            {
                this->displaydata();
            }
            rd.close();
    }
    ~Account()
    {
        cout << endl;
        cout << "Distructor Call for account" << endl;
    }
};
int main()
{
    string filename = "Q13File.dat";
    Account acc1;
    acc1.inputdata();
    acc1.savetofile(filename);
    cout << "Account No | Type | Name | Currant Payment | Payment Date" << endl;
    acc1.readfromfile(filename);
    return 0;
}