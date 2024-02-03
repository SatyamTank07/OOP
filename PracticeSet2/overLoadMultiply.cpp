#include<iostream>
using namespace std;

class multiply{
    int arr[10];
    public:
    void input(){
        for(int i=0; i<10; i++){
            cout << "Enter the Number Index("<<i+1<<") : ";
            cin >> arr[i];
        }
    }

    multiply operator * (int num){
        for(int i=0; i<10; i++){
            arr[i] = arr[i] * num;
            cout <<"Multiply Number  is Index("<<i+1<<") : " << arr[i] << endl;
        }
    }
};

int main(){
    int num;
    multiply a1,a2;
    a1.input();
    cout << "enter the number for multiply : ";
    cin >> num;
    a2 = a1 * num;
}
