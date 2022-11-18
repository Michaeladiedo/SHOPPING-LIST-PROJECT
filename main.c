#include <stdio.h>
#include <stdlib.h>

int main()
{
   double sugar=100,salt=50,item1_quantity,item2_quantity;
   char item1,item2;

    printf("enter item 1:");
    scanf("%s",&item1);
    printf("enter item 1 quantity:");
    scanf("%lf",&item1_quantity);
    printf("item 1 total cost: %.0lf \n",salt*item1_quantity);

    printf("enter item 2:");
    scanf("%s",&item2);
    printf("enter item 2 quantity:");
    scanf("%lf",&item2_quantity);
    printf("item 2 total cost: %.0lf \n",sugar*item2_quantity);
    printf("all items total cost: %.0lf",salt*item1_quantity+sugar*item2_quantity);





    return 0;
}
