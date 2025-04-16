#include<iostream>
using namespace std;

int** getDivisors(int* A, const int& N)
{
	int** temp = new int* [N];  //2D ARRAY
	for (int i = 0; i < N; i++)
	{
		int s = 1;   //Initially Size=1 and its gets incremented when needed more space
		temp[i] = new int[s]; 
		int* bptr = temp[i];   //point to row i

		for (int j = 2; j < A[i]; j++)
		{
			if (A[i] % j == 0)
			{
				*bptr = j;
				s = s + 1;   //size is incremented
				bptr++;
			}
		}
		*bptr = -1;  //last element is assigned with -1
	}
	return temp;
}

int main()
{
	int N;
	cout << "Enter size: ";
	cin >> N;
	int* A = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Enter element: ";
		cin >> A[i];
	}
	int** B = getDivisors(A, N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; B[i][j] != -1; j++)  //to print both numbers and -1
		{
			cout << B[i][j] << " ";
		}
		cout <<"-1"<< endl;
	}
	system("pause");
	return 0;
}
