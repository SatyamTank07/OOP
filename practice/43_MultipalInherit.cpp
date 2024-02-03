#include <iostream>
using namespace std;

class A{
    public:
        int math;
        int chemitry;
        A(){
            chemitry = 65;
        }
};

class B {
    public:
        int bio;
        int chemitry;
        B(){
            chemitry=66;
        }
};

class C : public A,public B {
    public:
        int physics;
        C(){
            physics=67;
        }
};

int main(){
    C obj;
    // cout << " " << obj.physics << " " << obj.bio << " " << obj.math;  
    cout << " " << obj.physics << " " << obj.B::chemitry ;  
}