#include<stdio.h>
#include<string.h>
struct printer
{
    void print()
    {
        printf("Firstbit\n");
    }
    void print(char* str)
    {
        printf("%s\n",str);
    }
    void print(char ch)
    {
        printf("%c\n",ch);
    }
    void print(int a)
    {
        printf("%d\n",a);
    }
    void print(float f)
    {
        printf("%lf",f);
    }
};
int main()
{
    printer p1;
    int x = 10;
    float f = 20.8;
    p1.print();
    p1.print("Hello");
    p1.print('A');
    p1.print(x);
    p1.print(f);
}