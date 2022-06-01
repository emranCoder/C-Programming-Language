#include<stdio.h>

int main()
{
    int j,n,i,k=0,m=0,par[5],impar[5],parHave=0,imparHave=0;
    for (j=0; j<15; j++)
    {
        scanf("%d", &n);
        if (n%2 == 0 )
        {
            par[k]=n;
            parHave++;
            k++;
        }
        else
        {
            impar[m]=n;
            imparHave++;
            m++;
        }
        if (parHave==5)
        {
            for (i=0; i<5; i++)
            {
                printf("par[%d] = %d\n", i,par[i]);
            }
            parHave=0;
            k=0;
        }
        if (imparHave==5)
        {
            for (i=0; i<5; i++)
            {
                printf("impar[%d] = %d\n", i,impar[i]);
            }
            imparHave=0;
            m=0;
        }
        if (j>=14 && (imparHave+parHave)==5)
        {
            for (i=0; i<imparHave; i++)
            {
                printf("impar[%d] = %d\n", i,impar[i]);
            }
            for (i=0; i<parHave; i++)
            {
                printf("par[%d] = %d\n", i,par[i]);
            }
            parHave=0;
            imparHave=0;
        }
    }


    return 0;
}


