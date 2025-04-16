#include<iostream>
using namespace std;

int main()
{
	float term, sum=0, N,summation, p=1,j=2;
	cout<<"Please choose one of the following summation problems: \n 1. (1/2)^n \n 2. n/n+1 \n 3. 1/n \n "<<endl;
	cin>>summation;
	if(summation==1)
	{
		cout<<"--------------------"<<endl;
		cout<<"\n 1. (1/2)^n"<<endl;
		cout<<"Please enter the numer of terms: "<<endl;
		cin>>N;
		for(int i=1; i<=N; i++)
		{
			p=p*2;
			term=1/p;
			sum=sum+term;
		}
		cout<<"The sum of the series is:  "<<sum<<endl;
	}
	else if(summation==2)
	{
		cout<<"--------------------"<<endl;
		cout<<"\n 2. n/n+1"<<endl;
		cout<<"Please enter the numer of terms: "<<endl;
		cin>>N;
		for(float i=1; i<=N; i++)
		{
			term=i/j;
			j++;
			sum=sum+term;
		}
		cout<<"The sum of the series is:  "<<sum<<endl;	
	}
	else if(summation==3)
	{
		cout<<"--------------------"<<endl;
		cout<<"\n 3. 1/n "<<endl;
		cout<<"Please enter the numer of terms: "<<endl;
		cin>>N;
		for(float i=1; i<=N; i++)
		{
			term=1/i;
			sum=sum+term;
		}
		cout<<"The sum of the series is:  "<<sum<<endl;	
	}
	
	return 0;

}
