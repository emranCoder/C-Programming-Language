#include<stdio.h>
int main()
{
    long long int n,b=0;
    scanf("%lld", &n);
    if(n%2==0)
    {
        printf("%lld\n", n/2);
    }
    else
    {
        b=-(n/2+1);
        printf("%lld\n", b);
    }



    return 0;
}
