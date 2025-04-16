#include<iostream>
using namespace std;
int confuse2 (int a , int b, int c)
{
	c=c*10;
	a=b+c;
	b=a*c;
	return(a+b+c);
}
int confuse(int&a, int c, int &b)
{
	a=a*a;
	b=b*b;
	c=a+b;
	int d=confuse2(a,b,c);
	return d;
}


int main()
{
	int a=1, b=2,c=3, d;
	d=confuse(c,b,a);
	cout<<a<<" "<<b<<" "<<c<<" "<<d;
	return 0;
}
