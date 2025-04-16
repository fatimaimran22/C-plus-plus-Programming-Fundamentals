#include<iostream>
#include<iomanip>
using namespace std;
void average(int A[][4],int r)
{
	int avg[4];
	int c=0;
	int averageofcbyr=0;
	for(int i=0 ;i<4;i++)
	{
		c=0;
		for(int j=0;j<r;j++)
		{
			c= c + A[j][i];
		}
		averageofcbyr=(c/r);
		avg[i]=averageofcbyr;
	}
	cout<<"Average: ";
	for(int f=0; f<4;f++)
	{
		cout<<avg[f]<<" ";
	}
	return;	
}

int main()
{
	int r;
	cout<<"Enter rows: ";
	cin>>r;
	int A[r][4];
	for(int i=0 ;i<r;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<"Enter value "<<i<<j<<": ";
			cin>>A[i][j];
		}	
	}
	for(int i=0 ;i<r;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<setw(3)<<A[i][j]<<" ";
		}
		cout<<endl;	
	}
	cout<<endl;
	average(A,r);
	return 0;
		
}
