#include<stdio.h>
#include<string.h>
struct SalesManager
{
    double id;
    char name[50];
    double incentive;
    double target;
    double salary;
};
int main()
{
    SalesManager arr[3];
    int i = 0;
    for(i = 0; i < 1; i++)
    {
        printf("Enter the id number:\n");
        scanf("%d",&arr[i].id);

        printf("Enter the name of HR: \n");
        scanf("%s",&arr[i].name);
        
        printf("Enter the incentive : \n");
        scanf("%d",&arr[i].incentive);

        printf("Enter the target : \n");
        scanf("%d",&arr[i].target);
 
        printf("Enter the salary: \n");
        scanf("%d",&arr[i].salary);
    }
    for(i = 0; i < 1; i++)
    {
        printf("name is %s id is %d in %d is incentive with %d target and salary %d.",arr[i].name,arr[i].id,arr[i].incentive,arr[i].target,arr[i].salary);
    }
}