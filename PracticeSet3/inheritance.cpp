#include <iostream>
#include <string>
#include <cctype>
#include<iomanip>

using namespace std;

class books {
protected:
    int id;
    string name;
    string genre;

public:
    books() {}
    books(int bid, const string& bname, const string& bgenre)
        : id(bid), name(bname), genre(bgenre) {}

    void displaydata() const {
        cout << endl;
        cout << "Id of book: "<< id << endl;
        cout << "Name is: " << name << endl;
        cout << "Genre is: " << genre << endl;
    }

    ~books() {
        // cout << "Destructure Call For Books class " << endl;
    }
};

class salse : public books {
protected:
    int salse_price;
    int qut_sold;

public:
    salse() {}
    salse(int ssalse_price, int ssqut_sold, int bid, const string& bname, const string& bgenre)
        : books(bid, bname, bgenre), salse_price(ssalse_price), qut_sold(ssqut_sold) {}

    int total_SaleF() const {
        return salse_price * qut_sold;
    }

    void s_displaydata() const {
        cout << "Salse price is: " << salse_price << endl;
        cout << "Quantity sold: " << qut_sold << endl;
        cout << "Total Sale is: " << total_SaleF() << endl;
    }

    ~salse() {
        // cout << "Destructure Call For Salse class " << endl;
    }
};

class academics : public books {
public:
    academics(int bid, const string& bname, const string& bgenre)
        : books(bid, bname, bgenre) {
        cout << "Constructor called for Academic class" << endl;
    }

    ~academics() {
        cout << "Destructor called for Academic class" << endl;
    }
};

class Thriller : public books {
public:
    Thriller(int bid, const string& bname, const string& bgenre)
        : books(bid, bname, bgenre) {
        cout << "Constructor called for Thriller class" << endl;
    }

    ~Thriller() {
        cout << "Destructor called for Thriller class" << endl;
    }
};

int main() {
    const int maxBooks = 10;
    books booklist[maxBooks];
    salse salselist[maxBooks];

    int numbook;

    cout << "Enter the number of books: " << endl;
    cin >> numbook;

    int programming = 0;
    int history = 0;
    int science = 0;
    int others = 0;

    for (int i = 0; i < numbook; i++) {
        int id;
        string name, genre;
        int price;
        int qut;

        cout << "Please enter details for the book" << endl;
        cout << endl;
        cout << "Enter book id : "; 
        cin >> id;
        cout << "Enter the name of the book : ";
        cin >> name;
        cout << "Enter the genre of the book : ";
        cin >> genre;
        cout << "Enter the price of the book : ";
        cin >> price;
        cout << "Enter the quantity of the book : ";
        cin >> qut;

        booklist[i] = books(id, name, genre);
        salselist[i] = salse(price, qut, id, name, genre);

        if (genre == "programming") {
            programming++;
        } else if (genre == "history") {
            history++;
        } else if (genre == "science") {
            science++;
        } else {
            others++;
        }
    }

    cout << "\nGenre Counts:\n";
    cout << "programming: " ;
    cout << programming << endl;
    cout << "history: " ;
    cout << history << endl;
    cout << "science Fiction: " << science << endl;
    cout << "others: " << others << endl;

    cout << "\nDisplaying Book Details:\n";
    for (int i = 0; i < numbook; ++i) {
        booklist[i].displaydata();
        salselist[i].s_displaydata();
    }

    return 0;
}
