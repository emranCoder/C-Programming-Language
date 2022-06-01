#include<stdio.h>
int main()
{
    int a,i;
    float sum=0;
    scanf("%d", &a);
    int b[a];
    for(int i=0;i<a; i++)
    {
        scanf("%d", &b[i]);
        sum+=b[i];
    }
    printf("%f\n", sum/a );

    return 0;
}
