// check perfect number in the given range 1 to n?

#include <stdio.h>

int main() {
    int n, num, i, sum;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Perfect numbers from 1 to %d are:\n", n);
    
    for (num = 1; num <= n; num++) 
    {
        i = 1;
        sum = 0;

        while (i < num) 
        {#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

class Vehicle
{
	char name[20];
	double price;
	double mileage;
	char colour[20];
	
	public:
	Vehicle()
	{
		strcpy(	this->name,"Not given");
		this->price=0;
		this->mileage=0;
		strcpy(	this->colour,"Not given");
	}
	Vehicle(char* n, double p,double s, char* sp)
	{
		strcpy(this->name,n);
		this->price=p;
		this->mileage=s;
		strcpy(	this->colour,sp);
	}
	
	void setName(char* n)
	{
		strcpy(this->name,n);
	}
	void setPrice(double p)
	{
		this->price=p;
	}
	void setMileage(double s)
	{
		this->mileage=s;
	}
	void setColour(char* sp)
	{
		strcpy(this->colour,sp);
	}
	
	char* getName()
	{
		return this->name;
	}
	double getPrice()
	{
		return this->price;
	}
	double getMileage()
	{
		return this->mileage;
	}
	char* getColour()
	{
		return this->colour;	
	}
	virtual void display()
	{
		cout<<"\nName: "<<getName()<<"\n"<<"Price: "<<getPrice()<<"\n"<<"Mileage: "<<getMileage()<<"\n"<<"Colour:"<<getColour();
	}
	
	virtual void brake()=0;
};

class Car:public Vehicle
{
	int num_of_door;
	
	public:
	Car()
	{
		this->num_of_door=0;
	}
	Car(char* n, double p,double s, char* sp,int d):Vehicle(n,p,s,sp)
	{
	
		this->num_of_door=d;
	}
	
	
	void setDoor(int d)
	{
		this->num_of_door=d;
	}

	int getDoor()
	{
		return this->num_of_door;
	}
	
	void display()
	{
		Vehicle::display();
		cout<<"\nNumber of Door:"<<getDoor();
	}
	
	void brake()
	{
		cout<<"\nCar brake";
	}
};

class Bus:public Vehicle
{
	int capacity;
		public:

	Bus()
	{
		this->capacity=0;
	}
	Bus(char* n, double p,double s, char* sp,int c):Vehicle(n,p,s,sp)
	{
	
		this->capacity=c;
	}
	
	void setCapacity(int c)
	{
		this->capacity=c;
	}


	int getCapacity()
	{
		return this->capacity;
	}
	void display()
	{
		Vehicle::display();
		cout<<"\nCapacity: "<<getCapacity();
	}
	void brake()
	{
		cout<<"\nBus brake";	
	}
};

class Bike:public Vehicle
{
	int no_wheels;
	
	public:
	Bike()
	{
		this->no_wheels=0;
	}
	Bike(char* n, double p,double s, char* sp,int w):Vehicle(n,p,s,sp)
	{
		
		this->no_wheels=w;
	}

	void setWheels(int d)
	{
		this->no_wheels=d;
	}


	int getWheels()
	{
		return this->no_wheels;
	}
	void display()
	{
		Vehicle::display();
		cout<<"\nNumber of wheels:"<<getWheels();
	}
	void brake()
	{
		cout<<"\nBike brake";	
	}	
};

int main()
{
	Car c("Merc",1500000,15,"Black",4);
	c.display();
	c.brake();
	cout<<"\n";
	
	Bus b("Raptor",200000,40,"Black",30);
	b.display();
	b.brake();
	cout<<"\n";
	
	Bike d("Triumph",150000,36,"Grey",2);
	d.display();
	d.brake();
}

            if (num % i == 0) {
                sum = sum + i;
            }
            i++;
        }

        if (sum == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}