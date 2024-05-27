/*Write a functions to add 2 int value, 2 float value, 1 int and 1 float value and vice versa . similary write functions for all other arithmetic operations.*/

#include<stdio.h>
struct Calculator
{
    //*****************************************************************//
    int sum(int x, int y)
    {
        return  (x+y);
    }
    float sum(float a, float b)
    {
        return  (a+b);
    }
    float sum(int x, float b)
    {
        return  (x+b);
    }
    float sum(float a, int y)
    {
        return  (a+y);
    }

    //*****************************************************************//

    int sub(int x, int y)
    {
        return  (x-y);
    }
    float sub(float a, float b)
    {
        return  (a-b);
    }
    float sub(int x, float b)
    {
        return  (x-b);
    }
    float sub(float a, int y)
    {
        return  (a-y);
    }

    //*****************************************************************//

    int multi(int x, int y)
    {
        return  (x*y);
    }
    float multi(float a, float b)
    {
        return  (a*b);
    }
    float multi(int x, float b)
    {
        return  (x*b);
    }
    float multi(float a, int y)
    {
        return  (a*y);
    }

    //*****************************************************************//

    int div(int x, int y)
    {
        return  (x/y);
    }
    float div(float a, float b)
    {
        return  (a/b);
    }
    float div(int x, float b)
    {
        return  (x/b);
    }
    float div(float a, int y)
    {
        return  (a/y);
    }

    //*****************************************************************//
    
};
int main()
{
    Calculator Ans;
    char Ch;
    printf("Display Operation\n");
    printf("\nAddition '+'");
	printf("\nSubstraction '-'");
	printf("\nMultiplication '*'");
	printf("\nDivision '/'");
	printf("\n");
	printf("\nEnter the Operation = ");
	scanf("%c",&Ch);

    if(Ch=='+')
    {
        int x = 10, y = 20;
        float a = 10.5, b = 20.5;
        printf("Ans = %d\n",Ans.sum(x,y));
        printf("Ans = %f\n",Ans.sum(a,b));
        printf("Ans = %f\n",Ans.sum(x,b));
        printf("Ans = %f\n",Ans.sum(a,y));
    }

    if(Ch=='-')
    {
        int x = 10, y = 20;
        float a = 10.5, b = 20.5;
        printf("Ans = %d\n",Ans.sub(x,y));
        printf("Ans = %f\n",Ans.sub(a,b));
        printf("Ans = %f\n",Ans.sub(x,b));
        printf("Ans = %f\n",Ans.sub(a,y));
    }

    if(Ch=='*')
    {
        int x = 10, y = 20;
        float a = 10.5, b = 20.5;
        printf("Ans = %d\n",Ans.multi(x,y));
        printf("Ans = %f\n",Ans.multi(a,b));
        printf("Ans = %f\n",Ans.multi(x,b));
        printf("Ans = %f\n",Ans.multi(a,y));
    }

    if(Ch=='/')
    {
        int x = 10, y = 20;
        float a = 10.5, b = 20.5;
        printf("Ans = %d\n",Ans.div(x,y));
        printf("Ans = %f\n",Ans.div(a,b));
        printf("Ans = %f\n",Ans.div(x,b));
        printf("Ans = %f\n",Ans.div(a,y));
    }

}