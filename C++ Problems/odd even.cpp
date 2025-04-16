#include<iostream>
using namespace std;

int main()
{
	int num;
	if(num>0)
	{
	cout<<"\nThe number is positive";
	    if(num%2==0)
		{
			cout<<"\nIts an even number";
		}
		else
		{
			cout<<"\nIts an odd number";	
	}
	else
	{
		cout<<"Its a negative number.";
	}
	return 0;
}
