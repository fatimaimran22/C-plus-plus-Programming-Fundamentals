#include<iostream>
using namespace std;
float CalculateGPA(float GPE1,int c1, float GPE2, int c2, float GPE3, int c3, float GPE4, int c4, float GPE5, int c5)
{
	float total = c1+c2+c3+c4+c5 ;
	float GPA = ((c1*GPE1)+ (c2 * GPE2)+(c3 * GPE3) + (c4 * GPE4) + (c5 * GPE5))/total;
	return GPA;

}

int main()
{
	float credit1 , credit2 , credit3 , credit4 , credit5;
	char GPE1, GPE2, GPE3, GPE4, GPE5;
	cout << "Input GPE1: ";
	cin >> GPE1;
	cout << "Input GPE2: ";
	cin >> GPE2;
	cout << "Input GPE3: ";
	cin >> GPE3;
	cout << "Input GPE4: ";
	cin >> GPE4;
	cout << "Input GPE5: ";
	cin >> GPE5;

	switch(GPE1)
	{
		case 'a':
			GPE1 = 4;
			break;
		case 'b':
			GPE1 = 3.00;
			break;
		case 'c':
			GPE1 = 2.00;
			break;
		case 'd':
			GPE1 = 1.00;
			break;
		case 'f':
			GPE1 = 0.00;
			break;
	}

	switch(GPE2)
	{
		case 'a':
			GPE2 = 4;
			break;
		case 'b':
			GPE2 = 3.00;
			break;
		case 'c':
			GPE2 = 2.00;
			break;
		case 'd':
			GPE2 = 1.00;
			break;
		case 'f':
			GPE2 = 0.00;
			break;
	}
	
	switch(GPE3)
	{
		case 'a':
			GPE3 = 4;
			break;
		case 'b':
			GPE3 = 3.00;
			break;
		case 'c':
			GPE3 = 2.00;
			break;
		case 'd':
			GPE3 = 1.00;
			break;
		case 'f':
			GPE3 = 0.00;
			break;
	}
	
	switch(GPE4)
	{
		case 'a':
			GPE4 = 4;
			break;
		case 'b':
			GPE4 = 3.00;
			break;
		case 'c':
			GPE4 = 2.00;
			break;
		case 'd':
			GPE4 = 1.00;
			break;
		case 'f':
			GPE4 = 0.00;
			break;
	}
	
	switch(GPE5)
	{
		case 'a':
			GPE5 = 4;
			break;
		case 'b':
			GPE5 = 3.00;
			break;
		case 'c':
			GPE5 = 2.00;
			break;
		case 'd':
			GPE5 = 1.00;
			break;
		case 'f':
			GPE5 = 0.00;
			break;
	}
	
	cout << "\nCredit hours of course 1: ";
	cin >> credit1;
	cout << "Credit hours of course 2: " ;
	cin >> credit2;
	cout << "Credit hours of course 3: ";
	cin >> credit3;
	cout << "Credit hours of course 4: ";
	cin >> credit4;
	cout << "Credit hours of course 5: ";
	cin >> credit5;


	float GPA = CalculateGPA(GPE1,credit1,GPE2,credit2,GPE3,credit3,GPE4, credit4,GPE5,credit5);
	cout << "GPA = " <<GPA<< endl;
	system("pause");
	return 0;
}
