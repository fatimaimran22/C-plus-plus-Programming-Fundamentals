#include<iostream>
using namespace std;

int main()
{
	int A1[10], A2[10];
	int sum1=0,index=0, sum2=0;
	cout<<"-------------------------------\nFATIMA IMRAN\n22L-6946\nAssignment no 5\n----------------------------------------------\n";
	cout<<"Please enter the elements of the first array:"<<endl;
	for(int i=0; i<10; i++)
	{
		cin>>A1[i];
	}
	cout<<"----------------------------------------------"<<endl;
	cout<<"Please enter the elements of the second array:"<<endl;
	for(int i=0; i<10; i++)
	{
		cin>>A2[i];
	}
	cout<<"----------------------------------------------"<<endl;
	for(int i=0; i<10; i++)
	{
		sum1=sum1+A1[i];
	}
	for(int i=0; i<10; i++)
	{
		sum2=sum2+A2[i];
	}
	if(sum1==sum2)
	{
		cout<<"same"<<endl;
	}
	else if(sum1>sum2)
	{
		cout<<"The array with the largest sum is: ";
		for(int i=0; i<10; i++)
		{
			cout<<A1[i]<<" ";
		}
	}
	else
	{
		cout<<"The array with the largest sum is: ";
		for(int i=0; i<10; i++)
		{
			cout<<A2[i]<<" ";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}