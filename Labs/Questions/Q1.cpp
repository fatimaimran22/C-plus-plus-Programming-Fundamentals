#include<iostream>
using namespace std;

int main()
{
	int x=10, y=10;
	char loc;
	cout<<"\nYour current loaction is: x="<<x<<" y="<<y<<endl;
	cout<<"\nPress any key <n,s,e,w>: ";
	cin>>loc;
	while(loc!='t')
	{
		if(loc=='n' || loc=='s' || loc=='e' || loc=='w'  )
		{
			switch(loc)
			{
				case 'n':
						y=y+1;
						break;	
				case 's':
						y=y-1;
						break;
				case 'e':
						x=x+1;
						break;
				case 'w':
						x=x-1;
						break;					
			}
		cout<<"\nYour current loaction is: x="<<x<<" y="<<y<<endl;
		cout<<"\nPress any key <n,s,e,w>: ";
		cin>>loc;
		}
		else
		{
			cout<<"Please choose a valid location"<<endl;
			loc='t';
		}
	}
	
	cout<<endl;
	system("pause");
	return 0;
}




