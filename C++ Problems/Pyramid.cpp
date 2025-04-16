#include<iostream>
using namespace std;

int main ()
{
	int N, i=1,j=6,count=1;
	cout<<"Enter the number: ";
	cin>>N;
	while(i<=N*11)
	{
		if(i==j)
		{
			cout<<"*";
			i++;
			for(int j=1; j<count; j++)
			{
				cout<<"*";
				i++;
			}
		}
		else
		{
			cout<<" ";
		}
		if(i%11==0)
		{
			cout<<endl;
			j=j+10;
			count=count+2;
		}
		i++;
	}
	cout<<endl;
	system("pause");
	return 0;
}

