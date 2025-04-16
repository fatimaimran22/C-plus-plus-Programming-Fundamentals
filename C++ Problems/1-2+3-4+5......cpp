#include <iostream>
using namespace std;

int main()
{
	int N,i;
	cout<<"Enter the number:  ";
	cin>> N;
	i=1;
	cout<< i;
	i=2;
	while(i< (N+1))
	{
		
	if(i%2==0)
	{
	cout<<"-";
	cout<< i ;
	}
	else
	{
	cout<<"+";
	cout<< i ;
	}
	i=i+1;
	}
	   return 0;
}
