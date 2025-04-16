#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
//Its the program to play ludo. It's a two player's game, but the rules are pretty simple. You have to reach the end point and whoever finishes the 56 steps first will be the Winner!! Best of luck!!<3
int main()
{
	cout<<"\n";
	cout<<"Fatima Imran"<<endl<<"PF Assignment no 4"<<endl<<"22L-6946"<<endl;
	cout<<"Its the program to play ludo. \n It's a two player's game, but the rules are pretty simple. You have to reach the end point and whoever finishes the 56 steps first will be the Winner!! \n Best of luck!!<3 \n"<<endl;
	int p1=-1, p2=-2,r=0,i=2,step1=0,step2=0;
	char p;
	srand (time(0));
	cout<<"The first one to start the game will be Player 1."<<endl<<"\n The second one to start the game will be Player 2."<<endl<<"\n The both of the players will be able to come on the field if they score \"6\""<<endl;
	
	while(step1<56 && step2<56)
	{
		r=rand()%6+1;
		cout<<"\n Please press 'a' for the player 1. \n  If you'll press b the dice will roll for player 2 and you'll miss your turn.\nThe game will start once you will be on field. \n ______________________________________________________________ \n"<<endl;
		cin>>p;
		cout<<"Please press 'b' for the player 2.\n  If you'll press a the dice will roll for player 2 and you'll miss your turn.\nThe game will start once you will be on field. \n______________________________________________________________ \n"<<endl;
		cin>>p;
		if((p=='a') && (r==6) && (p1==-1))
		{
			p1=0;
			cout<<endl;
			cout<<"Player 1 is on step "<<step1<<" and is on the field."<<endl;	
			cout<<"\n c"<<endl;
		}
		if((p=='b') && (r==6) &&(p2==-2))
		{
			p2=0;
			cout<<endl;
			cout<<"Player 2 is on step "<<step2<<" and is on the field."<<endl;
			cout<<"\n ______________________________________________________________"<<endl;
		}
		if( (p=='a') && (r<=56-step1) && (p1==0) )
		{
			step1=step1+r;
			cout<<"Player 1 is on step: "<<step1<<endl;
			cout<<"\n ______________________________________________________________"<<endl;
		}
		else if((p=='b') && (r<=56-step2) && (p2==0))
		{
			step2=step2+r;
			cout<<"Player 2 is on step: "<<step2<<endl;
			cout<<endl;
			cout<<"\n ______________________________________________________________"<<endl;
		}	
		if(r==6 && p=='a' )
		{
			p='a';		
		}
		else
		{
			p='b';
		}
	}  
	
	if(step1>step2)
	{
		cout<<"\n Player 1 wins. \n Woohoooo!"<<endl;
	} 
	else
	{
		cout<<"\n Player 2 wins. \n Woohoooo!"<<endl;
	}
	 
	system("pause");
	return 0;
}

