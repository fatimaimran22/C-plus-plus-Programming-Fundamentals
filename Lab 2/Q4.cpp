#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	//fatimaimran22
	int p, r,sum=0,mul=1, i=1;
	for(i=1;i<=10;i++)
	{
		p=rand()%6+1;
		r=rand()%6+1;
		sum=p+r;
		mul=p*r;
		cout<<endl;	
		cout<<i<<"."<<endl;
		cout<<"The face of first dice is: "<<p<<endl;
		cout<<"The face of second dice is: "<<r<<endl;
		cout<<"The sum of the faces of the dice is "<<sum<<endl;
	    cout<<"The product of the faces of the dice is "<<mul<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
