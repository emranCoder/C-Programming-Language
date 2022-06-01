#include<stdio.h>
int main()
{
    int i,x,a;
    int in=0,out =0;

    scanf("%d", &x);

    for( i=1; i<=x; i++ )
    {
        scanf("%d", &a);
        if ( a>=10 && a<=20 )
        {
            in++;
        }else{
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
