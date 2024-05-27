//Find odd and even among the numbers.

#include<stdio.h>
#include<stdlib.h>
void oddeven(int*,int);
int main()
{
    int b[5];
    int*ptr;
    ptr = b;
    oddeven(b,5);
}
void oddeven(int* b,int n)
{
    int i;
    //b = (int*)malloc(n);
    b = new int[n];
    printf("Enter the number.\n");
    for(i = 0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }

    printf("Even numbers in the array are: \n");
   for(i=0; i<n; i++)
   {
     if(b[i]%2==0)
     printf("%d ", b[i]);
   }

   printf("\nOdd numbers in the array are: \n");
   for(i=0; i<n; i++)
   {
     if(b[i]%2!=0)
     printf("%d ", b[i]);
   }

}
