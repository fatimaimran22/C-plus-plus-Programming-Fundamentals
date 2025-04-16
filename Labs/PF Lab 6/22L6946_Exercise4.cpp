#include<iostream>
using namespace std;
int main()
{
	int s, i=1, f=1;
	cout<<"Enter the size please: ";
	cin>>s;
	while(f<=s)
	{
		for(int i=1; i<=f; i++)
		{
			cout<<i;
		}
		cout<<endl;
		f++;
	}
	f=(s-1);
	while(f>=1)
	{
		for(int i=1; i<=f; i++)
		{
			cout<<i;
		}
		cout<<endl;
		f--;
	}
	return 0;
}
