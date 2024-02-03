#include<iostream>
using namespace std;

class add{
    int num;
    public:
    void input(){
        cout << "ENter Number : ";
        cin >> num;
    }

    add operator + (add b){
        num = this->num + b.num;
        cout << num;    
    }

};

int main(){
    add a,b,c;
    a.input();
    b.input();

    c = a + b;

}