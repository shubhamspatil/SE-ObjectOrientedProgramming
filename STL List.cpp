#include<iostream>
#include<list>
using namespace std;
class sll
{
   list<int> l;
   list<int> :: iterator itr;
   public : 
     void display();
     void add_start();
     void add_end();
     void add_bet();
     void remove_start();
     void remove_end();
     void remove_bet();
     void merge_list(sll l1);
     void sorting();
};
void sll :: display()
{
  for(itr=l.begin();itr!=l.end();itr++)
     cout<<*itr<<" ";
  cout<<endl;
}
void sll :: add_start()
{
  int num;
  cout<<"Enter the element to add : ";
  cin>>num;
  l.push_front(num);  
}
void sll :: add_end()
{
  int num;
  cout<<"Enter the element to add : ";
  cin>>num;
  l.push_back(num);  
}
void sll :: add_bet()
{
  int num,pos,i;
  itr=l.begin();
  cout<<"Enter the position to add element : ";
  cin>>pos;
  for(i=0;i<pos;i++)
  itr++;
  cout<<"Enter the element to add : ";
  cin>>num;
  l.insert(itr,num);  
}
void sll :: remove_end()
{
  int num;
  itr=l.end();
  itr--;
  num=*itr;
  l.pop_back();
  cout<<"Element popped out is : "<<num<<endl;
}
void sll :: remove_start()
{
  int num;
  itr=l.begin();
  num=*itr;
  l.pop_front();
  cout<<"Element popped out is : "<<num<<endl;
}
void sll :: remove_bet()
{
  int num,pos,i;
  itr=l.begin();
  cout<<"Enter position to remove data : ";
  cin>>pos;
  for(i=0;i<pos;i++)
    itr++;
  num=*itr;
  l.erase(itr);
  cout<<"Element popped out is : "<<num<<endl;
}
void sll :: merge_list(sll l1)
{
  l.merge(l1.l);
  cout<<"Merged list : ";
  display();
}
void sll :: sorting()
{
  cout<<"Sorted linked list : ";
  l.sort();
  display();
}
int main()
{
  sll s,s2,s3;
  char c,c1;
  int ch;
  cout<<"For first linked list : \n";
  do
   {
     s.add_end();
     cout<<"Any more elements (y/n) : ";
     cin>>c;
   }while(c=='y');
  cout<<"List : ";
  s.display();
  do
   {
     cout<<"--------MENU---------\n";
     cout<<"1 : Add element at start.\n2 : Add element in between.\n3 : Add element in end.\n4 : Delete from start.\n5 : Delete in between.\n6 : Delete from end.\n7 : Merge two list.\n8 : Sort list.\n---------------\n";
     cout<<"Enter your choice : ";
     cin>>ch;
   switch(ch)
       {
	 case 1 : s.add_start();
                  cout<<"List : ";
                  s.display();
                  break;
         case 2 : s.add_bet();
                  cout<<"List : ";
                  s.display();
                  break;
         case 3 : s.add_end();
                  cout<<"List : ";
                  s.display();
                  break;
         case 4 : s.remove_start();
                  cout<<"List : ";
                  s.display();
                  break;
         case 5 : s.remove_bet();
                  cout<<"List : ";
                  s.display();
                  break;
         case 6 : s.remove_end();
                  cout<<"List : ";
                  s.display();
                  break;
         case 7 : do
                   {
                     s2.add_end();
                     cout<<"Any more elements (y/n) : ";
                     cin>>c1;
                   }while(c1=='y');
                  cout<<"Second List : ";
                  s2.display();
                  s.merge_list(s2);
                  break;
         case 8 : s.sorting();
                  break;
         default : cout<<"Wrong choice ! ";
       }
     cout<<"Do you want to continue(y/n) : ";
     cin>>c;
   }while(c=='y');
   return 0;
}
