#include <conio.h>
#include <stdio.h>
#include <string.h>
typedef char Xau[200];
int main(){
    Xau x;
    int i;
    printf("Nhap 1 xau: ");
    gets(x);
    i=0;
    while(x[i] == ' ' && i<strlen(x))
    {
        i++;
        strcpy(&x[0],&x[i]);
    }
    i=0;
     i= strlen(x)-1;
    while(x[i]==' '){
        x[i]='\0';
        i--;
    }
    while(i<strlen(x)-1){
        if (x[i]==' ' && x[i+1]==' ')
            strcpy(&x[i],&x[i+1]);
        else
            i++;
    }

    i=0;
    while(x[i]!= '\0')
    {
        if(x[i] == ' ' && x[i+1] == ',')
        {
            strcpy(&x[i],&x[i+1]);
        }
        i++;
    }
    i=0;
    while(i<strlen(x)-1){
        if (x[i]=='.' && x[i+1]=='.')
            strcpy(&x[i],&x[i+1]);
        else
            i++;
    }
    i=0;
    while(i<strlen(x)-1){
        if (x[i]==',' && x[i+1]==',')
            strcpy(&x[i],&x[i+1]);
        else
            i++;
    }
    i=0;
    while(x[i]!= '\0')
    {
        if(x[i] ==' '&& x[i+1] == '.')
        {
            strcpy(&x[i],&x[i+1]);
        }
        i++;
    }
    i=0;
    while(x[i]!= '\0')
    {
        if(x[i]== '.' && x[i+1] != ' ')
        {
            int j;
            for(j=strlen(x)-1;j>=i+1;j--)
            {
                x[j+1]=x[j];
            }
            x[i+1] = ' ';
            x[strlen(x)+1] = '\0';
        }
        i++;
    }
     i=0;
    while(x[i]!= '\0')
    {
        if(x[i]== ',' && x[i+1] != ' ')
        {
            int j;
            for(j=strlen(x)-1;j>=i+1;j--)
            {
                x[j+1]=x[j];
            }
            x[i+1] = ' ';
            x[strlen(x)+1] = '\0';
        }
        i++;
    }
    printf("\n \"%s\"", x);
    getch();
}
