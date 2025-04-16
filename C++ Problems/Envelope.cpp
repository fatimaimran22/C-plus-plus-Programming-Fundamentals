#include<iostream>
using namespace std;

int main()
{
	int N,i=1,rem,d;
	rem=1;
	cout<<"Enter the number"<<endl;
	cin>>N;
	d=N;
	while(i<=N*N)
	{
		if(i>(N*N+1)/2)
		{
			rem=1;
			d=N;
		}
		if(i<=N || i>N*N-N || i%N==0 || i%N==1 || i%N==rem || i%N==d)
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
		     rem=rem+1;
		     d=d-1;
		}	  
		i=i+1;
	}
	return 0;
}
