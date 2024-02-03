#include <iostream>
using namespace std;

class car{
    public:
        string name;
        int age;
        int weight;

        void speedup(){
            cout << "Speed fast kar di." << endl;
        }

        void breakmaro(){
            cout << "Break mar di" << endl;
        }
};

class scorpio : public car {

};
class fortuner : public car {

};
int main(){
    scorpio s1;
    fortuner f1;
    f1.breakmaro();
    s1.speedup();
}