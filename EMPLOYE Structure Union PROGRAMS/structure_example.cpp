#include  <iostream>
using namespace std;
union employee
{
    char name[20];
    int age;
    float salary;
    void fun()
    {
    	
	}
};
int main()
{
	
    employee e1;
    cout << "Enter Full name: ";
    cin.getline(e1.name, 20);
    cout << "Enter age: ";
    cin >> e1.age;
    cout << "Enter salary: ";
    cin >> e1.salary;
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << e1.name << endl;
    cout <<"Age: " << e1.age << endl;
    cout << "Salary: " << e1.salary;
    return 0;
}
