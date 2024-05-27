#include "complex.h"

    Complex:: Complex()
    {
        this->real=0;
        this->imaginary=0;
    }
    Complex::Complex(int a,int b)
    {
        this->real=a;
        this->imaginary=b;
    }
	
	void Complex:: setReal(int a)
    {
		this->real=a;
	}
	void Complex:: setImaginary(int b)
    {
		this->imaginary=b;
	}
	int Complex:: getReal()
    {
		return this->real;
	}
	int Complex:: getImaginary()
    {
		return this->imaginary;
	}

    Complex Complex:: operator+(Complex c2)
    {
        Complex t;
        t.real=this->real+c2.real;
        t.imaginary=this->imaginary+c2.imaginary;
        return t;
    }
    Complex Complex:: operator+(int a)
    {
        Complex t;
        t.real=this->real+a;
        t.imaginary=this->imaginary+a;
        return t;
    }
    Complex Complex::operator-(Complex c2)
    {
        Complex t;
        t.real=this->real-c2.real;
        t.imaginary=this->imaginary-c2.imaginary;
        return t;
    }
    Complex Complex:: operator-(int a)
    {
        Complex t;
        t.real=this->real-a;
        t.imaginary=this->imaginary-a;
        return t;
    }
    Complex Complex:: operator*(Complex c2)
    {
        Complex t;
        t.real=this->real*c2.real;
        t.imaginary=this->imaginary*c2.imaginary;
        return t;
    }
    Complex Complex:: operator*(int a)
    {
        Complex t;
        t.real=this->real*a;
        t.imaginary=this->imaginary*a;
        return t;
    }
    Complex Complex:: operator/(Complex c2)
    {
        Complex t;
        t.real=this->real/c2.real;
        t.imaginary=this->imaginary/c2.imaginary;
        return t;
    }
    Complex Complex:: operator/(int a)
    {
        Complex t;
        t.real=this->real/a;
        t.imaginary=this->imaginary/a;
        return t;
    }
    int Complex:: operator>(Complex c2)
    {
        if(this->real>c2.real)
        return 1;
        else
        {
            return 0;
        }
    }
    int Complex:: operator<(Complex c2)
    {
        if(this->real>c2.real)
        return 1;
        else
        {
            return 0;
        }
    }
    int Complex:: operator>=(Complex c2)
    {
        if(this->real>c2.real)
        return 1;
        else
        {
            return 0;
        }
    }
    int Complex:: operator<=(Complex c2)
    {
        if(this->real>c2.real)
        return 1;
        else
        {
            return 0;
        }
    }
	void Complex:: Display()
    {
        cout<<"Print by Display";
		//printf("Print by Display:\n");
		printf("complex number: %d + %di\n\n",getReal(),getImaginary());
        //cout<<"Complex number: "<<getReal()"+"<<getImaginary();
	}

// Complex Complex:: operator+(int a,Complex c1)
// {
//     Complex t;
//     int r,i;
//     r=a+c1.getReal();
//     i=a+c1.getImaginary();
//     t.setReal(r);
//     t.setImaginary(i);
//     return t;
// }
// Complex Complex:: operator-(int a,Complex c1)
// {
//     Complex t;
//     int r,i;
//     r=a-c1.getReal();
//     i=a-c1.getImaginary();
//     t.setReal(r);
//     t.setImaginary(i);
//     return t;
// }
// Complex Complex:: operator*(int a,Complex c1)
// {
//     Complex t;
//     int r,i;
//     r=a*c1.getReal();
//     i=a*c1.getImaginary();
//     t.setReal(r);
//     t.setImaginary(i);
//     return t;
// }
// Complex Complex:: operator/(int a,Complex c1)
// {
//     Complex t;
//     int r,i;
//     r=a/c1.getReal();
//     i=a/c1.getImaginary();
//     t.setReal(r);
//     t.setImaginary(i);
//     return t;
// }
