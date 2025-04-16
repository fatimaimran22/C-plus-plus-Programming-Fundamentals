#include<iostream>
using namespace std;

int main()
{
int num,sum,rem;
cout<<"Enter the integer: ";
cin>> num;
while(num>0)
{
    rem=num%10;
	sum=sum+rem;
	num=num/10;
	
}
	cout<<"The sum of the digits of the given number is: "<<sum;
	cout<<endl<<sum%4<<endl;
return 0;
}
