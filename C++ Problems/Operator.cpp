#include<iostream>
using namespace std;

int main()
{
	int num1,num2,ans;
	char op;
	cout<<"Enter the number: ";
	cin>>num1;
	cout<<"Enter the number: ";
	cin>>num2;
	cout<<"Enter the operator e.g (+ - / %) : ";
	cin>>op;
	if(op=='+')
	{
	ans=num1+num2;
	cout<<"num1"<<"+"<<"num2 ="<<ans;
    }
	else if(op=='-')
	{
	ans=num1-num2;	
	cout<<"num1"<<"-"<<"num2 ="<<ans;
	}
	else if(op=='/')
	{
	ans=num1/num2;
	cout<<"num1"<<"/"<<"num2 ="<<ans;
	}
	else
	{
	ans=num1%num2;
	cout<<"num1"<<"%"<<"num2 ="<<ans;
	}
	return 0;
}
