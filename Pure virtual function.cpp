//QUESTION
/*Polymorphism is the ability (in programming) to present the same interface for differing
underlying forms (data types). For example, in many languages, integers and floats are
implicitly polymorphic since you can add, subtract, multiply and so on, irrespective of the fact
that the types are different. They're rarely considered as objects in the usual term. But, in that
same way, a class like BigDecimal or Rational or Imaginary can also provide those operations,
even though they operate on different data types.
Now your task is to create a base class Calculator and add 4 pure virtual function add,
subtract, multiply and divide in it. Now create 2 child class SimpleNumbers and
ComplexNumbers and add 4 function add, subtract, multiply and divide in them as well.
Structure of classes are:
Class SimpleNumber
{
int a;
int b;
public:
void add();
void subtract();
void multiply();
void divide();
4|FAST-Department of Computer Science
}
Class ComplexNumber
{
ComplexNum a;
ComplexNum b;
public:
void add();
void subtract();
void multiply();
void divide();
}
//create a struct for ComplexNum
class ComplexNum
{
int real;
int img;
}
For Complex Numbers the Formulas are:
● (a + bi) + (c + di) = (a + c) + (b + d)i (for addition)
● (a + bi) - (c + di) = (a - c) + (b - d)i (for subtraction)
● (a + bi)(c + di) = (ac – bd) + (bc + ad)i (for multiplication)
● (a + bi) / (c + di) = (ac + bd / c^2 + d^2) + (bc – ad / c^2 + d^2) (for division)
Demonstrate the classes in a program that using Calculator pointers. Take input from User
that whether you want to create the object of ComplexNumber or SimpleNumber
(dynamically allocated) and take values for that object from user. This Dynamic object should
be pointed by Calculator Class. Then by using Calculator pointer, call object’s all functions
(add, subtract, multiply and divide) which decides on Runtime that which object’s functions it
call i.e. ComplexNumber or SimpleNumber.*/

//CODE
#include<iostream>
#include<memory> // For smart pointers
using namespace std;

class Calculator
{
public:
    virtual void add() = 0;
    virtual void subtract() = 0;
    virtual void multiply() = 0;
    virtual void divide() = 0;
};

class ComplexNum
{
private:
    int real;
    int img;

public:
    ComplexNum(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    int Getreal()
    {
        return real;
    }
    int Getimag()
    {
        return img;
    }
    void Setreal(int r)
    {
        real = r;
    }
    void Setimg(int i)
    {
        img = i;
    }
};

class SimpleNumber : public Calculator
{
private:
    int a;
    int b;

public:
    SimpleNumber(int A = 0, int B = 0)
    {
        cout << "Simple Number Constructor Called." << endl;
        a = A;
        b = B;
    }
    void add() override
    {
        cout << a << "+" << b << "=" << a + b << endl;
    }
    void subtract() override
    {
        cout << a << "-" << b << "=" << a - b << endl;
    }
    void multiply() override
    {
        cout << a << "*" << b << "=" << a * b << endl;
    }
    void divide() override
    {
        cout << a << "/" << b << "=" << static_cast<float>(a)/b << endl;
    }
};

class ComplexNumber : public Calculator
{
private:
    ComplexNum a;
    ComplexNum b;

public:
    ComplexNumber(int Ar = 0, int Ai = 0, int Br = 0, int Bi = 0)
    {
        cout << "Complex Number Constructor Called" << endl;
        a.Setreal(Ar);
        a.Setimg(Ai);
        b.Setreal(Br);
        b.Setimg(Bi);
    }
    void add() override
    {
        if(a.Getimag() + b.Getimag()>0)
            cout << a.Getreal() + b.Getreal() << "+" << a.Getimag() + b.Getimag() << "i" << endl;
        else
            cout << a.Getreal() + b.Getreal() << a.Getimag() + b.Getimag() << "i" << endl;
    }
    void subtract() override
    {
        if(a.Getimag() - b.Getimag()>0)
            cout << a.Getreal() - b.Getreal() << "+" << a.Getimag() - b.Getimag() << "i" << endl;
        else
            cout << a.Getreal() - b.Getreal() <<a.Getimag() - b.Getimag() << "i" << endl;
    }
    void multiply() override
    {
        int realPart = (a.Getreal() * b.Getreal()) - (a.Getimag() * b.Getimag());
        int imagPart = (a.Getreal() * b.Getimag()) + (a.Getimag() * b.Getreal());
        if(imagPart>0)
            cout << realPart << "+" << imagPart << "i" << endl;
        else
            cout << realPart << imagPart << "i" << endl;
    }
    void divide() override
    {
        int divisor = b.Getreal() * b.Getreal() + b.Getimag() * b.Getimag();
        int realPart = (a.Getreal() * b.Getreal() + a.Getimag() * b.Getimag()) / divisor;
        int imagPart = (a.Getimag() * b.Getreal() - a.Getreal() * b.Getimag()) / divisor;
        cout << realPart+imagPart<< endl;
    }
};

int main()
{
    cout << "fatimaimran22_GitHUB" << endl;

    int choice;
    cout << "You want to make an object of \n1. Complex Number \n2. Simple Number" << endl;
    cin >> choice;

    Calculator *obj=0;

    if (choice == 1)
    {
        obj = new ComplexNumber(2, -19, 4, 2);
    }
    else if (choice == 2)
    {
        obj = new SimpleNumber(1, 2);
    }
    else
    {
        cout << "Invalid choice" << endl;
        return 1;
    }

    obj->add();
    obj->subtract();
    obj->multiply();
    obj->divide();

    delete obj;
    return 0;
}
