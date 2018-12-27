#include<iostream>
using namespace std;
template<class T>
class select_sort
{
   T a[5];
   public :
     void getdata()
     {
       int i;
         cout<<"Enter five numbers : ";
         for(i=0;i<5;i++)
          {
            cin>>a[i];
          }
     }
     void display()
      { 
        int i;
        for(i=0;i<5;i++)
         {
           cout<<a[i]<<"  ";
         }
      }
     void sort()
       {
          T temp;
          int i,j;
          for(i=0;i<5;i++)
            {
              for(j=0;j<5;j++)
                {
                   if(a[i]<a[j])
                     {
                       temp=a[i];
                       a[i]=a[j];
                       a[j]=temp;
                     }
                }
            }
       }
};
int main()
{
  int ch;
  cout<<"------MENU-----\n";
  cout<<"1 : Input interger number.\n2 : Input floating number.\n--------------\n";
  cout<<"Enter your choice : ";
  cin>>ch;
  switch(ch)
    {
      case 1 : select_sort <int>s1;
               s1.getdata();
               cout<<"Entered numbers : ";
               s1.display();
               s1.sort();
               cout<<"Sorted list : ";
               s1.display();
               break;
       case 2 : select_sort <float>s2;
               s2.getdata();
               cout<<"Entered numbers : ";
               s2.display();
               s2.sort();
               cout<<"\nSorted list : ";
               s2.display();
               break;   
       default : cout<<"Wrong choice.";       
    }
  return 0;
}
