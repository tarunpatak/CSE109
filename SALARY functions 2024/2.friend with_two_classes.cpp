
//FRIEND FUNCTION with two classes //2
#include<iostream>   
#include<conio.h>
using namespace std;
class class2;   // forward  reference 
class class1
{
private:
        int length, breadth;
public:
       void get ()
       {
cout<<"enter length"<<endl;
cin>>length;
cout<<" enter breadth"<<endl;
 cin>>breadth;
       }
	    friend void volume(class1, class2) ;   // Making function volume friend of class1  
};        // END OF CLASS1

class class2
{
	private:
 int height;
public:
 void get()
	{
	cout<<" enter height  "<<endl;
	cin>>height;
}

friend void volume(class1,class2) ;  // Making function volume friend of class2
}; // END OF CLASS2

void  volume(class1 x, class2 y)  // friend function definition .It is outside both the classes.
       {
            int v ;
            v= x.length * x.breadth * y.height; 
            cout<<v;
	   }      
	   
int main()
{
class1 obj1; // creating object of class1
class2 obj2; // creating object of class2

obj1.get();  // intializing values of class1 
obj2.get();  //intializing values of class2
volume(obj1,obj2);  // calling the function and passing two objects of two different classes.
}

