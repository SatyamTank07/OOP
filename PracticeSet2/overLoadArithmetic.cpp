#include<iostream>
using namespace std;

class add{
    int real;
    int imaginary;
    public:
    void input(){
        cout << "ENter Number real : ";
        cin >> real;

        cout << "ENter Number imaginary : ";
        cin >> imaginary;
    }

    add operator + (add obj){
        add ans;
        ans.real = this->real + obj.real;
        ans.imaginary = this->imaginary + obj.imaginary;
        // return ans;
        cout << ans.real << "+" << ans.imaginary << "i" << endl;   
    }

    add operator - (add obj){
        add ans;
        ans.real = this->real - obj.real;
        ans.imaginary = this->imaginary - obj.imaginary;
        // return ans;
        cout << ans.real << "+" << ans.imaginary << "i" << endl;   
    }

    add operator * (add obj){
        add ans;
        ans.real = this->real * obj.real;
        ans.imaginary = this->imaginary * obj.imaginary;
        // return ans;
        cout << ans.real << "+" << ans.imaginary << "i" << endl;   
    }

    add operator == (add obj){
        add ans;
        ans.real = this->real == obj.real;
        ans.imaginary = this->imaginary == obj.imaginary;
        // return ans;
        cout <<"Real number : " << ans.real << endl;   
        cout <<"Imaginary number : " << ans.imaginary << endl;   
    }

    add operator != (add obj){
        add ans;
        ans.real = this->real != obj.real;
        ans.imaginary = this->imaginary != obj.imaginary;
        // return ans;
        cout <<"Real number : " << ans.real << endl;   
        cout <<"Imaginary number : " << ans.imaginary << endl;   
    }

    add operator = (add obj){
        add ans;
        ans.real = this->real = obj.real;
        ans.imaginary = this->imaginary = obj.imaginary;
        // return ans;
        cout <<"Real number : " << ans.real << endl;   
        cout <<"Imaginary number : " << ans.imaginary << endl;   
    }

};

int main(){
    add a,b,c;
    a.input();
    b.input();
    //a.operator+(b);
    cout << "+ Operator Overload : ";
    c = a + b;
    cout << endl;
    cout << "- Operator Overload : ";
    c = a - b;
    cout << endl;
    cout << "* Operator Overload : ";
    c = a * b;
    cout << endl;
    cout << "== Operator Overload : " << endl;
    c = a == b;
    cout << endl;
    cout << "!= Operator Overload : " << endl;
    c = a != b;
    cout << endl;
    cout << "= Operator Overload : " << endl;
    c = a = b;

}