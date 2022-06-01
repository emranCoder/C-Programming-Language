#include<stdio.h>

int main()
{
    int i,n,a,coelhos,ratos,sapos,total;
    float avg_coelhos,avg_ratos,avg_sapos;
    char aNimal;
    coelhos = 0;
    ratos = 0;
    sapos = 0;
    total = 0;

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%d %c", &a,&aNimal);
        if ( aNimal== 'c' || aNimal== 'C' ) coelhos+=a;
        if(aNimal== 'R' || aNimal== 'r') ratos+=a;
        if(aNimal== 's' || aNimal== 'S') sapos+=a;
        total+=a;
    }

    avg_coelhos = ((float)coelhos/(float)total)*100;
    avg_ratos = ((float)ratos/(float)total)*100;
    avg_sapos = ((float)sapos/(float)total)*100;
    //Total of animale
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    //Percentual
    printf("Percentual de coelhos: %.2f %%\n", avg_coelhos);
    printf("Percentual de ratos: %.2f %%\n", avg_ratos);
    printf("Percentual de sapos: %.2f %%\n", avg_sapos);

    return 0;
}
