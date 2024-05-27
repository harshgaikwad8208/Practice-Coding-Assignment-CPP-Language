//Find sum of all numbers.

#include<stdio.h>
#include<stdlib.h>
void sum(int*, int);
void main()
{
    int b[5];
    int* ptr;
    ptr = b;
    sum(b,5);
    
}
void sum(int* b,int n)
{
    int i = 0,sum= 0;
    //b = (int*)malloc(n);
    b = new int[n];
    printf("Enter the number.\n");
    for(i = 0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i =0; i<n; i++)
    {
        sum = sum+b[i];
    }
    printf("Sum of the array is: %d",sum);
}