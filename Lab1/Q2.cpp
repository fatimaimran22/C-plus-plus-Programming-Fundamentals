#include<iostream>
using namespace std;

int main()
{
	//fatimaimran22
	int N,num,max,min,i;
	max=0;
	min=0;
	i=0;
	N=4; //you can make it inclusive by taking input N  from User 
	//cin>>N
	while(i<N)
	{
		cout<<"Enter the number: ";
		cin>>num;
		if(num>max)
		{
			max=num;
		}
		else
		{
			min=num;
		}
		i=i+1;
	}
	cout<<"Largest is "<<max;
	return 0;
}
