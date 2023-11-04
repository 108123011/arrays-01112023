#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n/2;i++)
	{
		for(j=0;j<(n/2)-i;j++)
		printf("*");
		printf("\n");
	}
	for(i=n/2;i<n;i++)
	{
		for(j=0;j<i-(n/2)+1;j++)
		printf("*");
		printf("\n");
	}
	return 0;
}
