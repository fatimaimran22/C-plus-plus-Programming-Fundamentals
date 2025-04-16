#include<iostream>
using namespace std;
int main()
{
	int list[5];
	cout<<"Input"<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>list[i];
	}
	cout<<"Output"<<endl;
	cout<<"{";
	for(int i=0; i<5; i++)
	{
		cout<<"  "<<list[i];
	}
	cout<<" }";
	return 0;
}
