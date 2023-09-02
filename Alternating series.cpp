//The sequence 1-2+3-4+5 is called an "alternating sum" or an "alternating series." 
//It's a sequence of numbers where the sign alternates between addition (+) and subtraction (-) for each consecutive term. 
//In this specific sequence, you are adding odd numbers (1, 3, 5) and subtracting even numbers (2, 4) alternately.
//This Program will print this sequence till N number user enters.

#include <iostream>
using namespace std;

int main()
{
	//fatimaimran22
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
