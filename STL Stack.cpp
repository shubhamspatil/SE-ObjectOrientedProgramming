#include<iostream>
#include<list>
using namespace std;
class stack
{
   list<int> l;
   list<int> :: iterator itr;
   public : 
     void display();
     void push();
     void pop();
};
void stack :: display()
{
  for(itr=l.begin();itr!=l.end();itr++)
     cout<<*itr<<" ";
  cout<<endl;
}
void stack :: push()
{
  int num;
  cout<<"Enter the element to add : ";
  cin>>num;
  l.push_back(num);  
}
void stack :: pop()
{
  int num;
  itr=l.end();
  itr--;
  num=*itr;
  l.pop_back();
  cout<<"Element popped out is : "<<num<<endl;
}
int main()
{
  stack s;
  char c,c1;
  int ch;
  do
   {
     cout<<"--------MENU---------\n";
     cout<<"1 : Add elements.\n2 : Delete element.\n---------------\n";
     cout<<"Enter your choice : ";
     cin>>ch;
     switch(ch)
       {
	 case 1 : do
                   {
                     s.push();
                     cout<<"Any more elements (y/n) : ";
                     cin>>c1;
                   }while(c1=='y');
                  cout<<"Stack : ";
                  s.display();
                  break;
         case 2 : s.pop();
                  cout<<"Stack : ";
                  s.display();
                  break;
         default : cout<<"Wrong choice ! ";
       }
     cout<<"Do you want to continue(y/n) : ";
     cin>>c;
   }while(c=='y');
   return 0;
}

