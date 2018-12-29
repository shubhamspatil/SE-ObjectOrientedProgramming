#include<iostream>
#include<math.h>
using namespace std;

class quadratic
{
		int a,b,c;
	public:
		quadratic();
		quadratic(int,int,int);
		void accept();
		void display();
		quadratic& operator+(quadratic& );
		friend istream& operator>>(istream& , quadratic&);
		friend ostream& operator<<(ostream&, quadratic&);
		void add(quadratic,quadratic);
		void given();
		void compute();
};

quadratic::quadratic()
{
		a=0;
		b=0;
		c=0;
}

quadratic::quadratic(int x, int y, int z)
{
		a=x;
		b=y;
		c=z;
}

quadratic& quadratic::operator+(quadratic& q1)
{
	a=a+q1.a;
	b=b+q1.b;
	c=c+q1.c;
}
 istream& operator>>(istream& inp, quadratic& c)
 {
 		cout<<"Enter the values for a b c"<<endl;
 		inp>>c.a>>c.b>>c.c;
 }
 
 ostream& operator<<(ostream& out, quadratic& c)
 {
 		out<<c.a<<"x^2 +"<<c.b<<"x +"<<c.c<<"= 0"<<endl;
 }
 
void quadratic::accept()
{
		cout<<"Enter the values of a, b, c for a quadratic equation"<<endl;
		cin>>a>>b>>c;
}

void quadratic::display()
{
		cout<<"The quadratic equation is: "<<a<<"x^2"<<"+"<<b<<"x"<<"+"<<c<<"="<<"0"<<endl;
}

void quadratic::add(quadratic q1,quadratic q2)
{
		a=q1.a + q2.a;
		b=q1.b + q2.b;
		c=q1.c + q2.c;
}

void quadratic::given()
{		int x;
		cout<<"To find solution enter the values of a, b, c and x for a quadratic equation"<<endl;
		cin>>a>>b>>c>>x;
		
		int solution= a*x*x + b*x + c;
		
		cout<<"The solution of equation is: "<<solution<<endl;
}

void quadratic::compute()
{
		cout<<"To find value of x enter the values of a, b, c for a quadratic equation"<<endl;
		cin>>a>>b>>c;
		float z=((b*b) - (4*a*c));
		if(z>=0)
		{
			float i=sqrt(z);
			float l= (-b + i);	
			float n=l/2;
			float x=n/a;	
			cout<<"x is: "<<x<<endl;
		
			float m= (-b - z);	
			float j=m/2;
			float y=j/a;	
			cout<<"x = "<<y<<endl;
		}
		else
			cout<<"Roots are imaginary"<<endl;
}

int main()
{
		quadratic q1, q2,q3;
		cin>>q1;
		cin>>q2;
		q3=q1+q2;
		cout<<q3;
		return 0;
}


