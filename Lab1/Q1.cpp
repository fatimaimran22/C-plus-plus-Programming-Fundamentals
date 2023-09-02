#include<iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Enter the number: ";
	cin>>N;
	if(!N) //if(N==0)
		cout<<"Neither positive nor negative."<<endl;
	else if(N>0)
		cout<<"Positive"<<endl;
	else 
		cout<<"Negative"<<endl;
	system("pause");
}
