#include<iostream>  // stati function within class
using namespace std;
class ind
{
  
	static int b;

int a;
public:
fun()
{
	a=10;
	cout<<a<<" "<<b<<endl;
	a++;
	b++;
}
static fun1(int n)
{
	cout<<" value of b default assigned"<<b;
b=n;
cout<<" value of b"<<b;
}

	};
	int ind::b;
	
int main()
{
	//ind a1,a2,a3;
	ind::fun1(99);

//a1.fun();
//a2.fun();

//a3.fun();
}

