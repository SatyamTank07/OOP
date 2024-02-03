#include <iostream>
using namespace std;

class car{
    public:
        string name;
        int age;
        int weight;

        void speedup(){
            cout << "Speed is fast.";
        }

        void breakmaro(){
            cout << "Break mar di";
        }
};

class scorpio : public car {

};

int main(){
    scorpio s1;
    s1.speedup();
}