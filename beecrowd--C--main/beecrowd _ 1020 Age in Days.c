#include<stdio.h>

int main()
{
    int N,h=0,m=0,s=0;

    scanf("%d", &N);

    h = N/365;
    N = N% 365;
    m = N/30;
    s = N%30;


    printf("%d ano(s)\n",h );
    printf("%d mes(es)\n",m );
    printf("%d dia(s)\n",s );

    return 0;
}


