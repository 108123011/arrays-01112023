#include<stdio.h>
int main()
{
	int i,l=2,x,k,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(k=0;k<n;k++)
	{
		if(a[2]==a[k])
		{
			x=l++;
		}
	}
		printf("%d",x-1);
return 0;	
}
