#include<stdio.h>

int main()
{
    int i,n,min,position=0;
    scanf("%d", &n);
    int data[n];
    for (i=0; i<n; i++)
    {
        scanf("%d", &data[i]);
    }
    min=data[0];
    for (i=1; i<n; i++)
    {
        if (data[i]<min)
        {
            min=data[i];
            position = i;
        }

    }
    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", position);



    return 0;
}


