#include<iostream>
using namespace std;

// function overload
class math{
    public:
        int sum(int a,int b){
            cout << "I am in 1 : ans : ";
            return a+b;
        }
        int sum(int a,int b,int c){
            cout << "I am in 2 : ans : ";
            return a+b+c;
        }
        float sum(int a,float b){
            cout << "I am in 3 : ans : ";
            return a+b;
        }
        // double sum(int a,int b){
        //     cout << "I am in 4" << endl;
        //     return a+b;
        // }
        //ny chale
};
int main(){
    math obj;
    cout << obj.sum(5,10) << endl;
    cout << obj.sum(5,10.5f) << endl;
    cout << obj.sum(5,10,15) << endl;

    
}