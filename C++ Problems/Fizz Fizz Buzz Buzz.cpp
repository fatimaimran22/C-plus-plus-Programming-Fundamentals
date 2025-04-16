#include<iostream>
using namespace std;

int main()
{
	int i;
	i=0;
	while(i<101)
	{
	    if(i%5==0 && i%3==0)
		{
			cout<<"\nFizzBuzz";
		}
		else if(i%3==0)
		{
			cout<<"\nFizz";
		}
		else if(i%5==0)
		{
			cout<<"\nBuzz";
		}
		else
		{
			cout<<"\n"<<i;
		}
		i=i+1;
	}
	return 0;
}
