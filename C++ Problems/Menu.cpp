#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int cat=4,input=7, cat2=7, cat3=7, bill=0;
	while(cat3!=5 && cat!=0)
	{
		cout<<"\n**************Welcome to the Main Menu**************\n"<<endl;
		cout<<"Press 1 to select TAKEAWAY"<<endl;
		cout<<"Press 2 to select DINE IN"<<endl;
		cout<<"Press 3 to select DELIVERY"<<endl;
		cout<<"Press 0 to select EXIT"<<endl;
		cout<<"\n-----------------------------------------\n"<<endl;
		cout<<"Which category you want to choose?: ";
		cin>>cat;
		if(cat==1)
		{
			while(cat2!=5 && input!=13)
			{
				cout<<"\n**************Welcome to the Takeaway Menu**************\n"<<endl;
				cout<<"____Press 1 to select Burger____"<<endl;
				cout<<"____Press 2 to select Paratha Roll____"<<endl;
				cout<<"____Press 3 to select Pakistani Food____"<<endl;
				cout<<"____Press enter to End Order____"<<endl;
				cout<<"\n-----------------------------------------\n"<<endl;
				cout<<"Which category you want to choose?: ";
				input=getch();
				if(input==13)
				{
					cout<<"\n\nNow, the order is completed and you should calculate the bill. \nThat is just the total amount and the discounter amount:  "<<bill<<endl;
				}
				cin>>cat2;
				switch(cat2)
				{
					case 1:
					{
						while(cat3!=6)
						{
							cout<<"\n Select Burger type: "<<endl;
							cout<<"1) Mack________699"<<endl;
							cout<<"2) Zinger________599"<<endl;
							cout<<"3) Hot________449"<<endl;
							cout<<"4) Patty Burger________699"<<endl;
							cout<<"5) To end order"<<endl;
							cout<<"6) To exit Burger category"<<endl;
							cout<<"\nBurger option: ";
							cin>>cat3;
							switch(cat3)
							{
								case 1:
									bill=bill+699;
									break;
								case 2:
									bill=bill+599;
									break;
								case 3:
									bill=bill+449;
									break;
								case 4:
									bill=bill+699;
									break;
							}
						}
						break;				
					}
					case 2:
					{
						while(cat3!=6 )
						{
							cout<<"\n Select Paratha Roll type: "<<endl;
							cout<<"1) Platter________299"<<endl;
							cout<<"2) Cheese________349"<<endl;
							cout<<"3) Crispy________399"<<endl;
							cout<<"4) Double Trouble________699"<<endl;
							cout<<"5) To end order"<<endl;
							cout<<"6) To exit Burger category"<<endl;
							cout<<"\nParatha Roll option: ";
							cin>>cat3;
							switch(cat3)
							{
								case 1:
									bill=bill+299;
									break;
								case 2:
									bill=bill+349;
									break;
								case 3:
									bill=bill+399;
									break;
								case 4:
									bill=bill+699;
									break;
							}
						}
						break;	
					}
					case 3:
					{
						while(cat3!=6)
						{
							cout<<"\n Select Pakistabi Food Type type: "<<endl;
							cout<<"1) Haleem________199"<<endl;
							cout<<"2) Nihari________199"<<endl;
							cout<<"3) Daal ________149"<<endl;
							cout<<"4) Ghosht________249"<<endl;
							cout<<"5) To end order"<<endl;
							cout<<"6) To exit Burger category"<<endl;
							cout<<"\nParatha Roll option: ";
							cin>>cat3;
							switch(cat3)
							{
								case 1:
									bill=bill+199;
									break;
								case 2:
									bill=bill+199;
									break;
								case 3:
									bill=bill+149;
									break;
								case 4:
									bill=bill+249;
									break;
							}
						}
						break;
					}
				}
	
			}
		}
	}
	
	return 0;
}
