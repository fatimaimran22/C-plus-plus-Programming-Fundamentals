#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//Works on visual studio not on Dev
void Read(const string &filename, int A[], int &size)
{
	int x = 0, i=0;
	fstream data;
	data.open(string(filename), ios::in);
	while (!data.eof())
	{
		data >> x;
		A[i] = x;
		size = i; //Current used size
		i++;
	}
	data.close();
}

int main()
{
	string filename;
	cout << "Enter file name e.g 22L-6946_Q7.txt : ";
	cin >> filename;
	const int s = 1000; //Maximum size
	int A[s];
	int size = 0;
	Read(filename, A,size);
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
