#include<stdio.h>

int main()
{
    int a,b,c,i,j,k,tmp;
    scanf("%d %d %d", &a,&b,&c);

    i = a;
    j = b;
    k = c;

    if ( a > b ) {tmp =a; a = b;b = tmp;}
    if ( a>c){tmp =a;a = c;c = tmp;}
    if( b>c ) {tmp =b;b = c;c = tmp;}

    printf("%d\n%d\n%d\n\n", a,b,c);
    printf("%d\n%d\n%d\n", i,j,k);

    return 0;
}


