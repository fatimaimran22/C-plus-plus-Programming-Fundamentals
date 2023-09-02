#include<iostream>
using namespace std;

int main()
{
	//fatimaimran22
	int N, i, F;
	cout<<"Please Enter the number: "<<endl;
	cin>>N;
	cout<<"The factors are ";
	if(N>0)
	{
		for(i=1; i<=N; i=i+1)
	    {
		if(N%i==0)
		  {
			cout<<i<<" ";
		  }
	    }
	}
	else
	{
		cout<<"not possible as there aren't any factors of negative number.";
    }
	
	cout<<endl;
	system("pause");
	return 0;
}
