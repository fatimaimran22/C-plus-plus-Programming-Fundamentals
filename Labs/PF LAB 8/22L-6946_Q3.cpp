#include<iostream>
using namespace std;
//Lenght
int getLength(int l)
{
	int c=2*l;
	return c;
}
//Width
int getWidth(int l)
{
	int c=2*l;
	return c;
}
//Area
int getArea(int l, int w)
{
	int a=getLength(l)*getWidth(w);
	return a;
}
//display data
void DisplayData(int l, int w, int Area)
{
	cout<<"The Length is: "<<getLength(l);
	cout<<"\nThe Width is: "<<getWidth(w);
	cout<<"\nThe Area is: "<<getArea(l,w);
}
int main()
{
	int l,w, Area;
	cout<<"Enter the lenght of the rectangle: ";
	cin>>l;	
	cout<<"Enter the width of the rectangle: ";
	cin>>w;	
	DisplayData(l,w,getArea(l,w));
	cout<<endl;
	system("pause");
	return 0;
} 
