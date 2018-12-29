#include<iostream>
using namespace std;

class personal
{
	protected:
		char name[20], address[50];
		int  age;
		long telephone;
	public:
		void accept();
		void display();
};

class academic
{
	protected:
		char qualification[10];
		float percentage;
	public:
		void accept();
		void display();
};

class professional: public personal,public academic
{
		int salary, experience;
		char position[10];
	public:
		void accept();
		void display();
};

void personal::accept()
{
	cout<<"Enter employee name"<<endl<<endl;
	cin>>name;
	cout<<"Enter contact no. "<<endl<<endl;
	cin>>telephone;
	cout<<"Enter address of residence"<<endl<<endl;
	cin>>address;
	cout<<"Enter age of employee."<<endl<<endl;
	cin>>age;
}

void personal::display()
{
	cout<<"Employee name: "<<name<<endl<<endl;
	cout<<"Contact no. : "<<telephone<<endl;
	cout<<"Age: "<<age<<endl<<endl;
	cout<<"Address: "<<address<<endl<<endl;
}

void academic::accept()
{
	cout<<"Enter qualification of employee."<<endl<<endl;
	cin>>qualification;
	cout<<"Enter percentage scored in last examination."<<endl<<endl;
	cin>>percentage;
}

void academic::display()
{
	cout<<"Qualification of Employee: "<<qualification<<endl<<endl;
	cout<<"Percentage scored in last exam: "<<endl<<endl;
}

void professional::accept()
{
	personal::accept();
	academic::accept();
	cout<<"Enter position of employee"<<endl<<endl;
	cin>>position;
	cout<<"Enter salary of employe."<<endl<<endl;
	cin>>salary;
	cout<<"Enter total experience of employee."<<endl<<endl;
	cin>>experience;
}

void professional::display()
{
	personal::display();
	academic::display();
	cout<<"Position of employee: "<<position<<endl<<endl;
	cout<<"Salary of employee: "<<salary<<endl<<endl;
	cout<<"Total experience of employee: "<<experience<<endl<<endl;
}

int main()
{
	professional p;
	p.accept();
	p.display();
	return 0;
}








