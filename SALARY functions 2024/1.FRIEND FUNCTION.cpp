#include<iostream> // friend  function 1
using namespace std;
class Rectangle
{
private:
        int length,breadth;
         friend int area(Rectangle r1) ;
public:
       values1 ()
       {
           length=12;
           breadth=6;
       }
      
};      
int area(Rectangle r1)
       {
           return(r1.length * r1.breadth);
          
       }

       
int main()
{
Rectangle r;
r.values1();
 cout<<"area is: "<<area(r);
return 0;
}
