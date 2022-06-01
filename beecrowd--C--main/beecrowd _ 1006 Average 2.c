#include<stdio.h>

int main()
{
    double A,B,C,MEDIA;

    scanf("%lf %lf %lf", &A, &B, &C);
    A = A*2;
    B = B*3;
    C = C*5;

    MEDIA = (A+B+C)/10.0;

    printf("MEDIA = %.1f\n", MEDIA);

    return 0;
}
