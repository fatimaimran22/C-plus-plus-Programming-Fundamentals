#include<iostream>
using namespace std;

int main()
{
	int num, sum;
	sum=0;
	cout<<endl<<endl;
	cout<<"Enter the number: ";
	cin>> num;
	sum=sum+num;
	while(sum<50)
	{
		cout<<"Enter the number: ";
		cin>>num;
		sum=sum+num;
	}
}

