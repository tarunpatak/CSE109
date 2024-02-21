// 10 awap by address using class
#include<iostream>
using namespace std;
class fp
{
//int x,y;
public:
/* void getdata()
	{
	cout<< "enter two numbers ";
cin>>x>>y;
} */
	void swaap(int *x,int *y ) 
      {
          int z;
           z=*x;
           *x=*y;
           *y=z;
           cout<<"after modification (in function) x="<<*x<<"\ty = "<<*y<<"\n";
           }
		   };
main()
{
	int x=2;
	int y=5;
    fp f;     
   f.swaap(&x,&y);
     	   };
    
