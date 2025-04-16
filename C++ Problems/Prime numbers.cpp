#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int p=0, i=2, number;
	cout<<"Enter the number: ";
	cin>>number;
	cout<<"Prime numbers are: ";
	for(int j=2; j<=number; j++)
	{
		p=0;
		for(int i=2; i<j && p==0; i++)
		{
			if(j%i==0)
			{
				p=1;
			}
		}
		if(p==0)
		{
			cout<<j<<" ";
		}
	}
	
	return 0;
}
