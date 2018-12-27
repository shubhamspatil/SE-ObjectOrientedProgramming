#include<iostream>
using namespace std;
class calculator
{
  float num1,num2,ans;
  char op;
  public :
   void getdata();
   void cal();
   void display();
};
void calculator :: getdata()
{
  cout<<"Enter the operant and operation :";
  cin>>num1>>op>>num2;
}
void calculator :: display()
{
  cout<<"Your result is : "<<num1<<" "<<op<<" "<<num2<<" = "<<ans<<endl;
}
void calculator :: cal()
{
  switch(op)
    {
      case '+' : ans=num1+num2;
                 display(); 
                 break;
      case '-' : ans=num1-num2;
                 display(); 
                 break;
      case '*' : ans=num1*num2;
                 display(); 
                 break;
      case '/' : if(num2 != 0)
                  {
                   ans=num1/num2;
                   display(); 
                  }
                 else
                   cout<<"Denominator cant be zero for division !\n";
                 break;
      default : cout<<"Wrong opeator";
                break;                                                 
    }
}
int main()
{
  char ch;
  calculator c;
  do
  {
    c.getdata();
    c.cal();
    cout<<"Do you want to conitnue(y/n):";
    cin>>ch;
  }
  while(ch=='y'); 
  return 0;
}
