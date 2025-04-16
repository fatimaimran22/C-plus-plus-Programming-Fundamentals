////////  HEADER FILES   ///////////
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>   
#include<Windows.h> 

using namespace std;

//----------Take Input---------
void Take_Input(char message[])
{
	gets(message);
}
//----------Total no of characters----------
int Total(char A[])
{
	int count=0;
	for(int i=0; A[i]!='\0' ; i++)
	{
			count++;
	}
	return count;
}
//-----------Counter-------------
int counter(char A[], char alpha)
{
	int count=0;
	for(int i=0; A[i]!='\0' ; i++)
	{
		if(A[i]!=' ' && (A[i]==alpha || A[i]==alpha+32 || A[i]==alpha-32))
			count++;
	}
	return count;
}
//----------counter quote-----------------
int countquote(char A[],char a)
{
	int count=0;
	for(int i=0; A[i]!='\0' ; i++)
	{
		if(A[i]==a)
			count++;
	}
	return count;
}
//-------------------Unique Counter------------------- 
int Unique_counter(char message[])
{
	int sum=0;
	int count=0;
	for(char i='A'; i<='Z'; i++)
	{
		
		count=0;
		count=counter(message, i); //Checks frequency
		if(count!=0)
		{
			sum=sum+1;
		
		}
	}
	for(char i='!'; i<='@'; i++)
	{
		count=0;
		count=countquote(message, i);
		if(count!=0)
		{
			sum=sum+1;
		
		}
	}
	return sum;
}
//--------Count of each Unique Character---------------
void CharDictionary(char arr[])
{
	int count=0;
	for(char i='A'; i<='Z'; i++)
	{
		
		count=0;
		count=counter(arr, i); //Checks frequency
		if(count!=0)
		{
			cout<<"The character "<<i<<" comes "<<count<<" many times."<<endl;
		}
	}
	for(char i='!'; i<='@'; i++)
	{
		count=0;
		count=countquote(arr, i);
		if(count!=0)
		{
			cout<<"The character "<<i<<" comes "<<count<<" many times."<<endl;
		
		}
	}
}
//----------------Rainbow Number-----------
int RainbowNumber(int num)
{
	if(num==1)
		return 0;
	else if(num==2 || num==3)
		return 1;
	else if(num==4 || num==5)
		return 2;
	else if(num==6 || num==7)
		return 3;
	else 
		return 4;
}
//-----------Prime check---------
bool Prime(int num)
{
	bool p=0; //Prime
	for(int i=2; i<num && p==0; i++)
	{
		if(num%i==0)
		{
			p=1; //not prime
		}
	}
	return p;
}
//------TypeCasting----------
int conv(char no[])
{
	int num=0;
	for(int a=0; a<4; a++)
	{
		num=(num*10)+no[a];
	}
	return num;
}
//-----------SHOW RAINBOW----------
void ShowMeTheRainbow(char message[], char no[])
{
	int total;
	int num;
	total=Total(message);
	HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	/*
	The different color codes are

	0   BLACK
	1   BLUE
	2   GREEN
	3   CYAN
	4   RED
	5   MAGENTA
	6   BROWN
	7   LIGHTGRAY
	8   DARKGRAY
	9   LIGHTBLUE
	10  LIGHTGREEN
	11  LIGHTCYAN
	12  LIGHTRED
	13  LIGHTMAGENTA
	14  YELLOW
	15  WHITE
	*/

	for(int k=0; k<total; k++)
	{
		int num=0;
		int color=0;
		num=counter(message, message[k]);
		color=RainbowNumber(num);
		if(color==0)
		{
			SetConsoleTextAttribute(console_color, 4);
			cout<<message[k];
		}
		else if(color==1)
		{
			SetConsoleTextAttribute(console_color, 2);
			cout<<message[k];
		}
		else if(color==2)
		{
			SetConsoleTextAttribute(console_color, 1);
			cout<<message[k];
		}
		else if(color==3)
		{
			SetConsoleTextAttribute(console_color, 5);
			cout<<message[k];
		}
		else if(color==4)
		{
			SetConsoleTextAttribute(console_color, 14);
			cout<<message[k];
		}
		else
		{
			SetConsoleTextAttribute(console_color, 15);
			cout<<message[k];
		}
	}
	SetConsoleTextAttribute(console_color, 15);
	cout<<endl;
	int number;
	number=atoi(no);//CASTING is Done
	int check;
	if(number%2==0)
	{
		for(int k=0; k<total; k++)
		{
			check=0;
			check=Prime(k);
			if(check==1) //NON-PRIME INDICES
			{
				SetConsoleTextAttribute(console_color, 3);
				cout<<message[k];
			}
		}
	}
	else
	{
		for(int k=0; k<total; k++)
		{
			check=0;
			check=Prime(k);
			if(check==0 && k!=1) //PRIME INDICES
			{
				SetConsoleTextAttribute(console_color, 5);
				cout<<message[k];
			}
		}
	}
	cout<<endl;
	SetConsoleTextAttribute(console_color, 15);
}
//---------- -----------------------------------------M A I N----------------------------------------------------------------
int main()
{
	//---------Introduction-----------
	cout<<"Assignment no: 8\nName: Fatima Imran\nSection: BS CS 1E\nRoll No: 22L-6946"<<endl<<endl;
	//---------Initialization--------
	char message[1000], no[4];
	//--------------Input-----------------
	cout<<"Please enter the message: ";
	Take_Input(message);
	cout<<"Please enter the Roll no: ";
	Take_Input(no);
	cout<<endl;
	//---------------Unique Characters----------------
	cout<<"The unique characters are: "<<Unique_counter(message)<<endl;
	cout<<endl;
	//----------------Count of each Unique Character-------------
	CharDictionary(message);
	cout<<endl;
	//----------------Printing the message in color-------------
	ShowMeTheRainbow(message, no);
	//------------END of Code-------------
	cout<<endl<<endl;
	system("pause");
	return 0;
}
