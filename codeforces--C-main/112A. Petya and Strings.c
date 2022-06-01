#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,resulte,ch1,ch2;
    char s[100],m[100];
    scanf("%s", &s);
    scanf("%s", &m);

    for (i=0; s[i]!='\0'; i++)
    {
        s[i]=towlower(s[i]);
        m[i]=towlower(m[i]);
    }

    printf("%d\n", strcmp(s,m));


    return 0;
}
