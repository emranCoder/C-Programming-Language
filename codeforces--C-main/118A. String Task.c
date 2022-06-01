#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char s[100];
    scanf("%s", &s);
    for (i=0; i<strlen(s); i++)
    {
        s[i]= tolower(s[i]);
        if (s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U' && s[i]!='y' && s[i]!='Y')
        {
            printf(".%c",s[i]);
        }
    }

    return 0;
}
