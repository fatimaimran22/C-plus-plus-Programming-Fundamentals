#include<iostream>
#include<fstream>
using namespace std;
void Output(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	const int size=6;
	int Array[size]={8,6,11,3,15,5};
	for(int *loop=Array+size; loop>Array; loop--)   //for(int loop=size; loop>0; loop--)
	{
		for(int *ptr=Array; ptr<Array+(size-1); ptr++)
		{
		if(*ptr>=*(ptr+1))
			{
				swap(*ptr,*(ptr+1));
			}	
		}
	}
	Output(Array, size);
	cout << endl;
	system("pause");
	return 0;
}
