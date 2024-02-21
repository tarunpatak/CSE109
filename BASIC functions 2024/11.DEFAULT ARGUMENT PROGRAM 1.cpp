// 11 use of default to calculate the volume of box
#include<iostream>
using namespace std;
void volume(int x=2,int w=3,int y=4 ); //fun declaration
int main()
{
	//void volume(int x=2,int w=3,int y=4 );   //fun declaration
volume(); //equivalent to volume(2,3,4)
volume(5); //equivalent to volume(5,3,4
volume(8,6); //equivalent to volume(8,6,4)
volume(6,4,5);
return 0;
}
void volume(int l,int w,int h)
{
cout<<l<<" "<<w<<" "<<h<<endl;;
     int z;
   z=l*w*h;
 cout<<"volume is="<<z<<"\n";
     }
     
