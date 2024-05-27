// //Write a operator overloading code to overload all the arithmetic operators 
// to add 2 complex no, 1 complex no and int value and one non member function to add int and complex no.

using namespace std;
#include<iostream>
#include<stdio.h>

class Complex
{
	int real;
	int imaginary;

public:
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

    Complex operator+(Complex c2)
    {
        Complex t;
        t.real=this->real+c2.real;
        t.imaginary=this->imaginary+c2.imaginary;
        return t;
    }
    Complex operator+(int a)
    {
        Complex t;
        t.real=this->real+a;
        t.imaginary=this->imaginary+a;
        return t;
    }
    Complex operator-(Complex c2)
    {
        Complex t;
        t.real=this->real-c2.real;
        t.imaginary=this->imaginary-c2.imaginary;
        return t;
    }
    Complex operator-(int a)
    {
        Complex t;
        t.real=this->real-a;
        t.imaginary=this->imaginary-a;
        return t;
    }
    Complex operator*(Complex c2)
    {
        Complex t;
        t.real=this->real*c2.real;
        t.imaginary=this->imaginary*c2.imaginary;
        return t;
    }
    Complex operator*(int a)
    {
        Complex t;
        t.real=this->real*a;
        t.imaginary=this->imaginary*a;
        return t;
    }
    Complex operator/(Complex c2)
    {
        Complex t;
        t.real=this->real/c2.real;
        t.imaginary=this->imaginary/c2.imaginary;
        return t;
    }
    Complex operator/(int a)
    {
        Complex t;
        t.real=this->real/a;
        t.imaginary=this->imaginary/a;
        return t;
    }
    int operator>(Complex c2)
    {
        if(this->real>c2.real)
        return 1;
        else
        {
            return 0;
        }
    }
    int operator<(Complex c2)
    {
        if(this->real>c2.real)
        return 1;
        else
        {
            return 0;
        }
    }
    int operator>=(Complex c2)
    {
        if(this->real>c2.real)
        return 1;
        else
        {
            return 0;
        }
    }
    int operator<=(Complex c2)
    {
        if(this->real>c2.real)
        return 1;
        else
        {
            return 0;
        }
    }
	void Display()
    {
        cout<<"Print by Display"<<"\n";
		printf("complex number: %d + %di\n\n",getReal(),getImaginary());
        //cout<<"Complex number: "<<getReal()"+"<<getImaginary();
	}
};
Complex operator+(int a,Complex c1)
{
    Complex t;
    int r,i;
    r=a+c1.getReal();
    i=a+c1.getImaginary();
    t.setReal(r);
    t.setImaginary(i);
    return t;
}
Complex operator-(int a,Complex c1)
{
    Complex t;
    int r,i;
    r=a-c1.getReal();
    i=a-c1.getImaginary();
    t.setReal(r);
    t.setImaginary(i);
    return t;
}
Complex operator*(int a,Complex c1)
{
    Complex t;
    int r,i;
    r=a*c1.getReal();
    i=a*c1.getImaginary();
    t.setReal(r);
    t.setImaginary(i);
    return t;
}
Complex operator/(int a,Complex c1)
{
    Complex t;
    int r,i;
    r=a/c1.getReal();
    i=a/c1.getImaginary();
    t.setReal(r);
    t.setImaginary(i);
    return t;
}
int main()
{
	Complex c1(10,20);
	Complex c2(5,2);
    Complex c3;
    //c3 = c1.add(c2);
    c3 = c1+c2;
    Complex c4;
    int a = 10,b = 15;
    //c4 = c1.add(a);
    c4 = c1 + 10;
    Complex c5;
    //c5 = add(b,c1); 
    c5 = b+c1;
    Complex c6;
    //c6 = c1.sub(c2);
    c6 = c1-c2;
    Complex c7;
    //c7 = c1.sub(5);
    c7 = c1-5;
    Complex c8;
    //c8 = sub(10,c1);
    c8 = 10-c1;
    Complex c9;
    //c9 = c1.multi(c2);
    c9 = c1*c2;
    Complex c10;
    //c10 = c1.multi(10);
    c10 = c1*10;
    Complex c11;
    //c11 = multi(5,c1);
    c11 = 5*c1;
    Complex c12;
    //c12 = c1.div(c2);
    c12 = c1/c2;
    Complex c13;
    //c13 = c1.div(10);
    c13 = c1/10;
    Complex c14;
    //c14 = div(5,c1);
    c14 = 5/c1;
    Complex c15;
    
    if(c1>c2)
    {
        printf("c1 is greater than c2\n");
    }
    else
    {
        printf("c2 is less than c1\n");
    }
    if(c2<c1)
    {
        printf("c1 is greater than c2\n");
    }
    else
    {
        printf("c2 is less than c1\n");
    }
    if(c1>=c2)
    {
        printf("c1 is greater than or equal to c2\n");
    }
    else
    {
        printf("c2 is less than or equal to c1\n");
    }
    if(c1<=c2)
    {
        printf("c1 is less than or equal to c2\n");
    }
    else
    {
        printf("c2 is greater than or equal to c1\n");
    }
    cout<<"\n";
	
	c1.Display();
    c2.Display();
    c3.Display();
    c4.Display();
    c5.Display();
    c6.Display();
    c7.Display();
    c8.Display();
    c9.Display();
    c10.Display();
    c11.Display();
    c12.Display();
    c13.Display();
    c14.Display();
    //c15.Display();
	// 	printf("Print by Getter:\n");
	// printf("complex number: %d + %di",c3.GetReal(),c3.GetImaginary());
	// return 0;
}