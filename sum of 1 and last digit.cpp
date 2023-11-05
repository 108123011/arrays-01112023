#include<stdio.h>
int main()
{
	int i,k,n,r;
	printf("enter the number:");
	scanf("%d",&n);
	k=n%10;
	for(i=0;n!=0;i++)
	{
		r=n%10;
		n=n/10;
		if(r%10==0)
		k=k+r;
	}
	printf("%d",k+r);
	return 0;
}
