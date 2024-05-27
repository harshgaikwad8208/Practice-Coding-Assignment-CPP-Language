#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[20];
    double marks;
};
int main()
{
    int i;
    student arr[3];

    for(i = 0; i < 3; i++)
    {
        printf("Enter roll no: \n");
        scanf("%d",&arr[i].roll);

        printf("Enter name: \n");
        scanf("%s",&arr[i].name);

        printf("Enter marks:\n");
        scanf("%d",&arr[i].marks);
    }
    for(i = 0; i < 3; i++)
    {
        printf("roll number %d name of the student %s marks is %d. ",arr[i].roll,arr[i].name,arr[i].marks);
    }
}