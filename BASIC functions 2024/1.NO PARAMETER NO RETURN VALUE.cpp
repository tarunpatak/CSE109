// 1 NO RETURN NO PARAMETER
#include<iostream>
using namespace std;
int main()
{
    void print(); //function declaration
    print(); //function call
    cout<<"\nno parameter and no return type \n";
    print();
    }
void print(void) //called function
{
     cout<<"hello ";
     }
 
