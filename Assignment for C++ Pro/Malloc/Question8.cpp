//Merge two arrays

#include<stdio.h>
#include<stdlib.h>
void resultant();
int main()
{
    resultant();
}
void resultant()
{
    int* arr1, *arr2, *res;
    int i,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    //arr1=(int*)malloc(sizeof(int)*n);
    arr1 = new int[n];
    //arr2=(int*)malloc(sizeof(int)*n);
    arr2 = new int[n];
    //res=(int*)malloc(sizeof(int)*n);
    res = new int[n];

    printf("Enter array1 element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter array2 element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<n;i++)
    {
        res[i]=arr1[i]+arr2[i];
    }

    printf("resultant array:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",*(res+i));
    }

    // free(arr1);
    // free(arr2);
    // free(res);

    delete arr1;
    delete arr2;
    delete res;
    
}