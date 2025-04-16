#include<iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout<<"Enter the first number: ";
	cin>> num1;
	cout<<"Enter the second number: ";
	cin>> num2;
	if(num1==1)
	{
		if(num2==1)
		cout<<"1";
		else
		cout<<"0";
	}
	else
	{
		if(num2==1)
		cout<<"0";
		else
		cout<<"1";
	}
	
	return 0;
}
