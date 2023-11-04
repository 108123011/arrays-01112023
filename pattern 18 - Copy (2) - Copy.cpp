#include<stdio.h>
int main()
{
	int i,j,k=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			k=k+1;
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
