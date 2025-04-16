#include<iostream>
using namespace std;

int main()
{
	//Program to print the sum of the square of the numbers upto a given integer
	int num, mul=0, sum=0;
	cout<<"Enter the integer: ";
	cin>>num;
	if(num>1)
	{
		for(int i=1; i<=num; i++)
		{
			mul=0;
			mul=i*i;
			cout<<mul<<endl;
			sum=sum+mul;
		}
		cout<<"Sum = "<<sum;
	}
	else
	{
		cout<<"Enter a positive number Invalid input";
	}
	cout<<endl;
	system("pause");
	return 0;
}