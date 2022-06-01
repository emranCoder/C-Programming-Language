#include<stdio.h>
int main()
{
    int a,i,c=1,d=2,e=3;
    scanf("%d", &a);
    for (i=1; i<=a; i++)
    {
        printf ("%d %d %d PUM\n", c,d,e);
        c+=4;
        d+=4;
        e+=4;
    }

    return 0;
}
