
#include<stdio.h>

struct distance
{
	double feet;
	double inch;
	
	void setFeet(int a)
    {
		this->feet=a;
	}
	void setInch(int a)
    {
		this->inch=a;
	}
	double getFeet()
    {
		return this->feet;
	}
	double getInch()
    {
		return this->inch;
	}
	void display()
    {
		printf("Print by Display:\n");
		printf("feet: %.2lf \ninches: %.2lf\n\n\n",getFeet(),getInch());
	}
};
int main()
{
	
	distance d1;
	
	d1.setFeet(2);
	d1.setInch(24);
	d1.display();
	printf("Print by Getter:\n");
	printf("feet: %.2lf \ninches: %.2lf",d1.getFeet(),d1.getInch());
	return 0;
}