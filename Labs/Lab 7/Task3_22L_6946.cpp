#include<iostream>
using namespace std;
int main()
{
	int data[10], mid, n, index, size;
	cout<<"Enter the values of a sorted array: "<<endl;
	for(int i=0; i<10; i++)
	{
		cin>>data[i];
	}
	cout<<"\nEnter the number: ";
	cin>>n;
	cout<<"size: ";
	cin>>size;
	mid=data[size/2];
	index=size/2;
	if(mid==n)
	{
		cout<<index;	
	}
	else if(n<mid && n<11)
	{
		for(int i=0; i<mid ;i++)
		{
			if(n==data[i])
				cout<<i;
		}
	}
	else if(n>mid && n<11)
	{
		for(int i=mid; i<10 ;i++)
		{
			if(n==data[i])
				cout<<i;
		}
	}
	else
	{
		cout<<endl;
		cout<<"Not found";
	}
	system("pause");
	return 0;
}
