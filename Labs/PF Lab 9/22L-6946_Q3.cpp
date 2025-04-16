#include<iostream>
using namespace std;
int main()
{
	int count=0;
    char list[10];
    cin>>list;
    for(int i=0;list[i]!=0;i++)
    {
    	count++;
	}
	cout<<"count : "<<count<<endl;
	for(int i=count;i>=0;i--)
	{
		cout<<list[i];
	}
	cout<<endl;
	system("pause");
	return 0;	
}
