#include<stdio.h>
#include<string.h>
struct HR
{
    double id;
    char name[50];
    double commission;
    double salary;
};
int main()
{
    HR arr[3];
    int i = 0;
    for(i = 0; i < 1; i++)
    {
        printf("Enter the id number:\n");
        scanf("%d",&arr[i].id);

        printf("Enter the name of HR: \n");
        scanf("%s",&arr[i].name);
        
        printf("Enter the commission: \n");
        scanf("%d",&arr[i].commission);
 
        printf("Enter the salary: \n");
        scanf("%d",&arr[i].salary);
    }
    for(i = 0; i < 1; i++)
    {
        printf("name is %s id is %d in %d is commission and salary %d.",arr[i].name,arr[i].id,arr[i].commission,arr[i].salary);
    }
}