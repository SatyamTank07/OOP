#include<iostream>
using namespace std;

class date{
    int day;
    int month;
    int year;
    public:
    date(int d,int m,int y){
        day = d;
        month = m;
        year = y;
    }
    void calculateNewDate(int od,int om,int oy);

};
void date :: calculateNewDate(int od,int om,int oy){
    cout << "Currant Date is : " << day << "/" << month << "/" << year << endl;
    int addDay;
    cout << "Enter day to add : ";
    cin >> addDay;

    day = od+addDay;
    if(day >= 30){
        month = month + day/30;
        day =  day%30;
        if(month >= 12){
            year = year + month/12;
            month = month%12;
        }
    }
    cout << "NEW DATE : " << day << "/" << month << "/" << year;

}
int main(){
    int d,m,y;
    cout << "Enter Day : ";
    cin >> d;

    cout << "Enter Month : ";
    cin >> m;

    cout << "Enter Year : ";
    cin >> y;

    date d1(d,m,y);
    d1.calculateNewDate(24,10,2023);
    return 0;
}