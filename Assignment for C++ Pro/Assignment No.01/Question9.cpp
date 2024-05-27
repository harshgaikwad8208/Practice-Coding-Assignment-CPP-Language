#include<iostream>
using namespace std;
struct Complex
{
	int real;
	int imaginary;

    Complex()
    {
        this->real=0;
        this->imaginary=0;
    }
    Complex(int a,int b)
    {
        this->real=a;
        this->imaginary=b;
    }
	
	void setReal(int a)
    {
		this->real=a;
	}
	void setImaginary(int b)
    {
		this->imaginary=b;
	}
	int getReal()
    {
		return this->real;
	}
	int getImaginary()
    {
		return this->imaginary;
	}
    void display()
    {
        cout<<"Complex No: "<<getReal()<<"+"<<getImaginary()<<"i";
    }
};
int main()
{
    Complex c1(10,20);
    c1.display();
}