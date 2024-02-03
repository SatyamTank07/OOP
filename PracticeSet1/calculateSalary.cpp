#include<iostream>

using namespace std;

class employee{
    int eid;
    string ename;
    int salary;
    int PHRA = 20;
    int PDA = 30;
    int POA = 10;
    public:
    employee(int eid,string ename,int salary){
        this->eid = eid;
        this->ename = ename;
        this->salary = salary;
    }
    void inputdata();
    void display();
    void calculateSalary();
};
void employee :: inputdata(){
    cout << "Enter Employee ID : ";
    cin >> eid;
    cout << "Enter Employee Name : ";
    cin >> ename;
    cout << "Enter Employee Salary : ";
    cin >> salary;
}
void employee :: display(){
    cout << "Employee ID : " << eid <<endl;
    cout << "Employee Name : " << ename <<endl;
    cout << "Employee Total Salary : " << salary <<endl;
}

void employee :: calculateSalary(){
    int HRA,DA,OA;

    HRA = (PHRA/100)*salary;
    DA = (PDA/100)*salary;
    OA = (POA/100)*salary;

    salary = salary + HRA + DA + OA;
}
int main(){
    employee e11(1,"qwe",10000);
    // employee e22(2,"vdds",40000);
    // employee e33(3,"fse",30000);
    // employee e[];

    // for(int i=0; i<5; i++){
    //     // e[i].inputdata();
    // }
    e11.calculateSalary();
    // for(int i=0; i<5; i++){
    //     // e[i].display(e11);;
    // }
    e11.display();
    // e22.display();
    // e33.display();
}