#include<iostream>
using namespace std;

int main()
{ 
	int num;
	cout<<"Enter the number: ";
	cin>> num;
	if(num>0)
	{
			cout<<"Its a positive number.";
			if(num%2==0)
			{
				cout<<"\nIts an even number"<<endl;
			}
			else
			{
				cout<<"\nIts an odd number"<<endl;
			}
	}
	else
		cout<<"Its a negative number.";
	system("pause");
	return 0;
}

	