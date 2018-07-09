#include<stdio.h>
#include<stdlib.h>
int check_ngay(int ngay, int thang, int nam)
{
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
			{
				if(ngay <= 31 && check_nam(nam) == 1 )
				{
						return 1;
				}
				else return 0;
			}
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
		case 2:
			{
				if(check_nam(nam) == 1)
					{
						if(thang == 2 )
						{
							if(ngay <= 29)
							{
								return 1;
							}
							else return 0;
						}
						else return 1;
					}
                else{
                    if(thang == 2 && ngay <= 28)
                    return 0;
                }

			}
	}
}
int check_nam(int nam)
{
	if( (nam%4 == 0 && nam%100 !=0) || nam%400 == 0)
	{
		return 1;
	}
}
int check(int ngay,int thang, int nam)
{
    if(thang == 2 && ngay>=29)
    {
		printf("khong hop le");
		return 0;
    }
	if(ngay<0 || ngay == 0 || ngay > 31 ||thang<0 || thang == 0 || thang >12)
	{
		return 0;
	}
	else return 1;
}
void main()
{

    int ngay, thang, nam;
    printf("nhap ngay");
    scanf("%d",&ngay);
    printf("nhap thang");
    scanf("%d",&thang);
    printf("nhap nam");
    scanf("%d",&nam);
	if(check(ngay,thang,nam)==1)
    {
        if(check_ngay(ngay,thang,nam)==1)
            printf("Nam nhuan");
        else {
            printf("khong phai nam nhuan");
        }
	}
	else
		printf("khong hop le");
	getchar();
}
