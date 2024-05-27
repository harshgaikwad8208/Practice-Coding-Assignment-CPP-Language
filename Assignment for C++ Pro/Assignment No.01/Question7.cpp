//Date (date, month, year)
#include<iostream>
using namespace std;
#include <stdio.h>
struct Time
{
	int hour;
	int min;
	int second;

    Time()
    {
        this->hour=0;
        this->min=0;
        this->second=0;
    }
    Time(int hour,int min,int sec)
    {
        this->hour=hour;
        this->min=min;
        this->second=second;
    }

    void setHour(int hour)
    {
        this->hour=hour;

    }
    void setMin(int min)
    {
        this->min=min;
    }
    void setSecond(int second)
    {
        this->second=second;
    }

    int getHour()
    {
       return this->hour;

    }
    int getMin()
    {
       return this->min;
    }
    int getSecond()
    {
       return this->second;
    }
    void display()
    {
        cout<<"Time\n";
        cout<<getHour()<<"/"<<getMin()<<"/"<<getSecond();
    }

};


int main()
{
    Time t1(12,07,55);
    t1.display();
}