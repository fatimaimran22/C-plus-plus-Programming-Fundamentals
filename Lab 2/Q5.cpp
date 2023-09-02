#include<iostream>
using namespace std;

int main()
{
	//fatimaimran22
	int f,r,o,room=0,occ=0;
	cout<<"How many floors does the appartment has? :"<<endl;
	cin>>f;
	for(int i=1; i<=f; i++)
	{
		if(i!=13)
		{
			cout<<endl;
		    cout<<"For floor "<<i<<"."<<endl;
		    cout<<"How many rooms are there in the floor? :"<<endl;
		    cin>>r;
		    room=room+r;
		    cout<<"How many rooms are occupied? :"<<endl;
		    cin>>o;
		    occ=occ+o;	
		}
		else
		{
			cout<<endl<<"The appartment does not have floor 13"<<endl;
		}		
	}
	cout<<"The total number of rooms are: "<<room<<endl;
	cout<<"The total number of rooms occupied are: "<<occ<<endl;
	cout<<"The total number of rooms unoccupied are: "<<room-occ<<endl;
	system("pause");
	return 0;
}
