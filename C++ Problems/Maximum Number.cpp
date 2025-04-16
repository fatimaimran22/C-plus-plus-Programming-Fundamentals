#include<iostream>
using namespace std;

int main()
{
	int N,num,max,min,i;
	max=0;
	min=0;
	i=0;
	N=4;
	while(i<N+1)
	{
		cout<<"Enter the number";
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
