// Write a program to create class Student with student’s rollno, name and
// marks of three subjects (OOCP, DBMS and English) and display the
// details of student with total marks of all subjects along with the
// percentage in proper format.(Output should be in descending order of
// percentage.

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
class students
{
    int rno;
    char name[10];
    int oocp, dbms, mf;

public:
    void input()
    {
        cout << "Enter Roll No,Name,Marks Of OOCP,DBMS,MF : " << endl;
        cin >> rno >> name >> oocp >> dbms >> mf;
    }
    void display()
    {
        int per = (oocp + dbms + mf) / 3;
        cout << setw(3) << rno << "  " << setw(10) << name << "  " << setw(5) << oocp << "  " << setw(5) << dbms << "  " << setw(5) << mf << "  " << setw(5) << per;
    }
    friend bool compareByPercentage(students, students);

    void storebook()
    {
        ofstream fout;
        fout.open("file.dat", ios::app | ios::binary);
        fout.write((char *)this, sizeof(*this));
        fout.close();
    }
    void readfromfile()
    {
        ifstream rd("file.dat", ios::in | ios::binary);
        while (rd.read((char *)this, sizeof(*this)))
        {
            this->display();
            cout << endl;
        }
        rd.close();
    }
};

bool compareByPercentage(students s1, students s2)
{
    int per1 = (s1.oocp + s1.dbms + s1.mf) / 3;
    int per2 = (s2.oocp + s2.dbms + s2.mf) / 3;
    return per1 > per2; // Sorting in descending order
}

void bubbleSort(students arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (compareByPercentage(arr[j], arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n = 2;
    students stud[n];

    for (int i = 0; i < n; i++)
    {
        stud[i].input();
        stud[i].storebook();
    }
    bubbleSort(stud, n);
    cout << setw(3) << "rno"
         << "  " << setw(10) << "name"
         << "  " << setw(5) << "oocp"
         << "  " << setw(5) << "dbms"
         << "  " << setw(5) << "mf"
         << "  " << setw(5) << "per";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        stud[i].display();
        cout << endl;
    }
    cout << endl;
    stud[0].readfromfile();
}