// Write a operator overloading code to overload logical operator for complex and distance.

using namespace std;
#include<iostream>

struct complex 
{
    int real, imaginary;

complex()
{
		this->real=0;
		this->imaginary=0;
}
complex(int a, int b)
{
		this->real=a;
		this->imaginary=b;
}

	void setreal(int a) 
	{
        this->real = a;
    }

    void setimaginary(int b) 
	{
        this->imaginary = b;
    }
	
	int operator&&(complex c2) 
	{
        if(this->real && c2.real)
        {
        	return 1;
		}
		else
		{
			return 0;
		}
    }
    
    int operator||(complex c2) 
	{
        if(this->real && c2.real)
        {
        	return 1;
		}
		else
		{
			return 0;
		}
    }
};

int main() 
{
    complex c1(10, 20);
    complex c2(5, 2);
    
    cout<<"\n ----Logical----";
	
	if(c1 && c2)
	{
		cout<<"\n positive ";
	}
	else
	{
		cout<<"\n negative ";
	}
	
	if(c1 || c2)
	{
		cout<<"\n positive ";
	}
	else
	{
		cout<<"\n negative ";
	}
}