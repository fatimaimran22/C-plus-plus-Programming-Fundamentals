#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int num, p=0;
	cout<<"Enter the number: ";
	cin>>num;
	for(int i=2; i<num & p==0; i++)
	{
		if(num%i==0)
		{
			p=1;
		}
	}
	if(p==0)
	{
		cout<<"PRIME";
	}
	else
	{
		cout<<"NOT PRIME";
	}
	return 0;
}
