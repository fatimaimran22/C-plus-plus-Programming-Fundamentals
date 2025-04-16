#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//Works on visual studio not on Dev
void Read(const string &filename)
{
	char str[30];
	ifstream data(filename);
	data.getline(str, 12); //str should have the first line of text.
	cout << str;
	string word;
	while (!data.eof())
	{
		getline(data, word);
		cout << word;
	}
}

int main()
{
	string filename;
	cout << "Enter file name e.g 6946_Q8.txt : ";
	cin >> filename;
	Read(filename);
	cout << endl;
	system("pause");
	return 0;
}
