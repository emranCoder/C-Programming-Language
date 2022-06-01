#include<stdio.h>
int main()
{
    int a,al=0,g=0,d=0;
    printf("MUITO OBRIGADO\n");
    while(1)
    {
        scanf("%d", &a);
        if (a>0 && a<4)
        {
            if ( a==1) al++;
            else if ( a==2) g++;
            else d++;

        }
        else if ( a==4)
        {
            break;
        }
    }
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);

    return 0;
}
