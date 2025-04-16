#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int count=0,A[10],j=0;
	char list[30];
	cout<<"Enter the sentence: "<<endl;
	cin.getline(list,30);
	for(int i=0;i<10;i++)
	{
		A[i]=0;
	}
	for(int i=0;list[i]!=0;i++)
	{
		if(list[i]!=' '&&list[i]!='.')
		{
			count++;
		}
		else
		{
			A[j]=count;
			j++;
			count=0;
		}
	}
	int min=100;
	for(int i=0;A[i]!=0;i++)
	{
		cout << A[i] << " ";
		if(min>A[i])
		{
			min=A[i];
		}
		
	}
	cout << endl << "min = "<< min;
}
