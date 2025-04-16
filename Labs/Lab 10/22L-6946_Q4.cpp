#include <iostream>
#include <stdio.h>
using namespace std;
//To check the length of the sentence
int strlen(char sen[], int start)
{
	int count = 0 ;
	for(int j = start ; (sen[j] != ' ') && (sen[j] != '\0') ; j++)
	{
		count++;
	}
	return count;
}

int main()
{
	int length , end;
	char sen[20];
	cout<<"Enter the sentence : ";
	gets(sen);
	
	int i = 0;
	while(sen[i] != '\0')
	{
		length = strlen(sen,i);
		end = i + (length - 1);
		for(int j = i; j < end ; j++)
		{
			swap(sen[j],sen[end]);
			end--;
		}
		i = i + length + 1;
	}
	cout<<sen;
	cout<<endl;
	return 0;
}
