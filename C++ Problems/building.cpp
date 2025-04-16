#include<iostream>
using namespace std;

int main ()
{
	int N, i=1,first=1,last=20,count=1,counter=1;
	cout<<"Enter the number 0-9: ";
	cin>>N;
	while(i<=N*20)
	{
		if(i==first)
		{
			cout<<"*";
			i++;
			for(int s=1; s<count; s++)
			{
				cout<<"*";
				i++;
			}
		}
		else if(i==(last-counter) && last!=20)
		{
			cout<<"*";
			for(int s=1; s<counter; s++)
			{
				cout<<"*";
				i++;
			}
			counter=counter+1;
		}
		else if(i==last)
		{
			cout<<"*";
		}
		else
		{
			cout<<" ";
		}
		if(i%20==0)
		{
			cout<<endl;
			first=first+20;
			last=last+20;
			count=count+1;
		}
		i++;
	}
	cout<<endl;
	system("pause");
	return 0;
}

