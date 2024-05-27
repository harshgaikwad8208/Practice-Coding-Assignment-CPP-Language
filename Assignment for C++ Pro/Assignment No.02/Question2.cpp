//Write a function to calculate area of shape, for calculating area of triangle, rectangle, circle differently.

#include<stdio.h>

struct Triangle
{
    int base,height;

    Triangle()
    {
        this->base=0;
        this->height=0;
    }
    Triangle(int a,int b)
    {
        this->base=a;
        this->height=b;
    }
    void setBase(int a)
    {
        this->base=a;
    }
    int getBase()
    {
        return this->base;
    }
    void setHeight(int b)
    {
        this->height=b;
    }
    int getHeight()
    {
        return this->height;
    }
};
struct Rectangle
{
    int length,breadth;

    Rectangle()
    {
        this->length=0;
        this->breadth=0;
    }
    Rectangle(int a,int b)
    {
        this->length=a;
        this->breadth=b;
    }
    void setLength(int a)
    {
        this->length=a;
    }
    int getLength()
    {
        return this->length;
    }
    void setBreadth(int b)
    {
        this->breadth=b;
    }
    int getBreadth()
    {
        return this->breadth;
    }
};
struct Circle
{
    int redius;

    Circle()
    {
        this->redius=0;
    }
    Circle(int a)
    {
        this->redius=a;
    }
    void setRedius(int a)
    {
        this->redius=a;
    }
    int getRedius()
    {
        return this->redius;
    }

};
struct Shape
{
   int area(Triangle T1)
   {
    return 0.5*T1.getBase()*T1.getHeight();
   }
   int area(Rectangle R1)
   {
    return R1.getLength()*R1.getBreadth();
   }
   int area(Circle C1)
   {
    return 3.14*C1.getRedius()*C1.getRedius();
   }
   
};

int main()
{
    Triangle T(10,20);
    Rectangle R(10,5);
    Circle C(10);
    Shape S1;
    S1.area(T);
    S1.area(R);
    S1.area(C);
    
    printf("Area of an triangle = %d\n",S1.area(T));
    printf("Area of Recatngle = %d\n",S1.area(R));
	printf("Area of Circle = %d\n",S1.area(C));
}
