//Sort the array.

#include <stdio.h>
#include<stdlib.h>
int main ()
{
   int num[20];
   int i, j, a, n;
   int* ptr;
   ptr = num;
   //ptr =(int*)malloc(20);
   ptr = new int[20];
   printf("enter number of elements in an array.\n");
   scanf("%d", &n);
   printf("Enter the elements.\n");
   for (i = 0; i < n; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j)
      {
         if (num[i] > num[j])
         {
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in ascending order is:");
   for (i = 0; i < n; ++i)
   {
      printf("\n%d", num[i]);
   }
}