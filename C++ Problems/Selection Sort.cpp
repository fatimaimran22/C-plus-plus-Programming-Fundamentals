a#include<iostream>
using namespace std;

int main()
{
	int A[10], max=0, index=0;
	cout<<"Enter the elements of the array: "<<endl;
	for(int i=0; i<10; i++)
	{
		cin>>A[i];
	}
	for(int size=10; size>1; size--)
	{
		max=A[0];
		index=0;
		for(int i=0; i<size; i++)
		{
			if(max<A[i])
			{
				max=A[i];
				index=i;
			}
		}
		swap(A[index], A[size-1]);
	}
	for(int i=0; i<10; i++)
	{
		cout<<A[i]<<" ";
	}
	system("pause");
	return 0;

}
