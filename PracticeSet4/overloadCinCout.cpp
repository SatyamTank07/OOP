#include<iostream>
using namespace std;
class Name{
    string name;
    public:
    friend ostream &operator<<(ostream& karleprint,Name& obj){
        return karleprint << "overload << Name : "<< obj.name;
    }

    friend istream &operator>>(istream& leleInput,Name& obj){
        cout << "Enter name >> overloaded : ";
        return leleInput >> obj.name;
    }
};
int main(){
    Name nm;
    cin >> nm;
    cout << nm;
}