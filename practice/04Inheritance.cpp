#include <iostream>
using namespace std;

class animal{
    public:
    int age;
    int weight;

    void eat(){
        cout << "animal eating..."<< endl;
    }
};

class dog : private animal{
    public:
    void print(){
        cout << "protected age : " << this->age;
    }
};
int main(){
    dog d1;
    // d1.age;
    d1.print();
}

