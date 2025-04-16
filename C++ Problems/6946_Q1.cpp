#include<iostream>
using namespace std;

int main()
{
	int num,sum,rem,i;
	sum=0;
	i=0;
	cout<<"Enter the number: ";
	cin>>num;
	while(num!=0)
	{
	    rem=num%10;
	    sum=sum+rem;
	    num=num/10;
	    i=i+1;	
	}
	cout<<"The sum of the digits of the given number is: "<<sum<<endl;
	system("pause");
    return 0;
}
