#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//Works on visual studio not on Dev
void ReadWrite(const string &filename, const string& output)
{
	string word;
	ifstream data(filename);
	while (!data.eof())
	{
		getline(data, word);
		ofstream file(output);
		file << word;
	}
}


int main()
{
	string input,output;
	cout << "Enter file name for input e.g 6946_Q9.txt : ";
	cin >> input;
	cout << "Enter file name for output e.g 6946.txt : ";
	cin >> output;
	ReadWrite(input, output);
	cout << endl;
	system("pause");
	return 0;
}
