#include<iostream>
using namespace std;
int main()
{
	for(int j=1; j<=5; j++)
	{
		cout<<"-----------TABLE OF "<<j<<"-------------"<<endl;
		for(int i=1; i<=10;i++)
		{
			cout<<j<<" * "<<i<<" = "<<j*i<<endl;
		}
	}
	return 0;
}
