#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("de nghi nhap n = ?\n");
    scanf("%d", &n);
    int a[3],i,y;
    for(i = 0;i<3;i++)
    {
        a[i] = n%10;
        n=n/10;
    }
     for(i=0;i<3;i++)
    {
        int h=0;
        for(y=i+1;y<3;y++)
        {

            if(a[i]<a[y])
            {
                h = a[i];
                a[i]= a[y];
                a[y]=h;
            }
    }
    }
    printf("Cac ky tu sau khi sap xep la:");
    for(i = 0;i<3;i++)
    {
        printf("%d",a[i]);
    }
    getchar();
}
