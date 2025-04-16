#include<iostream>
#include<iomanip>
using namespace std;
//FallingDistance
float FallingDistance(int time)
{
	float dist=0.5*9.8*(time*time);
	return dist;
}
int main()
{
	float distance;
	for(int i=1; i<11; i++)
	{
		distance=FallingDistance(i);
		cout<<"The Falling Distance in "<<i<<" seconds is "<<distance<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
