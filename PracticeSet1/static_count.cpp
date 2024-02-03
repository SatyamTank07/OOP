// #include<iostream>

// using namespace std;
// class count{
//     static int number;
//     public:
//     count(int number){
//         this->number = number;
//     }
//     void counti(){
//         number += 5;
//         cout << number;  
//     }
// };
// int main(){
//     count num;
//     num.counti(); 
//     return 0;
// }

#include <iostream>
using namespace std;
class Counter {
public:
    static int count; 

    Counter() {
        count++; 
    }
};

int Counter::count = 0; 

int main() {
    for (int i = 0; i < 50; i++) {
        Counter obj; 
    }

    
    cout << "Number of instances created: " << Counter::count << endl;

    return 0;
}
