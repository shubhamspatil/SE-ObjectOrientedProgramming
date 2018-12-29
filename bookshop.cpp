#include<iostream>
#include<cstring>
using namespace std;

class bookshop
{
		char *name,*author,*publisher;
		int stock,price;
	public:
		bookshop();
		void create_database();
		void display();
		void search( bookshop *b[] ,int );
		
};

bookshop::bookshop()
{
	name=new char[20];
	author=new char[20];
	publisher=new char[20];
	stock=0;
	price=0;
}

void bookshop::create_database()
{
	cin.ignore();
	cout<<"Enter title"<<endl;
	cin.getline(name,20);
	cout<<"Enter author name"<<endl;
	cin.getline(author,20);
	cout<<"Enter name of publisher"<<endl;
	cin.getline(publisher,20);
	cout<<"Enter the price of book"<<endl;
	cin>>price;
	cout<<"Enter the available stock"<<endl;
	cin>>stock;
	cout<<endl<<endl;
}

void bookshop::search( bookshop  *b[100],int n )
{
	bookshop b1;
	cout<<"Enter title of book: ";
	cin>>b1.name;
	cout<<"Enter author name: ";
	cin>>b1.author;
	for(int i=0;i<n;i++)
	{
		int x;
		if( strcmp(name,b1.name) && strcmp( author, b1.author) )
		{	
			cout<<"Book is available"<<endl;
			cout<<"Enter the no. of books you want to buy"<<endl;
			cin>>x;
			if(x<(b[i]->stock))
			{
				cout<<"Book bought successfuly"<<endl;
				cout<<"Total price: "<<(x*(b[i]->price))<<endl;
				stock-=x;
				break;
			}
			else
				cout<<"Entered no. of books is unavailable"<<endl;
		}
		else
			cout<<"Book is unavailable"<<endl;
		
	}
	
}


void bookshop::display()
{
	cout<<"Title: "<<name<<endl;
	cout<<"Author name: "<<author<<endl;
	cout<<"Publisher: "<<publisher<<endl;
	cout<<"Price is: "<<price<<endl;
	cout<<"Available stock is: "<<stock<<endl;
}
int main()
{
	int n;
	bookshop *b[100],a;
	cout<<"Enter the no. of books"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		b[i]=new bookshop;
	}
	
	for(int i=0;i<n;i++)
	{
		b[i]->create_database();
	}
	
	a.search(b,n);

	return 0;
}
