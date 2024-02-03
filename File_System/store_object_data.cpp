#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class book
{
private:
    int book_id;
    char b_name[20];
    int price;

public:
    book()
    {
        book_id = 0;
        strcpy(b_name, "No Title");
        price = 0;
    }
    void getbookdata()
    {
        cout << "Enter book_id and book name and price : " << endl;
        cin >> book_id;
        cin.ignore();
        cin.getline(b_name, 20);
        cin >> price;
    }

    void showdata()
    {
        cout << book_id << " | " << b_name << " | " << price << endl;
    }

    int storebook()
    {
        if (book_id == 0)
        {
            cout << endl
                 << "book data not insrted";
            return 0;
        }
        else
        {
            ofstream fout;
            fout.open("file.dat", ios::app | ios::binary);
            fout.write((char *)this, sizeof(*this));
            fout.close();
            return 1;
        }
    }

    void viewAllData()
    {
        ifstream fin;
        fin.open("file.dat", ios::in|ios::binary);

        if (!fin)
        {
            cout << "File not found";
        }
        else
        {
            fin.read((char*)this, sizeof(this));
            showdata();
            while (!fin.eof())
            {
                showdata();
                fin.read(reinterpret_cast<char*>(this), sizeof(*this));
            }
        }
        // while (inputFile.read(reinterpret_cast<char*>(&data), sizeof(data))) {
        // // Process or display the data
        // std::cout << "Read data: " << data << std::endl;
    // }
        fin.close();
    }
};
int main()
{
    book b1;
    b1.getbookdata();
    b1.showdata();
    b1.storebook();
    b1.viewAllData();

    return 0;
}