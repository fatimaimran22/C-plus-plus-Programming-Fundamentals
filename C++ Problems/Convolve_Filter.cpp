#include<iostream>
#include<string.h>
using namespace std;
const int row = 3;
//output

void output(int arr[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] <<"\t ";
		}
		cout << endl;
	}
}
void output(int arr[][5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] <<"\t ";
		}
		cout << endl;
	}
}
int multi_sum(int A[][3], int B[][3])
{
	int sum=0;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			sum=sum+(A[i][j]*B[i][j]);
		}
	}
	return sum;
}

void select(int A[][5], int D[][3], int k, int l)
{
	int m=l;
	for(int i=0; i<3; i++)
	{
		l=m;
		for(int j=0; j<3; j++)
		{
			D[i][j]=A[k][l];
			l++;
		}
		k++;
	}
}
void convolve(int A[][5], int B[][3], int C[][3])
{
	int D[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			select(A,D,i,j);
			C[i][j]=multi_sum(D,B);
		}
	}
}

int main()
{
	int A[5][5] = { 1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1};
	int B[3][3] = { 1,1,1,0,0,0,1,1,1 }, C[3][3] = { 0 };
	cout<<endl<<"---------A is------------"<<endl;
	output(A);
	cout<<endl<<"---------B is------------"<<endl;
	output(B);
	convolve(A,B,C);
	cout<<endl<<"---------Filter is------------"<<endl;
	output(C);
	cout << endl;
	system("pause");
	return 0;
}
