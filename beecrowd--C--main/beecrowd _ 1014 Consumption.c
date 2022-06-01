#include<stdio.h>

int main()
{
    int X;
    float Y,traveled;
    scanf("%d %f", &X, &Y);

    traveled  = (float)X/Y;

    printf("%.3f km/l\n", traveled );

    return 0;
}


