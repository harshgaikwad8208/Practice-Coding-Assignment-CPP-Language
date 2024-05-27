#include<stdio.h>
#include<string.h>
void mystrcat(char*, char*);
int main()
{
    char arr[]={"Harshal"};
    char brr[]={"Gaikwad"};
    mystrcat(arr,brr);
    printf("Concatenated Array : %s",arr);
}
void mystrcat(char* arr,char* brr)
{
    int size = strlen(arr);
    int i =0;
    while(brr[i] != '\0')
    { 
        arr[size+i]=brr[i];
        i++;
    }
    arr[size+i]='\0';

}