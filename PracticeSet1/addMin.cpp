#include<iostream>
using namespace std;

class time{
    int h;
    int m;
    public:
    time(){
        h=10;
        m=10;
    }

    void display();
    void inputmin();
    void newtime();
}t1;

void time :: display(){
    cout << "Time is -> " << h << ":" << m << endl;
}
void time :: inputmin(){
   cin >> h >> m;
}
void time :: newtime(){
    int addmin;
    cout << "Enter min to Add : ";
    cin >> addmin;
    this->m += addmin;
    if(this->m >= 60){
        this->h += (this->m/60);
        this->m = (this->m%60);
    }
    /* int temp = this->m + addmin
    while(temp >= 60){
        if(this->h > 24){
            this->h = 0;
            temp -= 60;
        }else{
            this->h += 1;
            temp -= 60;
        }
    }
    if(temp > 0){
        this->m = temp; 
    }*/
    this->display();
}
int main(){
    t1.inputmin();
    t1.display();
    t1.newtime();
    return 0;
}