#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int num,a,b,sum,mag,i=1,fac=1;
	float div,c,d;
	char clear;
	cout<<"Please select any number from the following menu. \n 1. Add \n 2. Divide \n 3. Magnitude \n 4. Factorial  \n 5. Exit \n";
	cin>>num;
	while(num<5)
	{
		if(num==1)
		{
			cout<<"You selected ADD \n";
			cout<<"Enter the first number: ";
			cin>>a;
			cout<<"Enter the second number: ";
			cin>>b;
			sum=a+b;
			cout<<"\n The sum of the two numbers is: "<<sum;
	    }
	    else if(num==2)
	    {
	    	cout<<"You selected DIV \n";
	    	cout<<"Enter the first number: ";
			cin>>c;
			cout<<"Enter the second number: ";
			cin>>d;
			div=c/d;
			cout<<"\n The division of the two numbers is: "<<div;
	    }
	    else if(num==3)
	    {
	    	cout<<"You selected MAGNITUDE.\n";
	    	cout<<"Enter the number : ";
			cin>>a;
			mag=sqrt((a)*(a));
			cout<<"\n The magnitude of the number is: "<<mag;
		}
		else if(num==4)
		{
			cout<<"You selected FACTORIAL.\n";
			cout<<"Enter the number: ";
			cin>>a;
			while(i<a+1)
			{
				fac=fac*i;
				i=i+1;
			}
			cout<<"The factorial of a given number is: "<<fac;
		}
	        cout<<"\n \n Press any key to return to menu....";
	        cin>>clear;
	        system("cls");
			cout<<"\n Please select any number from the following menu. \n 1. Add \n 2. Divide \n 3. Magnitude \n 4. Factorial  \n 5. Exit \n";
			cin>>num;
	}
	system("pause");
	return 0;	
}
