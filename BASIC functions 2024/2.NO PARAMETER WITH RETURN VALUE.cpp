//  2 NO PARAMETER WITH RETURN VALUE
#include<iostream>
using namespace std;
int main()
{						
//int a=10,b=20;
int sum();	//function declaration
int c=sum();	 //actual arguments
cout<<"sum is "<<c;		
}
int sum()		//formal arguments
{
int x=10,y= 30;
return(x+y);         //*return value
}


