#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m;
    int tien=0;
    printf("de nghi nhap m\n");
    scanf("%d",&m);
    if(m<=1000)
    {
        tien += 10000;
    }
    if(m>1000)
    {
        tien += 10000+(m-1000)*1500/200;
    }
    if(m>30000)
    {
        tien +=(m-30000)*8000/1000;
    }
    printf("\nSo tien phai thanh toan: %d",tien);

}
