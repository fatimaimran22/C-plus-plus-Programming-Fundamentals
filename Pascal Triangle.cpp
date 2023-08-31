#include<iostream>
using namespace std;

int** CreatePascalTriangle(int n)
{
	int** temp = 0;
	if (n)
	{
		temp = new int* [n];
		for (int i = 0; i < n; i++)
		{
			temp[i] = new int[i + 1];
			for (int j = 0; j <= i; j++)
			{
				int start = 1;
				int a = j;
				if (j > i - j)
					a = i - a;
				for (int k = 0; k < a; k++)
				{
					start *= (i - k);
					start /= (k + 1);
				}
				temp[i][j] = start;
			}
		}
		return temp;
	}
	return temp;
}

void DisplayPascalTriangle(int n)
{
	for (int i = 0; i < n; i++)
	{
		int N = 1;
		for (int k = 0; k <= i; k++)
		{
			cout << N << " ";
			N= N * (i - k) / (k + 1);
		}
		cout << endl;
	}
}

void DeAllocatePascalTriangle(int** Array,int n)
{
	for (int i = 0; i < n; i++)
	{
		delete[] Array[i];
	}
	delete[] Array;
}

int main()
{
	//fatimaimran22
	int** Ragged_array = 0;
	cout << "Enter the number: ";
	int N;
	cin >> N;
	Ragged_array = CreatePascalTriangle(N);
	DisplayPascalTriangle(N);
	DeAllocatePascalTriangle(Ragged_array, N);

	Ragged_array = 0;
	system("pause");
}
