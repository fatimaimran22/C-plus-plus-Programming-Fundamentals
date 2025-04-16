#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//Works on visual studio not on Dev
void Write(const string& filename, int A[], int size)
{
	fstream data;
	data.open(string(filename), ios::app);
	data << endl;
	for (int i = 0; i < size; i++)
	{
		data << A[i];
	}
	data.close();
}

int main()
{
	string filename;
	cout << "Enter file name: ";
	cin >> filename;
	const int s = 3;
	int A[s];
	for (int i = 0; i < s; i++)
	{
		cout << "Enter A element no " << i << ": ";
		cin >> A[i];
	}
	Write(filename, A, s);
	system("pause");
	return 0;
}
