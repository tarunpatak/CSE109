// 7 pass by address
#include<iostream>
using namespace std;
main()
{
	void swap(int *,int*);
	int x,y;
	cout<<"Enter two num";
	cin>>x>>y; 
	cout<<"before Swapping"<<x<<endl<<y;
	swap(&x,&y);
	cout<<"After Swapping in main"<<x<< endl<<y;
	}
void swap (int *a, int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	cout<<"After Swapping in function"<<*a<<endl<<*b;
}

