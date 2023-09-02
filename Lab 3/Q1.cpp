#include<iostream>
using namespace std;
int main()
{
	//fatimaimran22
	int num , rem, n,p,r,x;
	cout<<"Enter the number: ";
	cin>>num;
	x=num;
	rem=num%10;
	n=rem;
	num=num/10;
	for(int i=1; num>0; i++)
	{
		rem=num%10;
		n=(n*10)+rem;
		num=num/10;
	}
	cout<<n<<endl;
	p=n;
	rem=p%10;
	r=rem;
	p=p/10;
	for(int i=1; p>0; i++)
	{
		rem=p%10;
		r=(r*10)+rem;
		p=p/10;
	}
	cout<<r<<endl;
	if(x==r)
	{
		cout<<"Palindrome"<<endl;
	}
	else
	{
		cout<<"Not a palindrome"<<endl;
	}
	return 0;
}
