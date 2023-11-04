#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<1;j++)
		printf("%d",i+1);
		for(k=0;k<i;k++)
		printf("*%d",(i+1));
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<1;j++)
		printf("%d",n-i);
		for(k=0;k<n-(i+1);k++)
		printf("*%d",(n-i));
		printf("\n");
	}
	return 0;
}
