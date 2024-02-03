#include <iostream>
using namespace std;

// static memori allocation
class human{
private :
    int weight;

public:
    int assignValue(int w){
        weight = w;
        return weight;
    }
    
    // int deraiveValue(){
    //     return weight; 
    // }
    
};

int main(){
    human ramesh;
    
    // ramesh.assignValue(75);
    cout << "ramesh weight is : " << ramesh.assignValue(87);

    return 0;
}