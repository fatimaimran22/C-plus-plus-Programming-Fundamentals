#include<iostream>
#include<fstream>
using namespace std;

void WritetwoNumbers(int x, int y)
{
	fstream data;
	data.open("file.txt",ios::app);
	data<<endl;
	data<<x<<endl;
	data<<y<<endl;
	data.close();
	
}

int main()
{
	int a, b;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	WritetwoNumbers(a,b);
	system("pause");
	return 0;
}
