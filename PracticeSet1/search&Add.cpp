#include <iostream>
using namespace std;

class Search {
private:
    int a[100]; 
    int x;      

    int n;      

public:
    void input() {
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << "Enter the value to search or add: ";
        cin >> x;
    }

    void output() {
        cout << "Array elements: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    void search(int position) {
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                position = i;
                cout << x << " found at position " << position << endl;
                return; 
            }
        }
        cout << x << " not found in the array. we will add" << endl;
        add(x);
    }

    void add(int value) {
        if (n < 100) { 
            a[n] = value;
            n++; 
            cout << value << " added to the array." << endl;
        } else {
            cout << "Array is full. Cannot add more elements." << endl;
        }
    }
};

int main() {
    Search obj;
    int position = -1; 

    obj.input();
    obj.output();
    obj.search(position);
    
    obj.output();

    return 0;
}
