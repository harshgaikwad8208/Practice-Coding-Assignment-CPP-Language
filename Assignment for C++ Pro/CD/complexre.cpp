using namespace std;
#include<iostream>
#include<stdio.h>

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

    int operator>(Complex c2)
    {
        int a =this->real;
        int b =this->c2.real;
        //return t;
        if(a>b)
        {
            return 1;
        }
        else
        {
            return 0;
        }
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
	void Display()
    {
        cout<<"Print by Display";
		//printf("Print by Display:\n");
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
    c3 = c1>c2;
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
	// 	printf("Print by Getter:\n");
	// printf("complex number: %d + %di",c3.GetReal(),c3.GetImaginary());
	// return 0;
}