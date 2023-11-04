#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	scanf("%d",&n);
	for(i=0;i<n/2;i++)
	{
		for(j=0;j<i+1;j++)
		    printf("*");
		for(k=0;k<n-(2*i)-2;k++)
	    	printf(" ");
		for(l=0;l<i+1;l++)
	    	printf("*");
		    printf("\n");
	}
	for(i=n/2;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		  printf("*");
		for(k=0;(2*i)-n;k++)
		  printf(" ");
		for(l=0;l<n-i;l++)
		   printf("*");
		   printf("\n");
	}
	return 0;
}
