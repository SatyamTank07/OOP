#include<iostream>

using namespace std;

void func(int** temp, int* n)
{
    //temp = &ptr1
    //n = &data
    *temp = n;
    //cout<<temp<<endl;

}
int main()
{
    int data = 5; //data type of data=int
    int data1 = 6; //data type of data=int
    int* ptr1=NULL; //data type of ptr1 =int*

    
    cout<<ptr1<<": Add at ptr1"<<endl;


    cout<<&data1<<": Add of data1 in Main"<<endl; //this gives address of data
    cout<<ptr1<<": Address of data by ptr1"<<endl; //this gives address of data

    ptr1 =&data1;  //ptr1's address(&ptr1) stores data1's address(&data1)
    func(&ptr1,&data);
    //ptr1=&data;   //ptr1's address(&ptr1) stores data's address(&data)

    
    cout<<&ptr1<<": Address of PTR1"<<endl; //this gives address of ptr1
    cout<<*ptr1<<": value stored in data by ptr1"<<endl; //value stored in int data1
    cout<<* & *  &data1  <<": value stored in data by *, &"<<endl; //value stored in int data

}