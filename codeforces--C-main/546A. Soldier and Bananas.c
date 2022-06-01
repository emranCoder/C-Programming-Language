    #include<stdio.h>
    int main()
    {
        int  k,w,n,price;
        scanf("%d%d%d", &k,&n,&w);
        price = (w*(k+w*k))/2;
        if (price>n)
        printf("%d", price-n);
        else
            printf("0");
        return 0;
    }
