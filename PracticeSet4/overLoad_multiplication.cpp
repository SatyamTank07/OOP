#include <iostream>
using namespace std;

class metrix
{
    int arr[3][3];

public:
    metrix()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    void display(){
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << "  ";
            }
            cout << endl;
        }
    }
    void operator *(int k){
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr[i][j] = arr[i][j]*k;
            }
        }
    }
};
int main()
{
    metrix obj;
    obj.display();
    obj*6;
    obj.display();
    return 0;
}