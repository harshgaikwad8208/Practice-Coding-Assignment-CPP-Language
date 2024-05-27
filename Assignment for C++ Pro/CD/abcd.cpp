#include<stdio.h>
struct Print
{
    void display(int a,int b,char* str)
    {
       printf("%d%s\n",(a+b),str);    
    }
    void display(char* str,int a,int d)
    {
        printf("%s%d%d\n",str,a,d);
    }
    void display(int a,char* str,int d)
    {
        printf("%d%s%d\n",a,str,d);
    }
    void display(int a,int b,char* str,int c,int d)
    {
        printf("%d%s%d%d\n",(a+b),str,c,d);
    }

};
int main()
{
    int a=1,b=2,c=3,d=4;
    char str[5]="abc";
    Print A;
    A.display(a,b,str);
    A.display(str,a,d);
    A.display(a,str,d);
    A.display(a,b,str,c,d);
}