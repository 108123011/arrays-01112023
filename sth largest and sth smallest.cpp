#include<stdio.h>
int main()
{
	int i,j,s,k,t,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
    }
	for(k=0;k<n;k++)
	printf("%d",a[k]);
	scanf("%d",&s);
	printf("sth largest value is %d\n",a[n-s]);
	printf("sth smallest value is %d\n",a[s-1]);
	return 0;
}
