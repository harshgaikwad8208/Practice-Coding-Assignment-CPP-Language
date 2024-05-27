#include<stdio.h>
#include<string.h>
void mystrrev(char* );
int main()
{
    char arr[]={"Harsh"};
    mystrrev(arr);
    printf("%s",arr);
}
void mystrrev(char* arr)
{
    int size= strlen(arr);
    for(int i = 0; i < size/2; i++)
    {
        char temp = arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
}