#include<iostream>
using namespace std;

int main()
{
	//Place value of digit in an integer
	int num, rem=0, n;
	cout<<"Enter the integer " ;
	cin>>num;
	int number[4]={11,11,11,11};
	if(num<9999)
	{
		for(int i=0; num>0; i++)
		{
			rem=num%10;
			number[i]=rem;
			num=num/10;
		}
		cout<<"\nEnter the integer You want to check: "<<endl;
		cin>>n;
		if(n==number[0])
			cout<<"Units"<<endl;
		else if(n==number[1])
			cout<<"Tens"<<endl;
		else if(n==number[2])
			cout<<"Hundreds"<<endl;
		else if(n==number[3])
			cout<<"Thousands"<<endl;
		else
			cout<<"Not present"<<endl;
	}
	else
	{
		cout<<"Out of range"<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
