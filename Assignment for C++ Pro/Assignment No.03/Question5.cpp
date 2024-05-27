//Write a operator overloading code to overload unary operator for complex and distance.

#include<iostream>

using namespace std;

struct complex 
{
    int real, imaginary;

    complex()
    {
        this->real = 0;
        this->imaginary = 0;
    }

    complex(int a, int b)
    {
        this->real = a;
        this->imaginary = b;
    }

    void setreal(int a) 
    {
        this->real = a;
    }

    void setimaginary(int b) 
    {
        this->imaginary = b;
    }

    complex operator++() 
    {
        complex temp = *this;
        ++temp.real;
        ++temp.imaginary;
        return temp;
    }

    complex operator--() 
    {
        complex temp = *this;
        --temp.real;
        --temp.imaginary;
        return temp;
    }

    complex operator++(int) 
    {
        complex temp = *this;
        this->real++;
        this->imaginary++;
        return temp;
    }

    complex operator--(int) 
    {
        complex temp = *this;
        this->real--;
        this->imaginary--;
        return temp;
    }

    void display()
    {
        
        cout << "\n Real = " << this->real << " Imaginary = " << this->imaginary;
    }
};

int main() 
{
    int a = 20;
    int b = 10;

    complex c1(a, b);
    complex c2;
    complex c3;
    complex c4;
    complex c5;
    
	cout << "\n ----Unary----";
	
    c2 = ++c1;
    c2.display();

    c3 = --c1;
    c3.display();

    c4 = c1++;
    c4.display();

    c5 = c1--;
    c5.display();

    return 0;
}
