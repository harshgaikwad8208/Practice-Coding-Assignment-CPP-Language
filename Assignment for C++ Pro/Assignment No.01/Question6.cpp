//Date (date, month, year)
#include<iostream>
using namespace std;
struct Date
{
    int date,month,year;

    Date()
    {
        this->date=0;
        this->month=0;
        this->year=0;
    }
    Date(int date,int month,int year)
    {
        this->date=date;
        this->month=month;
        this->year=year;
    }

    void setDate(int date)
    {
        this->date=date;

    }
    void setMonth(int month)
    {
        this->month=month;
    }
    int setYear(int year)
    {
        this->year=year;
    }

    int getDate()
    {
        return this->date;
    }
    int getMonth()
    {
        return this->month;
    }
    int getYear()
    {
        return this->year;
    }
    void display()
    {
        cout<<getDate()<<"/"<<getMonth()<<"/"<<getYear();
    }
};
int main()
{
    Date d1(12,07,2001);
    d1.display();
}