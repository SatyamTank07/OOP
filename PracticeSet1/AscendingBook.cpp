#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Book {
public:
    string title;
    string author;
    double price;

    void input() {
        cout << "Enter the title: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter the author: ";
        getline(cin, author);

        cout << "Enter the price: ₹";
        cin >> price;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: ₹" << price << endl;
    }
};

bool comparePrice(const Book &a, const Book &b) {
    return a.price < b.price;
}

int main() {
    Book books[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter details for Book " << i + 1 << endl;
        books[i].input();
    }

    
    sort(books, books + 10, comparePrice);

    cout << "Book Details in Ascending Order of Price:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Book " << i + 1 << ":\n";
        books[i].display();
        cout << endl;
    }

    return 0;
}
