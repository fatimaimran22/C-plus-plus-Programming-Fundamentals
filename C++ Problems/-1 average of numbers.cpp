#include<iostream>
using namespace std;
int main()
{
	//program which keeps taking input from user until he enters -1. On receiving -1 your program will display average of numbers entered
	float p=0, i=0, count=0, avg=0;
	while(p!=-1)
	{
		count =count+p;
		cout<<"Enter no: ";
		cin>>p;
		i++;
	}
	cout<<endl;
	cout<<"--------Average is--------"<<endl;
	cout<<count<<" / " <<i-1<<" = ";
	avg=count/(i-1);
	cout<<avg;
	cout<<endl;
	system("pause");
	return 0;
}
