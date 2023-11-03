#include<stdio.h>
int main()
{ 
     int n;
     scanf("%d",&n);
     int i,j,min, a[n];
     for(i=0;i<n;i++)
     {
     	scanf("%d",&a[n]);
     }
     min=a[0];
     for(j=1;j<n;j++)
     {
     	if(a[j-1]<a[j])
     	min=a[j-1];
     }
     printf("%d",max);
     return 0;
}
