#include<iostream>
using namespace std;

//OUTPUT FUNCTION
void output(int A[][4], int size)
{
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<"A "<<i<<j<<" is: "<<A[i][j]<<endl;
		}
	}
}

int main()
{
	int arr[3][4] = {{1,2,3,2},{5,9,1,2},{5,1,7,9}};
	int arr2[3][4] = {{1,2},{5,9,1}};
	cout<<"The output for array 1 is: "<<endl;
	output(arr,3);
	cout<<"The output for array 2 is: "<<endl;
	output(arr2,3);
	system("pause");
	return 0;
}
