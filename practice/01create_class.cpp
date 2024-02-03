#include <iostream>
using namespace std;

class animal{
private :
    int age;
    int weigh;
    char a;
    double b;
    int weight;
}dog;

int main(){
    cout << "Size Of Animal ! : " << sizeof(animal) << " ";
    cout << sizeof(int) << " ";
    cout << sizeof(int) << " ";
    cout << sizeof(char) << " ";
    cout << sizeof(double) << " " << endl;
    cout << "Size Of Dog ! : " << sizeof(dog) << " ";

    return 0;
}