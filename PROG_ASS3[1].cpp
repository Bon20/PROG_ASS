//Heron's Formula
//Bonifacio M. de Robles Jr.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float area,s,A,B,C;
	
	cout << "This program calculates the area of a triangle"<< endl;
	cout << "What is the length of side A, B, and C respectively?"<<endl;
	cout << endl;
	cout << "Input the length of the 1st side:"<<endl;
	cin >> A;
	cout << "Input the length of the 2nd side:"<<endl;
	cin >> B;
	cout << "Input the length of the 3rd side:"<<endl;
	cin >> C;
	
	s = (A+B+C)/2;
	area= sqrt(s*(s-A)*(s-B)*(s-C));
	
	cout<<"The area of the triangle is "<< area << ".\n";
	return 0;
}
