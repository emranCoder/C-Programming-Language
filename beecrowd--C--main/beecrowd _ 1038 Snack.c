#include <stdio.h>
int main ()
{
    int x,y;
    float snack;

    scanf("%d%d", &x,&y);


    if ( x == 1 )
    {
        snack = y*4.00;
        printf("Total: R$ %.2f\n", snack);
    }else if (x == 2)
    {
        snack = y*4.50;
        printf("Total: R$ %.2f\n", snack);
    }else if (x == 3)
    {
        snack = y*5.00;
        printf("Total: R$ %.2f\n", snack);
    }else if (x == 4)
    {
        snack = y*2.00;
        printf("Total: R$ %.2f\n", snack);
    }else if (x == 5)
    {
        snack = y*1.50;
        printf("Total: R$ %.2f\n", snack);
    }


    return 0;
}
