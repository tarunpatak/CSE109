#include<iostream>  // default arguments
using namespace std;
class Student
{
int roll_no;
int marks;
public:
Student()
{
roll_no=2;
marks=89;
}
Student(int r,int m=90)
{
roll_no=r;
marks=m;
}
void show_data()
{
cout<<"\n Roll no=:"<<roll_no;
cout<<"\t Marks="<<marks;
}
};
int main()
{
Student s1;
s1.show_data();
Student s2(3);
s2.show_data();
Student s3(5,98);
s3.show_data();
return 0;
}


