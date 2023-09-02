#include<iostream>
using namespace std;
//Program that approximates the salary of the person
int main()
{
	//fatimaimran22
	int deg, age, exp;
	char gender;
	cout<<"Please enter your age: "<<endl;
	cin>>age;
	cout<<"Please enter your gender. Use the initials of your gender which is \"M\" : "<<endl;
	cin>>gender;
	if(age>=25 && gender=='M')
	{
		cout<<"Please choose your experience."<<endl<<"1.Fresh Graduate"<<endl<<"2. MS or M.PHIL"<<endl;
		cin>>deg;
		if(deg==1)
		{
			cout<<"Your salary will be around 25-40k"<<endl;
		}
		else if(deg==2)
		{
			cout<<"Please mention how many years of experience you have: "<<endl;
			cin>>exp;
			if(exp>5)
			{
				cout<<"Your salary will be around 70k+"<<endl;
			}
			else
			{
				cout<<"Your salary will be around 40k-70k"<<endl;
			}
		}
		else
		{
			cout<<"Please choose the options."<<endl;
		}
	}
	else
	{
		cout<<"Sorry, you are not qualified for this job"<<endl;
	}
	system("pause");
	return 0;
}
