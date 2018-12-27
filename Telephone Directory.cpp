#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class telephone
{
   char name[15];
   long number;
   public :
     void getdata();
     void display();
     long rno()
      { return number; }
     char* rname()
      { return name; }
};
void telephone :: getdata()
{
  cout<<"Enter the name : ";
  cin.ignore();
  cin.getline(name,15);
  cout<<"Enter the number : ";
  cin>>number;
}
void telephone :: display()
{
  cout<<"1. Name   : "<<name<<endl;
  cout<<"2. Number : "<<number<<endl;
}
void write_to_file()
{
  char ch='n';
  telephone p;
  ofstream fout;
  fout.open("tele.txt",ios::app);
  do
    {
      p.getdata();
      fout.write((char *)&p,sizeof(p));
      cout<<"Any more numbers(y/n) : ";
      cin>>ch; 
    }while(ch=='y');
  fout.close();
}
void search_number()
{
  telephone p;
  int flag=0;
  long no;
  cout<<"Enter phone number to search : ";
  cin>>no;
  ifstream fin;
  fin.open("tele.txt");
  while(fin.read((char *)&p,sizeof(p)))
    {	
      if(no==p.rno())
        {
          cout<<"Details : \n";	
          p.display();
          flag=1;
          break;
        }
    }
   if(flag==0)
      cout<<"Number does not exist.";
 fin.close(); 
}
void search_name()
{
  telephone p;
  int flag=0;
  char tname[15];
  cout<<"Enter the name to search : ";
  cin.ignore();
  cin.getline(tname,15);
  ifstream fin;
  fin.open("tele.txt");
  while(fin.read((char *)&p,sizeof(p)))
    {	
      if(!strcmp(tname,p.rname()))
        {
          cout<<"Details : \n";	
          p.display();
          flag=1;
          break;
        }
    }
   if(flag==0)
      cout<<"Record does not exist.";
 fin.close(); 
}
void display_record()
{
  int count=1;
  telephone p;
  ifstream fin;
  fin.open("tele.txt");
  if(!fin)
     cout<<"Error opening the file.";
  else
  {
   cout<<"-------Record file------------\n";
   while(fin.read((char *)&p,sizeof(p)))
    {		
        cout<<" Record "<<count<<" : \n";
        p.display();
        count++;
    }
  }
  fin.close(); 
}
int main()
{
  char c;
  int i,flag=0,ch;
  double n;
  ofstream fout;
  telephone p;
  do{
  cout<<"-----------MENU------------\n";
  cout<<"1 : Display all record.\n2 : Add a new number.\n3 : Search by name.\n4 : Search by number.\n-----------------------\n";
  cout<<"Enter your choice : ";
  cin>>ch;
  switch(ch)
   {
      case 1 : display_record();
               break;
      case 2 : write_to_file();
               break;
      case 3 : search_name();
               break;
      case 4 : search_number();
               break;
      default : cout<<"Wrong choice ! "; 
   }
   cout<<"Do you want to continue (y/n) : ";
   cin>>c;
  }while(c=='y');
  return 0;
}
