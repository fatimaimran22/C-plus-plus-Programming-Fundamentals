#include<iostream>
using namespace std;

int main()
{
	float P=1, Power;
	int X, Y;
	cout<<"Please enter the number: "<<endl;
	cin>>X;
	cout<<"Please enter the exponent: "<<endl;
	cin>>Y;
	if(Y>0)
	{
		cout<<X<<" power "<< Y<< " of Number is ";
		for(float i=1; i<=Y;i++)
		{
	       P=P*X;
	    }
		cout<<P<<endl;
	}
	else if(Y<0)
	{
		Y=Y*(-1);
		cout<<X<<" power "<< Y<< " of Number is ";
		for(float i=1; i<=Y;i++)
		{
			P=P*X;
		}
		Power=1/P;	
		cout<<Power<<endl ;	
	}
	else
	{
		cout<<X <<" power "<< Y<< " of Number is "<<"1"<<endl;

	}
	cout<<endl;
	system("pause");
	return 0;
}
