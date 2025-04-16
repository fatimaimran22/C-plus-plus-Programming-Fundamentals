#include <iostream>
using namespace std;

int main ()
{
	char letter;
	cout<<"Enter the Letter:  ";
	cin >> letter;
	if(letter>64 && letter<91 || letter>96 && letter<123)
	cout<<"It's an alphabet :D";
	else
	cout<<"It's not an alphabet :P";
	
	return 0;
}
