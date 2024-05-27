// check strong number in the given range 1 to n?

#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int main() {using namespace std;
#include<iostream>

class ElectronicDevice
{
	char name[30];
	double price;
	int model_no;
	char colour[20];
	
	public:
	ElectronicDevice()
	{
		cout<<"\n ElectronicDevice default constructor";
		strcpy(this->name,"Not Given");
		this->price=0;
		this->model_no=0;
		strcpy(this->colour,"Not Given");
	}
	
	ElectronicDevice(char* n,double p,int m,char* c)
	{
		cout<<"\n ElectronicDevice parameterized constructor";
		strcpy(this->name,n);
		this->price=p;
		this->model_no=m;
		strcpy(this->colour,c);
	}
	
	void setName(char* n)
	{
		strcpy(this->name,n);
	}
	
	void setPrice(double p)
	{
		this->price=p;
	}
	
	void setModelNo(int m)
	{
		this->model_no=m;
	}
	
	void setColour(char* c)
	{
		strcpy(this->colour,c);
	}
	
	char* getName()
	{
		return this->name;
	}
	
	double getPrice()
	{
		return this->price;
	}
	
	int getModelNo()
	{
		return this->model_no;
	}
	
	char* getColour()
	{
		return this->colour;
	}
	
	void display()
	{
		cout<<"\n"<<"Name: " <<getName()<<"  Price: "<<getPrice()<<"   Model Number: "<<getModelNo()<<"   Colour: "<<getColour();
	}
};

class Watch: public ElectronicDevice
{
	char dial_colour[30];
	char shape[20];
	
	public:
	Watch(): ElectronicDevice()
	{
		cout<<"\n Watch default constructor";
		strcpy(this->dial_colour,"Not Given");
		strcpy(this->shape,"Not Given");
	}
	
	Watch(char* n,double p,int m,char* c,char* col,char* s): ElectronicDevice(n,p,m,c)
	{
		cout<<"\n Watch parameterized constructor";
		strcpy(this->dial_colour,col);
		strcpy(this->shape,s);
	}
	
	void setDialColour(char* col)
	{
		strcpy(this->dial_colour,col);
	}
	
	void setShape(char* s)
	{
		strcpy(this->shape,s);
	}	
	
	char* getDialColour()
	{
		return this->dial_colour;
	}
	
	char* getShape()
	{
		return this->shape;
	}
	
	void display()
	{
		ElectronicDevice::display();
		cout<<"  Dial Colour: "<<getDialColour()<<"  Shape: "<<getShape();
	}	
};

class Computer: public ElectronicDevice
{
	int s_size;
	int ram;
	int rom;
	
	public:
	Computer(): ElectronicDevice()
	{
		cout<<"\n Computer defailt constructor";
		this->s_size=0;
		this->ram=0;
		this->rom=0;
	}
	
	Computer(char* n,double p,int m,char* c,int a,int e,int d): ElectronicDevice(n,p,m,c)
	{
		cout<<"\n Computer parameterized constructor";
		this->s_size=a;
		this->ram=e;
		this->rom=d;
	}
	
	void setScreenSize(int a)
	{
		this->s_size=a;
	}
	
	void setRam(int e)
	{
		this->ram=e;
	}	
	
	void setRom(int d)
	{
		this->rom=d;
	}
	
	int getScreenSize()
	{
		return this->s_size;
	}
	
	
	int getRam()
	{
		return this->ram;
	}	
	
	int getRom()
	{
		return this->rom;
	}
	
	void display()
	{
		ElectronicDevice::display();
		cout<<"  Screen Size: "<<getScreenSize()<<" RAM: "<<getRam()<<" ROM: "<<getRom();
	}	
};

int main()
{
	Watch w1;
	w1.display();
	Watch w2("MIVI",2000,123,"Black","White","Round");
	w2.display();
	cout<<"\n";
	
	Computer c1;
	c1.display();
	Computer c2("ROG",20000,456,"Black",18,8,512);
	c2.display();
}

    int n, num, i, digit, sum, temp;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d are:\n", n);

    for (num = 1; num <= n; num++) 
    {
        temp = num;
        sum = 0;

        while (temp != 0) 
        {
            digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }

        if (sum == num) 
        {
            printf("%d\n", num);
        }
    }

    return 0;
}