//Question:
/*Implement a class named Employee. The class should keep the following information in private
member variables:
●Employee name (a cstring which can contain at most 50 characters)
●Employee number (an integer)
●Hire date (a cstring which can contain at most 20 characters)
Implement the parameterized constructor and the appropriate getter and setter
functions for the Employee class.
Next, implement a class named ProductionWorker that is derived from the Employee
class. The ProductionWorker class should have member variables to hold the following
information:
● Shift (an integer)
● Hourly pay rate (a double)
The workday is divided into two shifts: day and night. The shift variable will hold an integer
value representing the shift that the employee works. The day shift is shift 1 and the night
shift is shift 2. Implement a parameterized constructor for the ProductionWorker class
which should take the initial values of all attributes. Also implement the appropriate getter
and setter functions. Demonstrate the classes by writing a program that uses a
ProductionWorker object.
Task 2.2:
In a particular factory a shift supervisor is a salaried employee who supervises a shift. In
addition to a salary, the shift supervisor earns a yearly bonus when his or her shift meets
production goals. Implement a ShiftSupervisor class that is derived from the Employee class
you created in Task 2.1.
The ShiftSupervisor class should have a member variable that holds the annual salary (a
double) and a member variable that holds the annual production bonus (a double) that a shift
supervisor has earned. Write a parameterized constructor and the appropriate getter and
setter functions for the class. Demonstrate the class by writing a program that uses a
ShiftSupervisor object.*/


//CODE
#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	private:
		string name;
		int number;
		string Hire_date;
	public:
		Employee()
		{
			number = 0;
		}
		Employee(string n, int no, string h)
		{
			cout << "Employee Overload Constructor Called.";
			name = n;
			number = no;
			Hire_date = h;
		}
		int Get_number()
		{
			return number;
		}
		string Get_name()
		{
			return name;
		}
		string Get_Hire_date()
		{
			return Hire_date;
		}
		void Set_number(int n)
		{
			number = n;
		}
		void Set_name(string n)
		{
			name = n;
		}
		void Set_Hire_date(string d)
		{
			Hire_date = d;
		}
};

class ProductionWorker:public Employee
{
	private:
		int Shift; //Day=1 Night=2
		double HourlyPayRate;
	public:
		ProductionWorker():Employee()
		{
			Shift = 0;
			HourlyPayRate = 0;
		}
		ProductionWorker(string n, int no, string h, int s, double hr) :Employee(n, no, h)
		{
			cout << "\nProductionWorker Overload Constructor Called." << endl;
			Shift = s;
			HourlyPayRate = hr;
		}
		int GetShift()
		{
			return Shift;
		}
		double GetHourlyPayRate()
		{
			return HourlyPayRate;
		}
		void SetShift(int s)
		{
			Shift = s;
		}
		void SetHourlyPayRate(double hr)
		{
			HourlyPayRate = hr;
		}
};

class ShiftSupervisor :public Employee
{
	private:
		double Annual_Salary;
		double AnuualProductionBonus;
	public:
		ShiftSupervisor():Employee()
		{
			Annual_Salary = 0;
			AnuualProductionBonus = 0;
		}
		ShiftSupervisor(string n, int no, string h, double as, double ap) :Employee(n, no, h)
		{
			cout << "\nShiftSupervisor Overload Constructor Called." << endl;
			Annual_Salary = as;
			AnuualProductionBonus = ap;
		}
		double Get_Annual_Salary()
		{
			return Annual_Salary;
		}
		double Get_AnuualProductionBonus()
		{
			return AnuualProductionBonus;
		}
		void Set_Annual_Salary(double as)
		{
			Annual_Salary = as;
		}
		void Set_AnuualProductionBonus(double ap)
		{
			AnuualProductionBonus = ap;
		}
};

int main()
{
	cout << "fatimaimran22_GitHUb" << endl;

	ProductionWorker pw("Abdul Wahab", 3020966621, "8,8,2003", 2, 100000);
	ShiftSupervisor ss("Fatima Imran", 3204841551, "22,10,2004", 10000, 1000);
	system("pause");
}
