#include <iostream>
#include <string>
using namespace std;

class Faculty {
protected:
    string name;
    string qualification;
    string subjects;

public:
    Faculty(const string& name, const string& qualification, const string& subjects)
        : name(name), qualification(qualification), subjects(subjects) {}

    virtual void display_info() const {
        cout << "Name: " << name << endl;
        cout << "Qualification: " << qualification << endl;
        cout << "Subjects: " << subjects << endl;
    }

    virtual void read_data() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Qualification: ";
        cin >> qualification;
        cout << "Enter Subjects (comma-separated): ";
        cin.ignore(); // Ignore newline left in the buffer
        getline(cin, subjects);
    }
};

class RegularFaculty : public Faculty {
public:
    RegularFaculty(const string& name, const string& qualification, const string& subjects)
        : Faculty(name, qualification, subjects) {}

    void display_info() const override {
        Faculty::display_info();
        cout << "Type: Regular Faculty" << endl;
        cout << "Availability: Full Time" << endl;
        cout << "Institute: Alone" << endl;
    }
};

class VisitingFaculty : public Faculty {
protected:
    string availability;
    string institute;

public:
    VisitingFaculty(const string& name, const string& qualification, const string& subjects,
                    const string& availability, const string& institute)
        : Faculty(name, qualification, subjects), availability(availability), institute(institute) {}

    void display_info() const override {
        Faculty::display_info();
        cout << "Type: Visiting Faculty" << endl;
        cout << "Availability: " << availability << endl;
        cout << "Institute: " << institute << endl;
    }

    void read_data() override {
        Faculty::read_data();
        cout << "Enter Availability: ";
        cin >> availability;
        cout << "Enter Institute: ";
        cin >> institute;
    }
};

int main() {
    // Regular Faculty
    RegularFaculty regular_faculty("", "", "");
    regular_faculty.read_data();

    // Visiting Faculty
    VisitingFaculty visiting_faculty("", "", "", "", "");
    visiting_faculty.read_data();

    // Display information
    cout << "\nRegular Faculty Information:" << endl;
    regular_faculty.display_info();

    cout << "\nVisiting Faculty Information:" << endl;
    visiting_faculty.display_info();

    return 0;
}
