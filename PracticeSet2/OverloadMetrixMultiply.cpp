#include <iostream>
using namespace std;

class multiply
{
    int arr[3][3];

public:
    void input()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "Enter the Number for arr [" << i << "] [" << j << "] : ";
                cin >> arr[i][j];
            }
        }
    }

    multiply operator*(int num)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr[i][j] = arr[i][j] * num;
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int num;
    multiply a1, a2;
    a1.input();
    cout << "enter the number for multiply : ";
    cin >> num;
    a2 = a1 * num;
}