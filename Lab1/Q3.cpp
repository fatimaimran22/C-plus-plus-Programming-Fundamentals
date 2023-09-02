#include<iostream>
using namespace std;

int main()
{
	//fatima imran 22
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
	else if(op=='%')
	{
	ans=num1%num2;
	cout<<"num1"<<"%"<<"num2 ="<<ans;
	}
	else
	{
		cout<<"Invalid Operator"<<endl; //While writing programs we have to consider all the possibilities
	}
	return 0;
}
