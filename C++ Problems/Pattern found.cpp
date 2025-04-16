#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;

int findSubString(char arr[], char sub[], int index)		//return index if substring found else -1
{
	for (index; arr[index] != '\0'; index++)	
		if (arr[index] == sub[0])
		{
			int i = index, j = 0;
			for (; sub[j] != '\0' && arr[i] != '\0' && arr[i] == sub[j]; j++, i++);
			if (j == strlen(sub))
				return index;
		}
	return -1;
}
int findPattern(char str[], char arr[]) 
{
	char buffer[40];
	int k = 0, in=0;
	for (int i = 0; i<strlen(arr)+1; i++)
	{
		buffer[k] = arr[i];
		k++;
		if (arr[i] == '*' || arr[i] == '\0')		//a word is formed
		{
			buffer[k-1] = '\0';
			int index = findSubString(str, buffer, in);		//find if word exists
			if (index > -1)
				in = index+strlen(buffer);			//update the location 
			else
				return -1;		//not pattern not found
			k = 0;
		}
	}
	return 1;
}

int main()
{
	char arr[500], pattern[500];
	cout << "Please enter the sentence: ";
	cin.getline(arr, 500);
	cout << "Please enter the pattern: ";
	cin.getline(pattern, 500);
	int p = findPattern(arr, pattern);
	if (p == -1)
		cout << "Pattern not found" << endl;
	else
		cout << "Pattern found" << endl;
	system("pause");
	return 0;

}
