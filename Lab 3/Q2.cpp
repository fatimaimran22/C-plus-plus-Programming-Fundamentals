#include<iostream>
using namespace std;
int main()
{
	//fatimaimran22
	int num1, num2, max, temp=0, mod;
	cout<<"Enter two numbers: "<<endl;
	cin>>num1;
	cin>>num2;
	if(num2>num1)
	{
		max=num2;
	}
	else
	{
		max=num1;
	}
	for(int i=1; i<max; i++)
	{
		if(num1%i==0 && num2%i==0)
			temp=i;
	}
	cout<<"The GCD is "<<temp;
	return 0;
}
