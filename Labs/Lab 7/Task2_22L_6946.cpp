#include<iostream>
using namespace std;
int main()
{
	int list[10], n, p=0, index;
	cout<<"Please enter the elements of array: "<<endl;
	for(int i=0; i<10; i++)
	{
		cin>>list[i];
	}
	cout<<"\nEnter the number u want to search: ";
	cin>>n;
	for(int i=0; i<10 && p==0; i++)
	{
		if(n==list[i])
		{
			p=1;
			index=i;
		}
	}
	if(p==1)
	{
		cout<<endl;
		cout<<"Index is "<<index;
	}
	else
	{
		cout<<"Not found"<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
