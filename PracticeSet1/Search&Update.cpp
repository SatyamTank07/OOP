#include<iostream>

using namespace std;

class student{
    int rollno;
    string name;
    int age;
    int oocp,mf,ai;

    public:
    student(int rno=0,string name="",int age=0){
        rollno = rno;
        name = name;
        age = age;
        oocp = 33;
        mf = 33;
        ai = 33;
    }
    void inputData();
    void displayData();
    static void upadateMarks(student *s, int n);
};

void student :: inputData(){
    cout << "Enter the Roll no. ";
    cin >> rollno;

    cout << "Enter the Name. ";
    cin >> name;

    cout << "Enter the age. ";
    cin >> age;
    cout << endl;
}

void student :: displayData(){
    cout << "Roll no. " << rollno << endl;
    cout << "Name. " << name << endl;
    cout << "age. " << age << endl;
    cout << "OOCP. " << oocp << endl;
    cout << "AI. " << ai << endl;
    cout << "MF. " << mf << endl;
}

void student :: upadateMarks(student *s, int n){
    int tempRno;
    cout << "Enter the roll no : ";
    cin >> tempRno;

    for(int i=0; i<n; i++){
        if(s[i].rollno == tempRno){
            cout << "Enter the OOCP marks for " << s[i].rollno << " : ";
            cin >> s[i].oocp;
            cout << "Enter the MF marks for " << s[i].rollno << " : ";
            cin >> s[i].mf;
            cout << "Enter the AI marks for " << s[i].rollno << " : ";
            cin >> s[i].ai;
            cout << endl;
            s[i].displayData();
        }
    }
}
int main(){
    int numOfstudent = 3;
    student s[numOfstudent];
    for (int i=0; i<numOfstudent; i++){
        s[i].inputData();
    }

    student :: upadateMarks(s,numOfstudent);
}