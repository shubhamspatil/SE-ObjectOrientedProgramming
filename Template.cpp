#include<iostream>
using namespace std;
template<class T>
class vector
{
   T a[5];
   public : 
     vector()
       {
         int i;
         for(i=0;i<5;i++)
            a[i]=0;
       }
     vector(T *z)
       {
         int i;
         for(i=0;i<5;i++)
            a[i]=z[i];
       }
     void display()
       {
          int i;
          cout<<"(";
          for(i=0;i<4;i++)
            {
              cout<<a[i]<<",";
            }
          cout<<a[i]<<")\n";
       }
     void multiply(int x)
       {
         int i;
          for(i=0;i<5;i++)
             a[i]=a[i]*x;  
       }
     void modify(T element,T val)
       {
         int i,flag=0;
         for(i=0;i<5;i++)
          {
             if(a[i]==element)
               {
                  a[i]=val;
                  flag=1;
                  break;
               }
          }
         if(flag==0)
           cout<<"Element not found.\n";
       }
};
int main()
{
  int v,ch,data1,ele1;
  float data2,ele2;
  int x[5]={10,20,30,40,50};
  float y[5]={1.1,2.2,3.3,4.4,5.5};
  vector <int>v1;
  vector <float>v2;
  v1=x;
  v2=y;
  cout<<"Vector 1 : ";
  v1.display();
  cout<<"Vector 2 : ";
  v2.display();
  cout<<"\n-----------MENU---------\n";
  cout<<"1 : Modify an element.\n2 : Multiply by a scalar.\n------------\n";
  cout<<"Enter vector number and your choice : ";
  cin>>v>>ch;
  switch(v)
   {
      case 1 : switch(ch)
                {
                  case 1 : cout<<"Enter the element to modify : ";
                           cin>>ele1;
                           cout<<"Modify it with : ";
                           cin>>data1;
                           v1.modify(ele1,data1);
                           cout<<"Modified vector : ";
                           v1.display();
                           break;
                  case 2 : cout<<"Enter the number to multiply with : ";
                           cin>>data1;
                           v1.multiply(data1);
                           cout<<"New vector : ";
                           v1.display();
                           break;
                  default : cout<<"Wrong choice!";
                }
               break;
      case 2 : switch(ch)
                {
                  case 1 : cout<<"Enter the element to modify : ";
                           cin>>ele2;
                           cout<<"Modify it with : ";
                           cin>>data2;
                           v2.modify(ele2,data2);
                           cout<<"Modified vector : ";
                           v2.display();
                           break;
                  case 2 : cout<<"Enter the number to multiply with : ";
                           cin>>data2;
                           v2.multiply(data2);
                           cout<<"New vector : ";
                           v2.display();
                           break;
                  default : cout<<"Wrong choice !";
                }
               break;
      default : cout<<"Wrong choice !";
   } 
  return 0;
}

