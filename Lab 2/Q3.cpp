#include<iostream>
using namespace std;

int main()
{
	//fatimaimran22
   int n,rem,i;
   cout<<"Enter the integer: ";
   cin>> n;
   for(int num=n; num>0; num=num/10)
   {
    rem=num%10;
    cout<<rem;
   }
   cout<<endl;
   system("pause");
   return 0;
}
