//WAP TO FIND AREA OF CIRCLE USING FUNCTION OVERLOADING
#include<iostream>
using namespace std;
#include<math.h>
void area(int a=10);
void area(int a,int b);
//void area(int a,int b,int c);
main()
{
      int side,le,br,a,b,c;
      cout<<"enter the side, \n length(le),breadth(br), a,b,c";
      cin>>side>>le>>br>>a>>b>>c;
      area();
area(le,br);
  //    area(a,b,c);
        return 0;
      }
      void area(int x)
      {
           cout<<"the area of square ="<<x*x<<"\n";
           }
           void area(int x,int y)
           {
                cout<<"area of rectangle"<<x*y<<"\n";
                }
      
