#include<iostream>
using namespace std;
//swap by value
void swapbyvalue(int a, int b)
{
	int c=a;
	a=b;
	b=c;	
}
//swap by reference
void swapbyreference(int&a, int&b)
{
	int c=a;
	a=b;
	b=c;
}
int main()
{
	int a,b;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	cout<<"\nSWAP BY VALUE IS:\n";
	swapbyvalue(a,b);
	cout<<"\nThe first number is: "<<a;
	cout<<"\nThe second number is: "<<b;
	cout<<endl;	
	cout<<"\nSWAP BY REFERENCE IS:\n";
	swapbyreference(a,b);
	cout<<"\nThe first number is: "<<a;
	cout<<"\nThe second number is: "<<b;
	cout<<endl<<endl;
	system("pause");
	return 0;
} 
