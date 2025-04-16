#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int b[10];
	int c[10];
	int i,p=0,z,num,stop=0,no;
	cout<<"--A--"<<endl;
	cout<<"Enter element of A : "<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	cout<<"--B--"<<endl;
	cout<<"Enter element of B: "<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>b[i];
	}
	cout<<endl;
	cout<<"The interesction is "<<endl;
	for(int i=0;i<10;i++)
	{
		for( int z=0; z<10 && (stop==0) ; z++)
	    {	
		    if(a[i]==b[z])
		    {
		    	num++;
		    	stop=1;
		    } 
	    }
	    for(int k=0; k<p ;k++)
	    {
	    	if(a[i]==c[k])
	    	{
	    		no=1;
	    		num=0;
			}	
		}
		if( (num>0) && (no==0) )
	    {
	        c[p]=a[i];
	        p++;
	        num=0;
		}
		no=0;
		stop=0;
	}
	for(int i=0; i<p ;i++)
	{
		cout<<c[i]<<endl;
	}
	system("pause");
	return 0;
}

