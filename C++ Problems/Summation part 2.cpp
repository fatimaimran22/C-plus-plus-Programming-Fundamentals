#include<iostream>
using namespace std;

int main()
{
	float term1,term2,term3,sum1=0, N, p=1,j=2, sum2=0, sum3=0;
	cout<<"This program will perform one of the following summation problems: \n 1. (1/2)^n \n 2. n/n+1 \n 3. 1/n \n "<<endl;
	cout<<"Please enter the numer of terms: "<<endl;
	cin>>N;
	cout<<"--------------------"<<endl;
	cout<<"\n 1. (1/2)^n"<<endl;
	cout<<"Summation1: 0";
	for(int i=1; i<=N; i++)
	{
		p=p*2;
		term1=1/p;
		sum1=sum1+term1;
		cout<<" + "<<term1; 
	}
	cout<<" =  "<<sum1<<endl;
	cout<<"--------------------"<<endl;		
	cout<<"\n 2. n/n+1"<<endl;
	cout<<"Summation2: 0";
	for(float i=1; i<=N; i++)
	{
		term2=i/j;
		j++;
		sum2=sum2+term2;
		cout<<" + "<<term2; 
	}
	cout<<" =  "<<sum2<<endl;	
	cout<<"--------------------"<<endl;
	cout<<"\n 3. 1/n "<<endl;
	cout<<"Summation3: 0";
	for(float i=1; i<=N; i++)
	{
		term3=1/i;
		sum3=sum3+term3;
		cout<<" + "<<term3;  
	}
	cout<<" =  "<<sum3<<endl;	
	
	return 0;

}
