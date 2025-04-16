#include<iostream>
using namespace std;
int main()
{
	int cards[52]={1,2,3,4,5,6,0,8,9,10,0,10,10,1,2,3,4,5,6,0,8,9,10,0,10,10,1,2,3,4,5,6,0,8,9,10,0,10,10,1,2,3,4,5,6,0,8,9,10,0,10,10};
	int p1[5], p2[5], p3[5], p4[5], index=0, open, player=1,max=0, max_index=0, sum1=0, sum2=0, sum3=0, sum4=0,min, min_index;
	for(int i=0; i<5; i++)        //distribution of cards one by one
	{
		p1[i]=cards[index];
		index++;
		p2[i]=cards[index];
		index++;
		p3[i]=cards[index];      //5 times 4 is 20, so 20 cards is in index are used
		index++;
		p4[i]=cards[index];
		index++;
	}
	open=cards[index];           // here 21 are used
	index++;
	while(index<52)
	{
		if(player==1)
		{
			max=0, max_index=0;
			for(int i=0; i<5; i++)   //find the largest card + it's index
			{
				if(p1[i]>max)
				{
					max=p1[i];
					max_index=i;                             //to store the index no of the card in player's array
				}
			}
			if(max>open)        // choosing the open card
			{
				swap(open,p1[max_index]);
			}
			else
			{                            //drawing the next card + choosing
				open=cards[index];  
				index++;   
				if(max>open)
				{
					swap(open,p1[max_index]);
				}		
			}
			player=2;                                       //mutually exclusive
		} //completes player1's loop
		else if(player==2)
		{
			max=0, max_index=0;
			for(int i=0; i<5; i++)   //find the largest card + it's index
			{
				if(p2[i]>max)
				{
					max=p2[i];
					max_index=i;                             //to store the index no of the card in player's array
				}
			}
			if(max>open)        // choosing the open card
			{
				swap(open,p2[max_index]);
			}
			else
			{                            //drawing the next card + choosing
				open=cards[index];  
				index++;    
				if(max>open)
				{
					swap(open,p2[max_index]);
				}	
				
			}
			player=3;
		}
		else if(player==3)
		{
			max=0, max_index=0;
			for(int i=0; i<5; i++)   //find the largest card + it's index
			{
				if(p3[i]>max)
				{
					max=p3[i];
					max_index=i;                             //to store the index no of the card in player's array
				}
			}
			if(max>open)        // choosing the open card
			{
				swap(open,p3[max_index]);
			}
			else
			{                            //drawing the next card + choosing
				open=cards[index];  
				index++;   
				if(max>open)
				{
					swap(open,p3[max_index]);
				}	
				
			}
			player=4;
		}
		else
		{
			max=0, max_index=0;
			for(int i=0; i<5; i++)   //find the largest card + it's index
			{
				if(p4[i]>max)
				{
					max=p4[i];
					max_index=i;                             //to store the index no of the card in player's array
				}
			}
			if(max>open)        // choosing the open card
			{
				swap(open,p4[max_index]);
			}
			else
			{                            //drawing the next card + choosing
				open=cards[index];  
				index++;    
				if(max>open)
				{
					swap(open,p4[max_index]);
				}				
			}
			player=1;
		}
	}// loop complete
	for(int i=0; i<5; i++)
	{
		cout<<p1[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<p2[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<p3[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<p4[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<5; i++)
	{
		sum1=sum1+p1[i];
		sum2=sum2+p2[i];
		sum3=sum3+p3[i];
		sum4=sum4+p4[i];
	}
	cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<sum4<<endl;
	int sumArray[4]={sum1,sum2,sum3,sum4};
	min=sumArray[0];
	for(int i=0; i<5; i++)
	{
		if(min>sumArray[i])
		{
			min=sumArray[i];
			min_index=i;
		}
	}
	cout<<min<<endl;
	system("pause");
	return 0;
}








