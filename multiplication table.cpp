#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter the value of number");
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		j=n*i;
		printf("%d*%d=%d\n",n,i,j);
	}
	return 0;
}
