#include <iostream>
using namespace std;
template <typename t>
void swap_function(t a,t b){
    cout <<endl << "Before Swap : "<< a  << "  " << b;
    t temp;
    temp = a;
    a = b;
    b = temp;
    cout <<endl << "After Swap : "<< a  << "  " << b;
}
int main(){
    swap_function<int>(10,20);
    swap_function<char>('a','b');
    swap_function<float>(10.02,20.08);
}