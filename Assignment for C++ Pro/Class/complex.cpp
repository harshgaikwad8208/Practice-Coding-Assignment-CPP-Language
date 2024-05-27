
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
	
	void SetReal(int a)
    {
		this->real=a;
	}
	void SetImaginary(int b)
    {
		this->imaginary=b;
	}
	int GetReal()
    {
		return this->real;
	}
	int GetImaginary()
    {
		return this->imaginary;
	}

	void Display()
    {
		printf("Print by Display:\n");
		printf("complex number: %d + %di\n\n\n",GetReal(),GetImaginary());
	}
};
int main()
{
	Complex c1;
	Complex c2(10,20);
	
	c1.Display();
		printf("Print by Getter:\n");
	printf("complex number: %d + %di",c2.GetReal(),c2.GetImaginary());
	return 0;
}