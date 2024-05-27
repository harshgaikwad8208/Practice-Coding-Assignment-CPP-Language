// Find minimum and maximum number in array.

#include<stdio.h>
#include<stdlib.h>
void minmax(int*,int);
int main()
{
    int b[5];
    int* ptr;
    ptr = b;
    minmax(b,5);
    
}
void minmax(int* ptr,int n)
{
    int i = 0;
    //ptr = (int*)malloc(n);
    ptr = new int[n];
    int min,max;
    printf("Enter the number.\n");
    for(i = 0; i<n; i++)
    {
        scanf("%d",&ptr[i]);
    }

    min=max=ptr[0];
    for(i=0; i<n;i++)
    {
        if(min>ptr[i])
        min=ptr[i];
            if(max<ptr[i])
            max=ptr[i];
    }
    printf("minimum of array is : %d",min);
          printf("\nmaximum of array is : %d",max);
}

