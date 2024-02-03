#include <iostream>
using namespace std;

class fruit{
    public:
        string name;
        
};

class mango : public fruit {
    public:
        int weight;
};

class alphanso : public mango {
    public:
        int sugarlevel;
};

int main(){
    alphanso a1;
    cout << " " << a1.name << " " << a1.weight << " " << a1.sugarlevel;    
}