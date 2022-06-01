#include<stdio.h>

int main()
{
    double  A,B,C,area_rec,area_cerc, area_trepu, area_squear, area_side_rec,pi;
    pi = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);

    area_rec = (0.5)*A*C;
    area_cerc = pi*(C*C);
    area_trepu = (0.5)*(A+B)*C;
    area_squear = B*B;
    area_side_rec = A*B;

    printf("TRIANGULO: %.3lf\n", area_rec);
    printf("CIRCULO: %.3lf\n", area_cerc);
    printf("TRAPEZIO: %.3lf\n", area_trepu);
    printf("QUADRADO: %.3lf\n", area_squear);
    printf("RETANGULO: %.3lf\n", area_side_rec);

    return 0;
}

