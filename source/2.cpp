#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100];
    fflush(stdin);
    printf("de nghi nhap\n");
    gets(a);
    int i=0;int ky_tu_hoa=0;int ky_tu_thuong=0;
    for(i =0;i<strlen(a);i++)
    {
        if(a[i]>=65&&a[i]<97)
        {
            ky_tu_hoa++;
        }
        if(a[i]>=97 &&a[i]<=122){ ky_tu_thuong++;}
    }
    printf(" ky tu thuong: %d\n",ky_tu_thuong);
    printf("ky tu hoa: %d\n",ky_tu_hoa);
	getchar();
}
