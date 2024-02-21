#include<iostream>  // friend  function
using namespace std;
class c1
{
	int b_pay;
	int bonus;
	int t_pay;
	public:
		
			void info()
		{
		b_pay=10000;
		bonus=10000;
					}	
						friend void total_salary(c1);
						
};

void total_salary(c1 obj)
{
	cout<<"total salary is "<<obj.b_pay+obj.bonus;
}

main()
{
c1 obj1;
obj1.info();
total_salary(obj1);
return 0;
}
