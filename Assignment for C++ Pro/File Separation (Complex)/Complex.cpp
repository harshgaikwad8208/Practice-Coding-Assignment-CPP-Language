#include"Complex.h"
#include<iostream>
using namespace std;


	Complex::Complex(int r, int i)
	{
		this->real=r;
		this->imaginary=i;
	}
	
	
	void Complex::setReal(int r) 
	{
		this->real=r; 
	}
	
	void Complex::setImaginary(int i)
	{
		this->imaginary=i;
	}
	
	int Complex::getReal()
	{
		return this->real;
	}
	
	int Complex::getImaginary()
	{
		return this->imaginary;
	}
	
	void Complex::display()
	{
		cout<<"\nComplex number is: "<<real<<imaginary;
	}
