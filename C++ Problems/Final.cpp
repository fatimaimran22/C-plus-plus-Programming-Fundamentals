#include <iostream>
using namespace std;
int findSubString(char temp[], char word[])
{
	int t=0,w=0,r=0;
	while(temp[t]!='\0'|| temp[t]==' ')
	{
		
		if(temp[t]==word[w])
		{
			bool p=1;
			r=t;
			while(word[w]!='\0')
			{
				if(temp[t]!=word[w])
				{
					p=0;
					w++;
					t++;
				}
				else
				{
					w++;
					t++;
				}	
			}
			if(p==1)
				return r;		
		}
		t++;	
	}
	return -1;
}
////---------------------
//int findSubString(char arr[], char sub[])
//{
//	int a_i=0; // arr index
//	int s_i=0; // sub index
//	int r_i; // return index;
//	//char word[20];//max size 30
//	while(arr[a_i] != '\0' || arr[a_i] == ' ')
//	{
//		if(arr[a_i] == sub[s_i])
//		{
//			// first char matchs
//			bool found=true;
//				r_i=a_i; // set return index to first found
//			while(sub[s_i] != '\0')
//			{
//				if(arr[a_i] != sub[s_i])
//				{
//					found=false; 
//					s_i++; 
//					a_i++; 
//				}
//				else
//				{
//					a_i++; 
//					s_i++;
//				}
//			}//end while
//			if(found==1) 
//				return r_i;
//		}// end if match
//		a_i++;
//	}//end major while
//	return -1;
//}
void removeDuplicateWords(char arr[])
{
	char temp[500];
	int a=0, t=0, w=0;
	while(arr[a]!='\0' || arr[a]==' ')
	{
		char word[20];
		if(arr[a]!=' ')
		{
			word[w]=arr[a];
			w++;
		}
		else
		{
			word[w]='\0';
			w=0;
			int f;
			f=findSubString(temp, word);
			if(f==-1)
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
	temp[t]='\0';
	int i=0; 
	while(temp[i]!='\0'|| temp[i]==' ')
	{
		arr[i]=temp[i];
		i++;
	}
	arr[i]='\0';
}
//---------------------------
//void removeDuplicateWords(char arr[])
//{
//	char temp[500];//contains all undupicated words
//	
//	int a_i=0; // arr index
//	int t_i=0; // temp index
//	int w_i=0; //word index
//	while(arr[a_i] !='\0' || arr[a_i] == ' ')
//	{
//		// || to avoid the stopping at space
//		
//		char word[20]; //assuming max size of word is 20
//		if(arr[a_i] != ' ') 
//		{
//			word[w_i]= arr[a_i];
//			w_i++;
//		}
//		else
//		{
//			word[w_i]='\0'; 
//			w_i=0;
//			// word is found
//			//cout << word << endl;
//			int f= findSubString(temp,word);
//			if(f == -1)
//			{
//				while(word[w_i] != '\0') 
//				{
//					temp[t_i]=word[w_i];
//					w_i++;
//					t_i++;
//				}
//				temp[t_i++]= ' ';
//				w_i=0;
//			}
//
//		}
//		a_i++;
//
//	}//end major while
//	temp[t_i]='\0';
//	int i=0;
//	while(temp[i] != '\0' || temp[i]==' ')
//	{
//		//cout << temp[i];
//		arr[i] = temp[i];
//		i++;
//	}
//	arr[i]='\0';
//}


int findSubString(char [], char [], int );// prototype
void removeDuplicateWords(char []); 
int main()
{
	char arr[]="Hello I am Muslim Muslim I am going to Lahore to Lahore Hello Muslim";
	removeDuplicateWords(arr);
	cout << arr<<endl;
	system("pause");
	return 0;
}

