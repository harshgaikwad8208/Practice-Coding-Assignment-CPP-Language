//Write a operator overloading code to overload relational operator for complex and distance.

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

	int operator>(complex c2) 
	{
        if(this->real > c2.real)
        {
        	return 1;
		}
		else
		{
			return 0;
		}
    }
    
    int operator>=(complex c2) 
	{
        if(this->real > c2.real)
        {
        	return 1;
		}
		else
		{
			return 0;
		}
    }
    
    int operator<(complex c2) 
	{
        if(this->real < c2.real)
        {
        	return 1;
		}
		else
		{
			return 0;
		}
    }
    
    int operator<=(complex c2) 
	{
        if(this->real < c2.real)
        {
        	return 1;
		}
		else
		{
			return 0;
		}
    }
    
    int operator==(complex c2) 
	{
        if(this->real < c2.real)
        {
        	return 1;
		}
		else
		{
			return 0;
		}
    }
    
    int operator!=(complex c2) 
	{
        if(this->real < c2.real)
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
    
    cout<<"\n ----Conditional----";
    
    if(c1>c2)
	{
		cout<<"\n C1 is greater ";
	}
	else
	{
		cout<<"\n C2 is greater";
	}
	if(c1>=c2)
	{
		cout<<"\n C1 is greater than equal to c2 ";
	}
	else
	{
		cout<<"\n C2 is greater than not equal to c2";
	}
    
    if(c1 < c2)
	{
		cout<<"\n C1 is Smaller ";
	}
	else
	{
		cout<<"\n C2 is Smaller";
	}
	
	if(c1 <= c2)
	{
		cout<<"\n C1 is less than equal to c2 ";
	}
	else
	{
		cout<<"\n C2 is less than not equal to c2 ";
	}
	
	if(c1 == c2)
	{
		cout<<"\n C1 is exactly equal to c2 ";
	}
	else
	{
		cout<<"\n C2 is exactly not equal to c2 ";
	}
	
	if(c1 != c2)
	{
		cout<<"\n C1 is not equal to c2 ";
	}
	
}