#include<iostream>
using namespace std;

int main()
{
	int N, rem=1, d, i=1;
	cout<<"Enter the number: "<<endl;
	cin>>N;
	d=N;
	while(i<=N*N)
	{
		if(i%N==rem || i%N==d || i==1 || i==N || i==(N*N))
		{
			cout<<"*";
			
		}
		else
		{
			cout<<" ";
		}
		if(i%N==0)
		{
			cout<<endl;
			rem++;
			d--;
			
	    }
	i++;	
	}
	return 0;
}
