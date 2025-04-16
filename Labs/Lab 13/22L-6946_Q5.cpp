#include<iostream>
#include<fstream>
using namespace std;
void ReadtwoNumbers()
{
	int x=0;
	fstream data;
	data.open("22L-6946_Q7.txt",ios::in);
	while (!data.eof())
    {
        data >> x;
        cout<<x<<endl;
    }
	data.close();
}

int main()
{
	ReadtwoNumbers();
	system("pause");
	return 0;
}
