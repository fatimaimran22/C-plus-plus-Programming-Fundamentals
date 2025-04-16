#include<iostream>
using namespace std;

int main()
{
   int n,rem,i;
   cout<<"Enter the integer: ";
   cin>> n;
   for(int num=n; num>0; num=num/10)
   {
    rem=num%10;
    cout<<rem;
   }
   system("pause");
   return 0;
}
