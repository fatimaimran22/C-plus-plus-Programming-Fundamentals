#include<iostream>
using namespace std;

//Function
void SumofRows(int A[][4], int r, int B[][3])
{
	int k=0;
	int sum=0;
	for(int i=0; i<r; i++)
	{
		sum=0;
		for(int j=0; j<4; j++)
		{
			sum=sum+A[i][j];
		}
		B[0][k]=sum;
		k++;
	}
}

int main()
{
	const int r=3;
	const int c=4;
	int A[r][c];
	int sum[1][r];
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<"A "<<i<<j<<" is: ";
			cin>>A[i][j];
		}
	}
	SumofRows(A,r,sum);
	cout<<"---------SUM OF ROWS-----------";
	cout<<endl;
	for(int i=0; i<1; i++)
	{
		for(int j=0; j<r; j++)
		{
			cout<<sum[i][j]<<" ";
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}
