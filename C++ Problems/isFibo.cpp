#include<iostream>
using namespace std;

// FUNCTIO
bool isFibo(int A[], int size)
{
	bool fibo=0;
	for(int i=0; i<size-2;  i++)
	{
		if((A[0]==0 && A[0+1]==1) || (A[0]==1 && A[0+1]==1))
		{
			if((A[i])+(A[i+1])==(A[i+2]))
			{
				fibo=1;	
			}
			else
				fibo=0;		
		}
	}
	return fibo;
}
//USING THE FUNCTION IN THE MAIN
int main()
{
	int n=0, ans;
	cout<<"Fatima Imran\n22L-6946\nAssignment no: 6\nProgram implementing the isFibo Function: isFibo(<array name>,<size>)\n-------------------------------------------------------------"<<endl;
	cout<<"Enter array size: ";
	cin>>n;
	int list[n];
	cout<<"Enter the elements of the array: "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>list[i];
	}
	ans=isFibo(list,n);
	if(ans==1)
	{
		cout<<"Yes, The array is in a fibonacci sequence.";
	}
	else
	{
		cout<<"No, The array is not in a fibonacci sequence.";
	}
	cout<<endl;
	cout<<"------------------------THE END-------------------------------";
	cout<<endl;
	system("pause");
}
