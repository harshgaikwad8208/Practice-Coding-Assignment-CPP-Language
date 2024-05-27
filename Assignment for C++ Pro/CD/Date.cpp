#include<stdio.h>

struct date
{
	int day;
	int month;
	int year;

	date()
	{
		this->day=0;
		this->month=0;
		this->year=0;
	}
	date(int a,int b,int c)
	{
		this->day=a;
		this->month=b;
		this->year=c;
	}
	void SetDay(int a)
	{
		this->day=a;
	}
	void SetMonth(int a)
	{
		this->month=a;
	}
	void SetYear(int a)
	{
		this->year=a;
	}
	int GetDay()
	{
		return this->day;
	}
	int GetMonth()
	{
		return this->month;
	}
	int GetYear()
	{
		return this->year;
	}
	void Display()
	{
		printf("Print by Display:\n");
		printf("DATE - %d/%d/%d\n\n",GetDay(),GetMonth(),GetYear());
	}
};

int main()
{
	date d1(02,01,2002);
	
		printf("Print by Getter:\n");
	printf("DATE - %d/%d/%d\n\n",d1.GetDay(),d1.GetMonth(),d1.GetYear());
	return 0;

}