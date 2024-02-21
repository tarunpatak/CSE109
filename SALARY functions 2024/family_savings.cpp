#include<iostream>  //frd 3 family saving
using namespace std;
class sister;
class brother
{
	int pay;
	int bonus;
	int totalh;
	public:
		void getinfoh()
	{
		pay =10000;
		bonus=10000;
		totalh=pay+bonus;
	}
friend class sister;
};
class sister
{
	int old_savings;
	int new_savings;
	int totalw;
public:
	getinfow()
	{
		old_savings=20000;
		new_savings=1000;
		totalw=old_savings+new_savings;
	}

void total_salary(brother h, sister ob)
{
	cout<<"total amount is "<<h.totalh+ob.totalw  ;
}
};
main()
{
brother obj1;
sister obj2;
obj1.getinfoh();
obj2.getinfow();
obj2.total_salary(obj1,obj2);
return 0;
}





