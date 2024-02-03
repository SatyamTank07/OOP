#include <string>
#include <iostream>
using namespace std;

class animal{
    int weight;
    public:
        int age;
        string type;
        
        void eating(){
            cout << "eating";
        }

        //this keyword
        void set_weight(int weight){
            // (*this).weight = weight;
            this->weight = weight;
        }

        // default constuctor
        animal(){
            this->age = 0;
            this->type = "";
            cout << "constuctor Call " << endl;
        }

        // parameterized constructor
        animal(int age){
            this->age = age;
            cout << "parameterized constuctor Call " << endl;
        }

        //copy constuctor
        animal(animal& obj){
            this->age = obj.age;
            this->type = obj.weight;
            cout << "I am in copy constuctor" << endl;
        }

        //destructor
        ~animal(){
            cout << "i am destructor" << endl;
        }

};

int main(){
    // animal* dog = new animal;
    // animal billi;
    // (*dog).age = 17;
    // (*dog).type="kutta  ";

    // dog->age = 18;
    // dog->type="kutti  ";
    // dog->eating();

    // dog->set_weight(20);

    // -------------------------------------------------------
    //default constructor call
    animal* dog = new animal();
    animal billi;

    //parameterrized constructor call
    animal* dog1 = new animal(15);
    animal billi1(15);

    //object copy
    animal a = billi1;
    animal animal1(a);
    animal b = (*dog);

    //destructor call for dynamic memory
    delete dog;
    delete dog1;
    
    return 0;
}