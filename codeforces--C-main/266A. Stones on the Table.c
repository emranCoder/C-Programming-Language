    #include<stdio.h>
    int main()
    {
        int i,n,f=0;
        scanf("%d", &n);
        char string[n];
        scanf("%s", &string);
        for (i=0; i<n; i++)
        {
            if(string[i]==string[i-1])
            {
                f++;
            }
        }
        printf("%d", f);

        return 0;
    }
