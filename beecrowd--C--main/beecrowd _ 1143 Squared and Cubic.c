#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,c,d,e;
    scanf("%d", &a);
    for (i=1; i<=a; i++)
    {
        c = i;
        d = pow(i,2);
        e = pow(i,3);
        printf ("%d %d %d\n", c,d,e);
    }

    return 0;
}
