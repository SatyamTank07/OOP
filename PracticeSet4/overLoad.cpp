#include <iostream>
#include <cstdlib>

using namespace std;

class Days
{
public:
    int days;
    Days(int dy) : days(dy) {}
};
class marks
{
    int arr[3];

public:
    marks()
    {
        arr[1] = 11;
        arr[2] = 22;
        arr[3] = 33;
    }
    void display()
    {
        cout << "  " << arr[1] << "  " << arr[2] << "  " << arr[3];
    }
    void operator[](int position)
    {
        cout << "Arr[" << position << "]" << arr[position];
    }
    void operator()(int a1, int a2)
    {
        cout << "this is 1st perameter : " << a1;
        cout << "this is 2ed perameter : " << a2;
    }
    marks *operator->()
    {
        return this;
    }
};
class Date
{
public:
    int date;
    int month;
    int year;

    Date() {}
    Date(int dt, int mn, int yr) : date(dt), month(mn), year(yr) {}
    void input()
    {
        cout << "Enter the Date in format DD MM YYYY : ";
        cin >> date >> month >> year;
    }
    void display()
    {
        cout << "Date is"
             << " : " << date << "-" << month << "-" << year;
    }
    void operator+(Days obj)
    {
        Date ans;
        ans.date = date + obj.days;
        cout << endl
             << "After Adding days : ";
        if (ans.date >= 30)
        {
            ans.month = month + (ans.date / 30);
            ans.date = (ans.date % 30);
        }
        else
        {
            ans.month = month;
            ans.year = year;
        }
        if (ans.month >= 12)
        {
            ans.year = year + (ans.month / 12);
            ans.month = (ans.month % 12);
        }
        cout << ans.date << "-" << ans.month << "-" << ans.year;
    }

    void operator-(Days obj)
    {
        Date ans;
        int monthCount = 0, yearCount = 0;
        ans.date = date - obj.days;
        ans.month = month;
        ans.year = year;
        while (ans.date <= 0)
        {
            ans.date = 30 + ans.date;
            monthCount++;
        }
        ans.month = month - monthCount;
        while (ans.month <= 0)
        {
            ans.month = 12 + ans.month;
            yearCount++;
        }
        ans.year = year - yearCount;
        cout << endl
             << "After Subtracting days : ";
        cout << ans.date << "-" << ans.month << "-" << ans.year;
    }

    void operator=(Days obj)
    {
        if (date == obj.days)
        {
            cout << "Date are equel !";
        }
        else
        {
            cout << "date are not equel !";
        }
    }

    void operator+=(int addDATE)
    {
        Date ans;
        ans.date = date + addDATE;
        ans.month = month;
        ans.year = year;

        if (ans.date >= 30)
        {
            ans.month = month + (ans.date / 30);
            ans.date = (ans.date % 30);
        }
        if (ans.month >= 12)
        {
            ans.year = year + (ans.month / 12);
            ans.month = (ans.month % 12);
        }

        cout << endl
             << "Ans Date : " << ans.date << "-" << ans.month << "-" << ans.year;
    }

    void *operator new(size_t size)
    {
        cout << "Memory allocate with new operator...";
        return ::operator new(size);
    }

    void operator delete(void* pointer){
        cout << "Create Memory deleted...";
        free(pointer);
    }
    void operator++()
    {
        Date ans;
        ans.date = ++date;

        if (ans.date >= 30)
        {
            ans.month = month + (ans.date / 30);
            ans.date = (ans.date % 30);
            if (ans.month >= 12)
            {
                ans.year = year + (ans.month / 12);
                ans.month = (ans.month % 12);
            }
        }
        else
        {
            ans.month = month;
            ans.year = year;
        }
        cout << endl
             << "Ans Date : " << ans.date << "-" << ans.month << "-" << ans.year;
    }
    void operator++(int)
    {
        Date ans;
        ans.date = date++;

        if (ans.date >= 30)
        {
            ans.month = month + (ans.date / 30);
            ans.date = (ans.date % 30);
            // ans.date = (ans.date / 30);
            if (ans.month >= 12)
            {
                ans.year = year + (ans.month / 12);
                ans.month = (ans.month % 12);
            }
        }
        else
        {
            ans.month = month;
            ans.year = year;
        }
        cout << endl
             << "Ans Date : " << ans.date << "-" << ans.month << "-" << ans.year;
    }
};
int main()
{
    // Date dateobj;
    // marks m;
    Date* obj = new Date;
    delete(obj);

    // m[1];
    // m(44,55);
    // dateobj.input();
    // dateobj.display();
    // Days day(5);
    // m.display();
    // m->display();
    // dateobj+day;
    // dateobj-day;
    // dateobj=day;
    // dateobj += 20;
    // ++dateobj;
    // dateobj++;
    return 0;
}