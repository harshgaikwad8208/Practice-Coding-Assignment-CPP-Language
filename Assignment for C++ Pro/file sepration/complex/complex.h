using namespace std;
#include<iostream>
#include<stdio.h>

class Complex
{
	int real;
	int imaginary;

public:
    Complex();
    
    Complex(int a,int b);
    
	
	void setReal(int a);
    
	void setImaginary(int b);
    
	int getReal();
   
	int getImaginary();
  

    Complex operator+(Complex c2);
   
    Complex operator+(int a);

    Complex operator-(Complex c2);
   
    Complex operator-(int a);
 
    Complex operator*(Complex c2);
    
    Complex operator*(int a);
 
    Complex operator/(Complex c2);
   
    Complex operator/(int a);
  
    int operator>(Complex c2);

    int operator<(Complex c2);
    
    int operator>=(Complex c2);
    
    int operator<=(Complex c2);
    
	void Display();
    
};
Complex operator+(int a,Complex c1);

Complex operator-(int a,Complex c1);

Complex operator*(int a,Complex c1);

Complex operator/(int a,Complex c1);
