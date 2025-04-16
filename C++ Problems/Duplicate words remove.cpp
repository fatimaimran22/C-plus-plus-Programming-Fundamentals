#include<iostream>
using namespace std;

int findSubString(char temp[],char word[])
{
	int t=0, w=0,  result=0;
	while(temp[t]!='\0' || temp[t]==' ')
	{
		if(temp[t]==word[w])
		{
			result=t;
			bool p=1;
			while(word[w]!='\0')
			{
				if(temp[t]!=word[w])
				{
					p=0;
					t++;
					w++;
				}
				else
				{
					w++;
					t++;
				}
			}
			if(p==1)
				return result;
		}
		t++;
	}
	return -1;
}

void removeDuplicateWord(char arr[])
{
	char temp[500], word[20];
	int t=0, a=0,w=0;
	while(arr[a]!='\0' || arr[a]==' ')
	{
		if(arr[a]!=' ')
		{
			word[w]=arr[a];
			w++;
		}
		else
		{
			word[w]='\0';
			w=0;
			int result;
			result=findSubString(temp,word);
			if(result==-1)
			{
				while(word[w]!='\0')
				{
					temp[t]=word[w];
					t++;
					w++;
				}
				w=0;
				temp[t++]=' ';
			}
		}
		a++;
	}
	int i=0;
	while(temp[i]!='\0' || temp[i]==' ')
	{
		arr[i]=temp[i];
		i++;
	}
	arr[i]='\0';
}

int main()
{
	char arr[500];
	cout<<"Please enter the sentence: ";
	cin.getline(arr,500);
	removeDuplicateWord(arr);
	cout<<arr<<endl;
	system("pause");
	return 0;
	
}
