#include <iostream>
using namespace std;
struct Distance
{
	int feet;
	int inch;

    Distance()
    {
        this->feet=0;
        this->inch=0;
    }
    Distance(int feet,int inch)
    {
        this->feet=feet;
        this->inch=inch;
    }
    void setFeet(int feet)
    {
        this->feet=feet;
    }
    void setInch(int inch)
    {
        this->inch=inch;
    }
    int getFeet()
    {
        return this->feet;
    }
    int getInch()
    {
        return this->inch;
    }
    void display()
    {
        cout<<"Feet: "<<getFeet()<<"\n"<<"Inch: "<<getInch;
    }

};
int main()
{
	Distance d1(12,7);
    d1.display();
}