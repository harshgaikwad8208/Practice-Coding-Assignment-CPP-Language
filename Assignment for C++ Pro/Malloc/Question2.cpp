//Search the given number in array.
#include<stdio.h>
#include<stdlib.h>
int search(int*,int);
int main()
{
    int b[5];
    int* ptr;
    ptr = b;
    search(b,5);
}
int search(int* b,int n)
{
    int i = 0,ele;
    //b = (int*)malloc(n);
    b = new int[n];
    printf("Enter the number.\n");
    for(i = 0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }
     printf("Enter element to search: \n");
    scanf("%d", &ele);
     
    for(i=0; i<n; i++)
    {
        if(b[i]==ele)
        {
	    printf("%d found at position %d", ele, i+1);
            return 0;		 
        }
 
    }
	printf("Element  not  found");
}