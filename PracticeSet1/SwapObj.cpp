#include<iostream>
#include <string>
using namespace std;

class student{
    int rollno;
    string name;
    int moocp,mai,mmf;
    int per;
public:
    void input();
    void display();
    void percalculate();
    static void sortDesc(student *stud,int numofstud);
};

void student :: input(){
    cout << "Enter RollNo : ";
    cin >> rollno;
    
    cout << "Enter Name : ";
    cin >> name;
    
    cout << "Enter Marks os oocp : ";
    cin >> moocp;
    
    cout << "Enter Marks of AI : ";
    cin >> mai;
    
    cout << "Enter Marks of MF : ";
    cin >> mmf;
}

void student :: display(){
    cout << "Roll no : " << rollno << endl;
    cout << "Name : " << name << endl;
    cout << "OOCP : " << moocp << endl;
    cout << "AI : " << mai << endl;
    cout << "MF : " << mmf << endl;
    cout << "Persentage : " << per << endl;
}

void student :: percalculate(){
    int total = moocp + mai + mmf;
    per = total / 3.0;
}

void student :: sortDesc(student *stud,int numofstud){
    for(int i=0; i<numofstud-1; ++i){
        for(int j = 0; j<numofstud-i-1; ++j){
            if(stud[j].per < stud[j+1].per){
                swap(stud[j],stud[j+1]);
            }
        }
    }
}

int main(){
    int i,numOFstud = 3;
    student s[numOFstud];
    for(int i=0; i<numOFstud; i++){
        s[i].input();
        s[i].percalculate();
    }
    student :: sortDesc(s,numOFstud);
    for(int i=0; i<numOFstud; i++){
        s[i].display();
    }
    return 0;
}


// =========================================================
// void customSort(Student students[], int numStudents) {
//     for (int i = 0; i < numStudents - 1; ++i) {
//         for (int j = 0; j < numStudents - i - 1; ++j) {
//             if (students[j].percentage() < students[j + 1].percentage()) {
//                 std::swap(students[j], students[j + 1]);
//             }
//         }
//     }
// }
