#include<iostream>
using namespace std;
int main()
{
	int n,j,k;
	char A[7];
	char output[7];
	for(int i=0;i<7;i++)
	{
	    cout<<"Enter A for array: ";
	    cin>>A[i];
	}
	cout<<endl;
	for(int i=0;i<7;i++)
	{
		cout<<A[i];
		cout<<endl;
	}
	cout<<"Enter rotation number : ";
	cin>>n;
	k=n;
	for(int i=0;i<n;i++)
	{
		output[i]=A[7-k];
		k=k-1;
	}
	j=0;
	for(int i=n ;i<7;i++)
	{
		output[i]=A[j];
		j++;
	}
	cout<<"The Rotated Array is"<<endl;
	for(int i=0;i<7;i++)
	{
		
		cout<<output[i];
		cout<<endl;
	}
	system("pause");
	return 0;
}

