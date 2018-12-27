#include<iostream>
#include<list>
using namespace std;
class queue
{
   list<int> l;
   list<int> :: iterator itr;
   public : 
     void display();
     void add();
     void remove();
};
void queue :: display()
{
  for(itr=l.begin();itr!=l.end();itr++)
     cout<<*itr<<" ";
  cout<<endl;
}
void queue :: add()
{
  int num;
  cout<<"Enter the element to add : ";
  cin>>num;
  l.push_back(num);  
}
void queue :: remove()
{
  int num;
  itr=l.begin();
  num=*itr;
  l.pop_front();
  cout<<"Element popped out is : "<<num<<endl;
}
int main()
{
  queue q;
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
                     q.add();
                     cout<<"Any more elements (y/n) : ";
                     cin>>c1;
                   }while(c1=='y');
                  cout<<"Queue : ";
                  q.display();
                  break;
         case 2 : q.remove();
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


