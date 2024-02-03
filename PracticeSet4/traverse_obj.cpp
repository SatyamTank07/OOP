#include<iostream>
using namespace std;

class student{
    int rno;
    string name;
    int age;
    int oocp,ai,mf;
    public:
    student(){oocp = 33;
        ai = 33;
        mf = 33;}
    student(int rn,string nm,int ag){
        rno = rn;
        name = nm;
        age = ag;
    }
    void input(){
        cout << "Enter rno,name,age : " << endl;
        cin >> rno >> name >> age ;
    }
    void display(){
        cout << rno << "  " << name << "  " << age << "  " << oocp << "  " << ai << "  " << mf << endl;
    }
    friend void findrno(student obj[]);
};

void findrno(student obj[]){
    int x;
    cout << "enter rno to find :";
    cin >> x;
    int i;
    cout << endl;
    for(i=1;i<4;i++){
        if(obj[i].rno == x){
            cout << "enter oocp ai mf marks : ";
            cin >> obj[i].oocp;
            cin >> obj[i].ai;
            cin >> obj[i].mf;
        break;
        }
    }
        obj[i].display();

}
int main(){
    student obj[3];
    for(int i=0;i<3;i++){
        obj[i].input();
    }
    for(int i=0;i<3;i++){
        obj[i].display();
    }

    findrno(obj);
    cout <<  endl;
    for(int i=0;i<3;i++){
        obj[i].display();
    }
}