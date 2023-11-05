#include<stdio.h>
int main()
{
	int days,year,m;
	scanf("%d %d",&year,&m);
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	printf("the number of days is %d",31);
	else if(m==4||m==6||m==9||m==11)
	printf("the number of days is %d",30);
	else
	{
		if(year%4==0&&year%100!=0||year%400==0)
		printf("the number of days is %d",29);
		else
		printf("the number of days is %d",28);
		
	}
	return 0;
}
