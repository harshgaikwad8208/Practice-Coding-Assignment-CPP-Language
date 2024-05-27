#include<iostream>
using namespace std;
struct Complex 
{
    int real;
    int img;
    Complex() 
    {
        this->real = 0;
        this->img = 0;
    }

    Complex(int a, int b) 
    {
        this->real = a;
        this->img = b;
    }
    void setReal(int a)
	{
		this->real=a;
	}
	void setImg(int b)
	{
		this->img=b;
	}
	int getReal()
	{
		return this->real;
	}
	int getImg()
	{
		return this->img;
	}


    Complex operator++() 
	{
	// Prefix increment operator
		Complex temp;
       temp.real= (this->real)++;
        temp.img = (this->img)++;
        return temp;
    }

    Complex operator++(int a) 
	{
        // Postfix increment operator
        Complex temp;
        temp.real= (this->real)++;
        temp.img = (this->img)++;
        return temp;
    }

    Complex operator--() 
	{
        // Prefix decrement operator
        Complex temp;
       temp.real= (this->real)--;
        temp.img = (this->img)--;
        return temp;
    }

    Complex operator--(int a) 
	{
        // Postfix decrement operator
        Complex temp;
        temp.real= (this->real)--;
        temp.img = (this->img)--;
        return temp;
    }

    void display() 
	{
        std::cout << real << "+" << img << "i" << "\n";
    }
};


int main() 
{
    int a = 10;
    int b = 20;
    Complex c1(a, b);
    // Prefix increment operator
    Complex c3=++c1;
    cout << "Prefix Increment: ";
    c1.display();
    c3.display();
    

	 // Prefix decrement operator
	Complex c5=--c1;
    cout << "Prefix Decrement: ";
    c1.display();
    c5.display();

     // Postfix increment operator
    Complex c4=c1++;
    cout << "Postfix Increment: ";
    c1.display();
    c4.display();
    
    // Postfix decrement operator
    Complex c6=c1--;
    cout << "Postfix Decrement: ";
    c1.display();
    c6.display();

    return 0;
}