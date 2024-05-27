#include<stdio.h>

struct time
{
	int hour;
	int minute;
	int second;
	void SetHour(int a)
    {
		this->hour=a;
	}
	void SetMinute(int a)
    {
		minute=a;
	}
	void SetSecond(int a)
    {
		second=a;
	}
	int GetHour()
    {
		return hour;
	}
	int GetMinute()
    {
		return minute;
	}
	int GetSecond()
    {
		return second;
	}
	void Display()
    {
		printf("Print by Display:\n");
	printf("TIME - %d : %d : %d\n\n\n",GetHour(),GetMinute(),GetSecond());
	}
	
};

int main()
{
	time t1;
	t1.SetHour(1);
	t1.SetMinute(30);
	t1.SetSecond(5);
	t1.Display();
	printf("Print by Getter:\n");
	printf("TIME - %d : %d : %d",t1.GetHour(),t1.GetMinute(),t1.GetSecond());
	return 0;
}