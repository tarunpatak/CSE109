// 12 function overloading WAP TO FIND SUM OF NUMBERS USING  FUNCTION OVERLOADING
#include<iostream>
using namespace std;
void sum(int,int);
void sum(double,double);
void sum(char,char);
main()
{
      int a=10,b=20;
      double c=7.52;
	  double d=8.14;
      char e='A';
	  char f='B';
      sum(a,b);
      sum(c,d);
      sum(e,f);                }
      void sum(int x,int y)
      {            cout<<" sum of two integers is ="<<x+y;             }
           void sum(double x,double y)
           {                 cout<<"sum of double numbers is ="<<x+y;                  }
                void sum (char x,char y)
                {    cout<<"sum of two characters is= "<<x+y;
                     }
                     
