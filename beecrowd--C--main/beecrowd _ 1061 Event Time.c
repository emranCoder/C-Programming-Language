#include<stdio.h>
int main()
{
    int w,x,y,z,w2,x2,y2,z2,s,m,h,d;

    scanf("Dia %d", &w);
    scanf("%d : %d : %d\n", &x,&y,&z);
    scanf("Dia %d", &w2);
    scanf("%d : %d : %d", &x2,&y2,&z2);

    s = z2 -z;
    m = y2-y;
    h = x2-x;
    d = w2-w;

    if ( s<0 )
    {
        s +=60;
        m--;
    }
    if ( m<0 )
    {
        m+=60;
        h--;
    }
    if(h<0){
        h+=24;
        d--;
    }
    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);

    return 0;
}

