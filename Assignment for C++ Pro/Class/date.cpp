#include<stdio.h>

struct date
{
	int day;
	int month;
	int year;
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
	date d1;
	d1.SetDay(02);
	d1.SetMonth(01);
	d1.SetYear(2002);
	d1.Display();
		printf("Print by Getter:\n");
	printf("DATE - %d/%d/%d\n\n",d1.GetDay(),d1.GetMonth(),d1.GetYear());
	return 0;

}