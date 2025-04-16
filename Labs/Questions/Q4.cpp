#include<iostream>
using namespace std;

int main()
{
	int N, rem=1, d, i=1;
	int j=1;
	cout<<"Enter the number: ";
	cin>>N;
	d=N;
	while(i<=N*N)
	{
		if(i%N==rem || i%N==d || i==1 || i==N || i==(N*N))
		{
			cout<<j;	
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
			if(i>(N*N+1)/2)
			{
				j--;
			}
			else
			{
				j++;
			}
			
	    }
	i++;	
	}
	return 0;
}



