//QUESTION
/*A polynomial P1(x) = x4+2x2+5 has three terms: x4 2x2 and 5. Coefficients of these terms are
1, 2 and 5 respectively while exponents are 4, 2 and 0 respectively. To work with Polynomials,
a
definition of class Polynomial is given below and memory configuration for P1 is shown as
follows:
Your task is to complete the definition of Polynomial class such that the main program runs
successfully. Make sure that your program doesn’t consume extra memory space and it
should not
leak any memory.
void main()
{
int coeff_P1[] = {1,2,5}; //Coefficients for Polynomial P1
int exp_P1[] = {4,2,0}; //Exponents for Polynomial P1
int coeff_P2[] = {4,3}; //Coefficients for Polynomial P2
int exp_P2[] = {6,2}; //Exponents for Polynomial P2
Polynomial P1(3, coeff_P1, exp_P1);//Creates P1 with 3 terms (P1 = 1x^4 + 2x^2 +
5x^0 )
Polynomial P2(2, coeff_P2, exp_P2);//Creates P2 with 2 terms (P2 = 4x^6 + 3x^2)
cout<<"P1 = "<<P1<<endl; //Prints P1 = x^4+2x^2+5
cout<<"P2 = "<<P2<<endl; //Prints P2 = 4x^6+3x^2
if(!P1)
cout<<”P1 is zero”<<endl; /*if the polynomial has only 1 term and its coeff and exp are zero.
i.e.
if p1 = 0.*/
if(P1 != P2)
cout<<”P1 is Not Equal to P2”<<endl;
cout<<++P1<<endl; //adds 1 in all the coefficients.
cout<<P1<<endl;
cout<<P1++<<endl; //adds 1 in all the coefficients.
cout<<P1<<endl;
Polynomial P3 = P1+P2; //Adds P1 and P2 and saves result in P3.You may
consume extra space for resultant Polynomial in Add function
cout<<"P3 = "<<P3<<endl; //Prints P3 = 4x^6+x^4+5x^2+5
P3 = P1+2;
cout<<"P3 = "<<P3<<endl*/

//CODE

#include<iostream>
using namespace std;

class Polynomial
{
	friend ostream& operator<<(ostream&, const Polynomial&);
	friend Polynomial operator+(const int&, const Polynomial&);

private:
	int totalTerms;//Total terms in a Polynomial
	int* coeff;//to save array of coefficients
	int* exp; //to save array of exponents
public:
	Polynomial(int, int*, int*);
	~Polynomial();

	bool operator!();
	bool operator!=(const Polynomial&);
	Polynomial operator+(const int& no)
	{
		Polynomial temp = *this;
		for (int i = 0; i < totalTerms; i++)
		{
			temp.coeff[i] = no + coeff[i];
		}
		return temp;
	}
	Polynomial operator+(const Polynomial&);
	Polynomial& operator=(const Polynomial&);
	Polynomial(const Polynomial&);
	Polynomial& operator++();
	Polynomial operator++(int);
};

//////////////////////////////.....Member Functions....////////////////////////////////

Polynomial::Polynomial(int t = 0, int* coeff_P1 = 0, int* exp_P1 = 0)
{
	totalTerms = t;

	coeff = new int[t];
	for (int i = 0; i < t; i++)
	{
		coeff[i] = coeff_P1[i];
	}

	exp = new int[t];
	for (int i = 0; i < t; i++)
	{
		exp[i] = exp_P1[i];
	}
}
Polynomial::~Polynomial()
{
	delete[] exp;
	delete[] coeff;
}
bool Polynomial::operator!()
{
	bool e = 1, c = 1;
	for (int i = 0; i < totalTerms; i++)
	{
		if (coeff[i] != 0)
			c = 0;
	}

	for (int i = 0; i < totalTerms; i++)
	{
		if (exp[i] != 0)
			e = 0;
	}


	if (totalTerms && e && c)
		return 1;
	else
		return 0;
}
bool Polynomial::operator!=(const Polynomial& rhs)
{
	if (totalTerms != rhs.totalTerms)
		return 1;
	else
	{
		bool isEqual = 1;
		for (int i = 0; i < totalTerms; i++)
		{
			if (coeff[i] != rhs.coeff[i])
				return 1;
		}

		for (int i = 0; i < totalTerms; i++)
		{
			if (exp[i] != rhs.exp[i])
				return 1;
		}
	}
	return 0;
}
Polynomial::Polynomial(const Polynomial& rhs)
{
	totalTerms = rhs.totalTerms;

	coeff = new int[totalTerms];
	for (int i = 0; i < totalTerms; i++)
	{
		coeff[i] = rhs.coeff[i];
	}

	exp = new int[totalTerms];
	for (int i = 0; i < totalTerms; i++)
	{
		exp[i] = rhs.exp[i];
	}
}
Polynomial& Polynomial::operator=(const Polynomial& rhs)
{
	if (this != &rhs)
	{
		delete[] coeff;
		delete[] exp;
		totalTerms = rhs.totalTerms;

		coeff = new int[totalTerms];
		for (int i = 0; i < totalTerms; i++)
		{
			coeff[i] = rhs.coeff[i];
		}

		exp = new int[totalTerms];
		for (int i = 0; i < totalTerms; i++)
		{
			exp[i] = rhs.exp[i];
		}
	}
	return *this;
}
Polynomial Polynomial::operator+(const Polynomial& rhs)
{
	int count = 0;
	for (int i = 0; i < totalTerms; i++)
	{
		int p = 0;
		for (int j = 0; j < totalTerms && p == 0; j++)
		{
			if (exp[i] == rhs.exp[j])
				p = 1;
		}
		if (p == 0)
		{
			count++;
		}
	}

	int size = rhs.totalTerms + count;

	int* exp_temp = new int[size];
	int k = 0;

	//----------------Exponent array-------------------


	for (int i = 0; i < totalTerms; i++)
	{
		int p = 0;
		for (int j = 0; j < totalTerms && p == 0; j++)
		{
			if (exp[i] == rhs.exp[j])
				p = 1;
		}
		if (p == 0)
		{
			exp_temp[k] = exp[i];
			k++;
		}
	}
	for (int i = 0; i < rhs.totalTerms && k < size; i++)
	{
		exp_temp[k] = rhs.exp[i];
		k++;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			int a = exp_temp[j];
			int b = exp_temp[j + 1];
			if (a <= b)
			{
				swap(exp_temp[j], exp_temp[j + 1]);

			}
		}
	}

	int* coeff_temp = new int[size];

	for (int i = 0; i < size; i++)
	{
		int a = 0, b = 0;
		int j = 0;
		while (j < totalTerms && a == 0)
		{
			if (exp_temp[i] == exp[j])
			{
				a = coeff[j];
			}
			j++;
		}
		int k = 0;
		while (k < rhs.totalTerms && b == 0)
		{
			if (exp_temp[i] == rhs.exp[k])
			{
				b = rhs.coeff[k];
			}
			k++;
		}
		coeff_temp[i] = a + b;
	}
	Polynomial temp(size, coeff_temp, exp_temp);
	return temp;
}
Polynomial& Polynomial::operator++()
{
	for (int i = 0; i < totalTerms; i++)
	{
		coeff[i]++;
	}
	return *this;
}
Polynomial Polynomial::operator++(int)
{
	Polynomial temp = *this;
	for (int i = 0; i < totalTerms; i++)
	{
		coeff[i]++;
	}
	return temp;
}


/////////////////////////////.....Global Functions..../////////////////////////////////

ostream& operator<<(ostream& fout, const Polynomial& rhs)
{
	if (rhs.coeff != 0 && rhs.exp != 0 && rhs.totalTerms != 0)
	{
		for (int i = 0; i < rhs.totalTerms; i++)
		{
			if (rhs.coeff[i] != 1)
			{
				if (rhs.coeff != 0)
				{
					fout << rhs.coeff[i] << "x";
					if (rhs.exp[i] != 0)
					{
						cout << "^" << rhs.exp[i];
					}
				}


			}
			else
			{
				fout << "x^" << rhs.exp[i];
			}

			if (i < rhs.totalTerms - 1)
			{
				cout << " + ";
			}
		}

		cout << endl;
	}
	else
	{
		fout << "0" << endl;
	}
	return fout;
}
Polynomial operator+(const int& no, const Polynomial& rhs)
{
	Polynomial temp = rhs;
	for (int i = 0; i < rhs.totalTerms; i++)
	{
		temp.coeff[i] = no + rhs.coeff[i];
	}
	return temp;
}

//////////////////////////////////////////////////////////////////////////////////////

int main()
{
	cout << "DSA LAB 1\nFatima Imran\n22L-6946\nTask 4" << endl;

	int coeff_P1[] = { 1,2,5 };	//Coefficients for Polynomial P1
	int exp_P1[] = { 4,2,0 };	//Exponents for Polynomial P1

	int coeff_P2[] = { 4,3 };	//Coefficients for Polynomial P2
	int exp_P2[] = { 6,2 };	//Exponents for Polynomial P2

	Polynomial P1(3, coeff_P1, exp_P1);//Creates P1 with 3 terms (P1 = 1x^4 + 2x^2 + 5x^0 )
	Polynomial P2(2, coeff_P2, exp_P2);//Creates P2 with 2 terms (P2 = 4x^6 + 3x^2)

	cout << "P1 = " << P1 << endl; //Prints P1 = x^4+2x^2+5
	cout << "P2 = " << P2 << endl; //Prints P2 = 4x^6+3x^2

	if (!P1)
		cout << "P1 is zero" << endl;/*if polynomial has only 1 term and its coeff and exp are zero. i.e. if p1 = 0.*/

	if (P1 != P2)
		cout << "P1 is Not Equal to P2" << endl;

	Polynomial P3 = P1 + P2;	//Adds P1 and P2 and saves result in P3.You may consume extra space for resultant Polynomial in Add function 
	cout << "\nP3 = " << P3 << endl;	//Prints P3 = 4x^6+x^4+5x^2+5

	P3 = P1 + 2;  
	cout << "P3 = " << P3 << endl;

	cout << "++P1 = " << ++P1 << endl;//adds 1 in all the coefficient.
	cout << "P1 = " << P1 << endl;

	cout << "P1++ = " << P1++ << endl; //adds 1 in all the coefficient.
	cout << "P1 = " << P1 << endl;

	system("pause");
	return 0;
}
