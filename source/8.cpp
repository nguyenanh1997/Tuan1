#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char x[100];
	printf("nhap chuoi vao nao\n");
	fflush(stdin);
	gets(x);
	int i;
	printf("Chuoi dao nguoc la: ");
	for(i=strlen(x);i>=0;i--)
	{
		printf("%c",x[i]);
	}
	getchar();
}
