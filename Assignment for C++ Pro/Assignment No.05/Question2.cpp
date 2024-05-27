#include<stdio.h>

struct Triangle
{
	double height;
	double base;
	
	//Default constructor
	
	Triangle()
	{
		this->height = 0;
		this->base = 0;
	}
	
	//Parametaries constructor
	
	Triangle(double h,double b)
	{
		this->height = h;
		this->base = b;
	}
	
	//All setters
	
	void setheight(int h)
	{
		this->height = h;
	}
	void setbase(int b)
	{
		this->base = b;
	}
	
	//All getters
	
	double getheight()
	{
		return this->height;
	}
	double getbase()
	{
		return this->base;
	}
	
	void display()
	{
		printf("\n Height = %lf || Base = %lf",this->height,this->base);
	}
};

struct Rectangle
{
	double length;
	double breadth;
	
	//Default constructor
	Rectangle()
	{
		this->length = 0;
		this->breadth = 0;
	}
	
	//Parametaries constructor
	Rectangle(double l, double b)
	{
		this->length = l;
		this->breadth = b;
	}
	
	//All setters
	
	void setlength(double h)
	{
		this->length = h;
	}
	void setbreadth(double b)
	{
		this->breadth = b;
	}
	
	//All getters
	
	double getlength()
	{
		return this->length;
	}
	double getbreadth()
	{
		return this->breadth;
	}
	
	void display()
	{
		printf("\n Length = %lf || Breadth = %lf",this->length,this->breadth);
	}
};

struct Circle
{
	double radius;
	
	//Default constructor
	Circle()
	{
		this->radius = 0;
		
	}
	
	//Parametaries constructor
	Circle(double r)
	{
		this->radius = r;
	}
	
	//All setters
	
	void setradius(double r)
	{
		this->radius = r;
	}
	
	//All getters
	
	double getradius()
	{
		return this->radius;
	}
	
	void display()
	{
		printf("\n Radius = %lf",this->radius);
	}
};

struct Shape
{
	double area(Triangle &T)
	{
		return (0.5*(T.getbase()*(T.getheight())));
	}
	double area(Rectangle &R)
	{
		return ((R.getlength()*(R.getbreadth())));
	}
	double area(Circle &C)
	{
		return ((C.getradius()*(C.getradius())*(3.14)));
	}
};

int main()
{
	Triangle T(1.0,5.0);
	Shape S;
	T.display();
	printf("\n Area of Triangle : %0.2lf",S.area(T));
	
	Rectangle R(10.0,5.0);
	R.display();
	printf("\n Area of Rectangle : %0.2lf",S.area(R));
	
	Circle C(5.0);
	C.display();
	printf("\n Area of Circle : %0.2lf",S.area(C));
}

