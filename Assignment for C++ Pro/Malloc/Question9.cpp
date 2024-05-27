//Reverse the given array.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int b[5];
    int i = 0;
    int* ptr;
    ptr = b;
    //ptr = (int*)malloc(5);
    ptr = new int[5];
    printf("Enter the element of array.\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("\n%d",b[i]);
    }
}