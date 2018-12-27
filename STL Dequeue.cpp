#include<iostream>
#include<list>
using namespace std;
class dqueue
{
   list<int> l;
   list<int> :: iterator itr;
   public : 
     void display();
     void add_at_beg();
     void add_at_end();
     void remove_start();
     void remove_end();
};
void dqueue :: display()
{
  for(itr=l.begin();itr!=l.end();itr++)
     cout<<*itr<<" ";
  cout<<endl;
}
void dqueue :: add_at_end()
{
  int num;
  cout<<"Enter the element to add : ";
  cin>>num;
  l.push_back(num);  
}
void dqueue :: add_at_beg()
{
  int num;
  cout<<"Enter the element to add : ";
  cin>>num;
  l.push_front(num);  
}
void dqueue :: remove_start()
{
  int num;
  itr=l.begin();
  num=*itr;
  l.pop_front();
  cout<<"Element popped out is : "<<num<<endl;
}
void dqueue :: remove_end()
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
  dqueue q;
  char c,c1;
  int ch;
  cout<<"For dqueue : \n";
  do
   {
     q.add_at_end();
     cout<<"Any more elements (y/n) : ";
     cin>>c;
   }while(c=='y');
  cout<<"Dqueue : "; 
  q.display();
  do
   {
     cout<<"--------MENU---------\n";
     cout<<"1 : Add element from start.\n2 : Add element from end.\n3 : Delete element from start.\n4 : Delete element from end.\n---------------\n";
     cout<<"Enter your choice : ";
     cin>>ch;
     switch(ch)
       {
	 case 1 : q.add_at_beg();
                  cout<<"Queue : ";
                  q.display();
                  break;
         case 2 : q.add_at_end();
                  cout<<"Queue : ";
                  q.display();
                  break;
         case 3 : q.remove_start();
                  cout<<"Queue : ";
                  q.display();
                  break;
         case 4 : q.remove_end();
                  cout<<"Queue : ";
                  q.display();
                  break;
         default : cout<<"Wrong choice ! ";
       }
     cout<<"Do you want to continue(y/n) : ";
     cin>>c;
   }while(c=='y');
   return 0;
}


