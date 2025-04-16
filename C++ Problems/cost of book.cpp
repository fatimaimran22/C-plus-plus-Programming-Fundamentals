#include<iostream>
using namespace std;

int main()
{
	int num,i,cost,avg,tcost;
	cout<<"Enter the number of books used:";
	cin>>num;
	tcost=0;
	i=0;
	while(i<(num))
	{
	cout<<"Enter the cost of the book:";
	cin>>cost;
	tcost=tcost+cost;
	i=i+1;
	}
	avg=tcost/num;
	cout<<"Average is "<<avg;
	return 0;
}
