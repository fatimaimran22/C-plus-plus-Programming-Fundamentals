#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float data[50];
	int count=0;
	for(int i=0; i<25; i++)
	{
		data[i]=i*i;
	}
	for(int i=25; i<50; i++)
	{
		data[i]=i*i*i;
	}
	for(int j=0; j<50; j++)
	{
		cout<<setw(6)<<data[j]<<"  ";
		count++;
		if(count%10==0)
			cout<<endl;
	}
	system("pause");
	return 0;
}
