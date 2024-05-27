#include<stdio.h>
#include<string.h>
struct admin
{
    double id;
    char name[50];
    double allowance;
    double salary;
};
int main()
{
    admin arr[3];
    int i = 0;
    for(i = 0; i < 1; i++)
    {
        printf("Enter the id number:\n");
        scanf("%d",&arr[i].id);

        printf("Enter the name of employee: \n");
        scanf("%s",&arr[i].name);
        
        printf("Enter the allowance: \n");
        scanf("%d",&arr[i].allowance);
 
        printf("Enter the salary: \n");
        scanf("%d",&arr[i].salary);
    }
    for(i = 0; i < 1; i++)
    {
        printf("name is %s id is %d in %d this allowance and salary %d.",arr[i].name,arr[i].id,arr[i].allowance,arr[i].salary);
    }
}