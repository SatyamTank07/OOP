#include<iostream>
#include<string>

//student-mca,non mca,local,non-local
//localmca, non-local mca

using namespace std;

class student
{
	string	sid;
	string name;
	
	
	public:
		student(string id,string nm):sid(id),name(nm)
		{
			cout<<"student created with param const"<<endl;
		}
		student()
		{
			cout<<"Student Created with Normal Const"<<endl;
		}
		
		virtual void a()=0;
		
		virtual void input()
		{
			cout<<"Enter id, name:";
			cin>>sid;
			cin>>name;
		}
		virtual void display()
		{
			cout<<"----------------------"<<endl;
			cout<<"ID:"<<sid<<endl<<"Name:"<<name<<endl<<endl;
		}
		virtual ~student()
		{
			cout<<"Student Destroyed"<<endl;
		}
};


class mca : public student
{
	int sem;
	string ac_year;
	string course;
	
	public:
		mca()
		{
			cout<<"MCA Student Created"<<endl;
			course="MCA";
		}
		
		
		virtual void input()
		{
			student::input();
			cout<<"Enter Sem: & year";
			cin>>sem>>ac_year;
		}
		virtual void display()
		{
			student::display();
			cout<<"Sem:"<<sem<<endl<<"Year:"<<ac_year<<endl;
			cout<<"Course"<<course<<endl;
		}
		virtual void a()
		{
			cout<<0;
		}
		virtual ~mca()
		{
			cout<<"MCA Student Destroyed"<<endl;
		}
};

class nonmca : virtual public student
{
	int sem;
	string ac_year;
	string course;
	public:
		nonmca()
		{
			cout<<"nonMCA Student Created"<<endl;
		}
		
		virtual void input()
		{
			student::input();
			cout<<"Enter Sem: & year & course";
			cin>>sem>>ac_year>>course;
		}
		virtual void display()
		{
			student::display();
			cout<<"Sem:"<<sem<<endl<<"Year:"<<ac_year<<endl<<"Course:"<<course<<endl;
		}
		virtual void a()
		{
			cout<<0;
		}
		virtual ~nonmca()
		{
			cout<<"nonMCA Student Destroyed"<<endl;
		}
};

class nonlocal :virtual public student
{
	string city;
	public:
		nonlocal()
		{
			cout<<"nonlocal Student Created"<<endl;
		}
		
		virtual void input()
		{
			student::input();
			cout<<"Enter city:";
			cin>>city;
		}
		virtual void display()
		{
			cout<<"City:"<<city<<endl;
		}
		virtual void a()
		{
			cout<<0;
		}
		virtual ~nonlocal()
		{
			cout<<"nonLocal Student Destroyed"<<endl;
		}
};

class local : virtual public student
{
	string city;
	public:
		local()
		{
			cout<<"local Student Created"<<endl;
			city="Ahmedabad";
		}
		
		virtual void input()
		{
			student::input();
		}
		virtual void display()
		{
			cout<<"City:"<<city<<endl;
		}
		virtual void a()
		{
			cout<<0;
		}
		virtual ~local()
		{
			cout<<"Local Student Destroyed"<<endl;
		}
};

class localmca:virtual public mca,virtual public local
{
	bool original_amd;
	
	public:
		localmca()
		{
			cout<<"LOcal Mca Created"<<endl;
		}
		virtual void input()
		{
			mca::input();
			cout<<"Original Ahmedabadi ?";
			cin>>original_amd;
		}
		//virtual void display()
		// {
		// 	mca::display();
        //     local::display();
		// 	cout<<"Original Ahmedabadi: "<<original_amd<<endl;
		// }
		virtual void a()
		{
			cout<<0;
		}
					
};

int main()
{
	student* ptr;
	
	ptr = new localmca;
	ptr->input();
	ptr->display();
	delete ptr;
}