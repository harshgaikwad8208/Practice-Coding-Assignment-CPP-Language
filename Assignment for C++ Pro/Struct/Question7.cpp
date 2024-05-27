#include<stdio.h>
#include<string.h>
struct product
{
    double id;
    char name[50];
    double quantity;
    double price;
};
int main()
{
    product arr[3];
    int i = 0;
    for(i = 0; i < 1; i++)
    {
        printf("Enter the id number:\n");
        scanf("%d",&arr[i].id);

        printf("Enter the name of product: \n");
        scanf("%s",&arr[i].name);
        
        printf("Enter the quantity: \n");
        scanf("%s",&arr[i].quantity);

        printf("Enter the price: \n");
        scanf("%d",&arr[i].price);
    }
    for(i = 0; i < 1; i++)
    {
        printf("name is product %s id is %d in %d this quantity and price %d.",arr[i].name,arr[i].id,arr[i].quantity,arr[i].price);
    }
}