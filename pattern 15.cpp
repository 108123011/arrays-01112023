#include<stdio.h>
int main()
{
	int n,i,j,k,s;
	scanf("%d",&n);
	for(i=0;i<n/2;i++)
	{
		for(j=0;j<i+1;j++)
		printf("*");
		for(s=0;s<n-2*(i+1);s++)
		printf(" ");
		for(k=0;k<i+1;k++)
		printf("*");
		printf("\n");	
	}
	for(i=n/2;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		printf("*");
		for(s=0;s<2*i-n;s++)
		printf(" ");
		for(k=0;k<n-i;k++)
		printf("*");
		printf("\n");	
	}
	return 0;
}
