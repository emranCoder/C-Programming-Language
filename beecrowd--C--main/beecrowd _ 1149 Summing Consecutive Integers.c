#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    scanf("%d%d", &a,&b);

    while(b<0 || b==0 )
    {
        scanf("%d", &b);
    }
    for (i=0; i<b; i++)
    {
        sum=sum+a+i;
    }
    printf("%d\n", sum);


    return 0;
}

