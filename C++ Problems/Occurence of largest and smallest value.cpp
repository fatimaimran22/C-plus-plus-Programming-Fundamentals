#include<iostream>
using namespace std;
int main()
{
	int N, num, min=0, max=0;
	int max_index=0, min_index=0;
	cout<<"How many numbers do u want to enter: ";
	cin>>N;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	min=num;
	for(int i=1; i<N; i++)
	{
		cin>>num; 
		if(min>num)
		{
			min=num;
			min_index=i;
		}
		if(num>=max)
		{
			max=num;
			max_index=i;
		}
	}
	cout<<" Max is at "<<max_index<<" Min is at "<<min_index;
}
