#include <iostream>
using namespace std;

class addDays
{
public:
    int days;
    addDays(int dy) : days(dy) {}
};

class Date
{
    int date;
    int month;
    int year;
public:
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
    void operator+(addDays obj)
    {
        Date ans;
        ans.date = date + obj.days;
        cout << endl << "After Adding days : ";
        if(ans.date >= 30){
            ans.month = month + (ans.date/30);
            ans.date = (ans.date%30);
        }else{
            ans.month = month;
            ans.year = year;
        }
        if(ans.month >= 12){
                ans.year = year + (ans.month/12);
                ans.month = (ans.month%12);
        }
        cout << ans.date << "-" << ans.month << "-" << ans.year;
    }
};



int main()
{
    Date date;
    date.input();
    date.display();
    addDays day(41);
    date+day;
    return 0;
}