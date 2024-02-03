#include<iostream>
using namespace std;

class useStatic{
    static int count;
    public:
        void input(int n){
            int a;
            for(int i=0;i<n;i++){
                cin >> a;
                count++;
            }
            cout << "Number of count " << count;
        }
};

int useStatic :: count = 0;
int main(){
    useStatic obj;
    obj.input(5);
}