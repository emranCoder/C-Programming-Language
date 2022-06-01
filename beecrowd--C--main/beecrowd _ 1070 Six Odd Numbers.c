#include<stdio.h>
int main()
{
    int i,a;

    scanf("%d", &a);

    for (  i=0; i<12; i++)
    {
        if ( a%2 != 0 )
        {
            printf("%d\n", a);
        }
        a++;
    }


    return 0;
}
