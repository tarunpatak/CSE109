//static match  
#include<iostream>
using namespace std;
class match
{
private:
	int player_score;
	static int team_score;
	string pname;
	public:
		void get_data()
{
	cin>>player_score;
	team_score+=player_score;
	}
	void showdata(){
			cout<<team_score<<endl;
			}
static ldr(int x)
{
	team_score=team_score-x;
cout<<" after rain"<<team_score;
}		};
	int match::team_score;
		int main()
	{	
		match a1,a2,a3;
		a1.get_data();
		a1.get_data();
	 //a2.showdata();
	 a2.showdata();					
	a2.ldr(10);
	}
