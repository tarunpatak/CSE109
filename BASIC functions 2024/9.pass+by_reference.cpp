//9 PASS BY REFERENCE EXAMPLE FOR SWAPPING

#include<iostream>
using namespace std;
main()
{
      int a,b;
      void swap(int &,int &);
      cout<<"enter two numbers=";
      cin>>a>>b;
      cout<<"\n before calling(in main) a="<<a<<"b ="<<b<<"\n";
      swap(a,b);
      cout<<"\n after calling (in main) a="<<a<<"b ="<<b <<"\n";
            }
      void swap( int &x,int &y)
      {
           int z;
           z=x;
           x=y;
           y=z;
           cout<<"after modification (in function) x="<<x<<"y ="<<y<<"\n";
           }
