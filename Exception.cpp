#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class check
{
  int age;
  float income;
  string stay;
  char ch;
  public : 
    void getdata();
    void display();
};
void check :: getdata()
{
  cout<<"Enter your age : ";
  cin>>age;
  cout<<"Enter your income : ";
  cin>>income;
  cout<<"Enter your city name : ";
  cin>>stay;
  cout<<"Do you have four wheeler (y/n) : ";
  cin>>ch;
}
void check :: display()
{
  try
    {
      if(age<18 || age>55)
        throw age;
      else
        cout<<"Age : "<<age<<endl; 
    }
  catch(int x)
    {
      cout<<"Age between 18-55.\n";    
    }      
   try
    {     
      if(income<50000 || income>100000)
        throw income;
      else
        cout<<"Income : "<<income<<endl;
    }
  catch(float x)
    {
      cout<<"Income between 50,000 - 1,00,000.\n";    
    }      
    try
     {              
      if(stay=="pune" || stay=="mumbai" || stay=="bangalore" || stay=="chennai") 
          cout<<"Home : "<<stay<<endl;
      else
         throw stay;
      }
  catch(string x)
    {
      cout<<"Home should be Pune/ Mumbai/ Bangalore / Chennai.\n";    
    }          
    try
     {              
      if(ch=='n')
        throw ch;
      else
        cout<<"4-wheeler : Yes \n";              
     }
  catch(char x)
    {
      cout<<"Must have has 4-wheeler.\n";
    }  
}
int main()
{
  check c;
  c.getdata();
  c.display();
  return 0;
}
