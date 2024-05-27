#include<iostream>
using namespace std;

class Complex
{
	int real, imaginary;
	public:
		Complex();
		Complex(int,int);
		void setReal(int);
		void setImaginary(int);
		int getReal();
		int getImaginary();
		void display();
		
};