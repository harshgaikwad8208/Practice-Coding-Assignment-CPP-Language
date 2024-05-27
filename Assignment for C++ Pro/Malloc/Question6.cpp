//Accept array and print only prime numbers of array.

#include<stdio.h>
#include<stdlib.h>
void prime(int*, int);
int main()
{
    int b[5];
    int* ptr;
    ptr = b;
    prime(b,5);
}
void prime(int* b, int m)
{
    int i = 0,n,j,counter;
    //b = (int*)malloc(m);
    b = new int[m];
    printf("Enter the number.\n");
    for(i = 0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }

    printf("All the prime numbers in the array are :\n");
    for(i=0;i<m;i++)
    {
        counter=0;
        for(j=2;j<b[i];j++)
        {
            if(b[i]%j==0)
            {
                counter = 1;
                break;
            }
            if(counter == 0)
            {
                printf("%d\n",b[i]);
            }
        }  
    }
}

