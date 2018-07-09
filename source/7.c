#include<stdio.h>

int main() {
   int a,b,i,uoc;
   printf("nhap a:\n");
   scanf("%d",&a);
   printf("nhap b:\n");
   scanf("%d",&b);
   if(a>0 && b>0){
   for(i=1;i<=a;i+)
   {
       if(a%i==0 && b%i ==0)
        {uoc =i;}
   }
   printf("uoc la: %d\n",uoc);
   printf("boi la: %d\n", (a*b)/uoc);
   }
   else printf("de nghi ban nhap 2 so nguyen duong\n");
   return 0;
}
