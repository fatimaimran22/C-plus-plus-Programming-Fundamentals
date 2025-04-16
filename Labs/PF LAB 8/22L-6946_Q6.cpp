#include<iostream>
#include<iomanip>
using namespace std;
//Kinetic Energy
float KineticEnergy(float m, float v)
{
	float k= (0.5)*m*(v*v);
	return k;
}
int main()
{
	float m,v;
	//KINETIC ENERGY
	cout<<"Enter the mass of the object: ";
	cin>>m;
	cout<<"Enter the velocity of the object: ";
	cin>>v;
	cout<<"The kinetic energy is: "<<KineticEnergy(m,v);
	cout<<endl;
	system("pause");
	return 0;
}
