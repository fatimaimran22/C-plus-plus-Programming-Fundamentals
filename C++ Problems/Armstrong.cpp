#include<iostream>
using namespace std;

int main()
{
	int num1,num, sum=0, rem=0, mul=0;
	cout<<"Enter the number: ";
	cin>>num1;
	if(num1>=0 && num1<=999)
	{
		num=num1;
		for(int i=1; num>0; i++)
		{
			rem=num%10;
			mul=rem*rem*rem;
			sum=sum+mul;
			num=num/10;
		}
		cout<<sum<<endl;
		if(sum==num1)
		{
			cout<<"Number is an Armstrong"<<endl;
		}
		else
		{
			cout<<"Number is not  an Armstrong"<<endl;
		}
	}
	else
	{
		cout<<"Out of range"<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
