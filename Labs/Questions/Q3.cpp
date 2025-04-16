#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int x ,y, sum=0;
	cout<<"Enter a first odd number: ";
	cin>>x;
	cout<<"Enter a second odd number: ";
	cin>>y;
	int i=(x+1);
	if(x%2!=0 && y%2!=0 && x>0 && y>0 && x<y)
	{
		cout<<"Even numbers are ";
		while(i<y)
		{
			if(i%2==0)
			{
				cout<<i<<" ";
			}
			else
			{
				sum=sum+i;
			}
			i++;
		}
		cout<<"\nSum of odd numbers between "<<x<<" and "<<y<<" is "<<sum<<endl;
	}
	else
	{
		cout<<"Invalid Input"<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}




