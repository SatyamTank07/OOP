//inheritance || template || file || overloading
#include<iostream>
#include<cstring>
#include<iomanip>
#include<fstream>

using namespace std;    
class base{
    public:
    virtual void input()=0;
    virtual void display()=0;
};
class student:public base{
    protected:
    int rno;
    char name[10];
    int age;
    public:
    student(){}
    student(int rn,char nm[],int ag):rno(rn),age(ag){
        strcpy(nm,name);
    }
    virtual void input()
    {
        cout << "Enter Roll No,Name,age : " << endl;
        cin >> rno >> name >>age;
    }
    virtual void display()
    {
        cout << setw(3) << left << rno << setw(10)<< left  << name << setw(5) << left << age;
    }
};

class Marks : public student{
    protected:
    int oocp,mf,ai,dbms,ds;
    public:
    Marks(){}
    Marks(int oocp,int mf,int ai,int dbms,int ds,int& rno,char name[],int& age):student(rno,name,age),oocp(oocp),ai(ai),dbms(dbms),ds(ds){}
    virtual void input(){
        student::input();
        cout << "Enter Marks of oocp,mf,ai,dbms,ds : ";
        cin >> oocp >> mf >> ai >> dbms >> ds;
    }
    virtual void display()
    {
        student :: display();
        cout << setw(3) << left << oocp << setw(3)<< left  << mf << setw(5) << left << ai << setw(5) << left << dbms << setw(5) << left << ds;
    }

    void writeDetails(){
        ofstream fout("Final.dat",ios::app|ios::binary);
        fout.write((char*)this,sizeof(*this));
        fout.close();
    }

    void readDetails(){
        ifstream fin("Final.dat",ios::in|ios::binary);
        while(fin.read((char*)this,sizeof(*this))){
            this->display();
            cout << endl;
        }
        fin.close();
    }
};
class result:public Marks{
    
};
int main(){
    int n=2;
    Marks m;
    for(int i=0;i<n;i++){
        m.input();
        m.writeDetails();
    }
    m.readDetails();
}