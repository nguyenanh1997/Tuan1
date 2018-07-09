#include<stdio.h>
#include<stdlib.h>
int main()
{
    int h,i,j,z,t;
    printf("nhap h\n");
    scanf("%d",&h);
    for(i=1;i<=h;i++)
    {

        for(j=0;j<h-i;j++)
            printf(" ");
        for(z=0;z<2*i-1;z++)
        {
            printf("*");
        }
        printf("\n");
    }
}
