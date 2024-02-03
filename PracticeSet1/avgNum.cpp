#include<iostream>
using namespace std;

class num{
    int n1,n2,n3,n4;
    int avg;
    public:
    void input();
    void display();
};

void num :: input(){
    cout << "Enter number 1 : ";
    cin >> n1;

    cout << "Enter number 2 : ";
    cin >> n2;

    cout << "Enter number 3 : ";
    cin >> n3;

    cout << "Enter number 4 : ";
    cin >> n4;
}

void num :: display(){
    cout << "Number 1 : " << n1 <<endl;
    cout << "Number 2 : " << n2 <<endl;
    cout << "Number 3 : " << n3 <<endl;
    cout << "Number 4 : " << n4 <<endl;
    cout << "Average Of number is : " << (n1+n2+n3+n4)/4;

}
int main(){
    num numbers;
    numbers.input();
    numbers.display();
}