#include<iostream>
using namespace std;


class complex
{
		int real,imaginary;
	public:
		complex();
		complex(int,int);
		complex& operator+(complex&);
		complex& operator*(complex&);
		friend istream& operator>>(istream& , complex& );
		friend ostream& operator<<(ostream& , complex& ) ;
		void add(complex, complex);
		void accept();
		void display();
		void multiply(complex, complex);	
};

complex::complex()
{
	real=0;
	imaginary=0;
}

complex::complex(int a, int b)
{
	real=a;
	imaginary=b;
}

complex& complex::operator+(complex &c)
{
	
	real=real+c.real;
	imaginary=imaginary+c.imaginary;
}

complex& complex::operator*(complex &c)
{
	
	real=real*c.real - imaginary*c.imaginary;
	imaginary=real *c.imaginary + imaginary*c.real;
}

istream& operator>>(istream& inp, complex &c)
{
	inp>>c.real>>c.imaginary;
}

ostream& operator<<(ostream& out, complex &c)
{
	out<<c.real<<" + "<<c.imaginary<<"i"<<endl;
}

void complex::accept()
{
	cout<<"Enter the real and imaginary part of a complex no."<<endl;
	cin>>real>>imaginary;
}

void complex::display()
{
	if(imaginary>0)
	cout<<"Complex no. is: "<<real<<"+"<<imaginary<<"i"<<endl;
	else 
	cout<<"Complex no. is: "<<real<<"-"<<imaginary<<"i"<<endl;
}

void complex::add(complex c1, complex c2)
{
	real=c1.real+c2.real;
	imaginary=c1.imaginary+c2.imaginary;
}

void complex::multiply(complex c1,complex c2)
{
	real=c1.real*c2.real - c1.imaginary*c2.imaginary;
	imaginary=c1.real *c2.imaginary + c1.imaginary*c2.real;
}

int main()
{
complex c1, c2, c3;
cin>>c1;
cin>>c2;
c3=c1+c2;
cout<<c3;
c3=c1*c2;
cout<<c3;
}
