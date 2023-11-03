#include<stdio.h>
int main()
{
     int i=0,j=0,c,n,t;
     printf("enter the value of no of elements in the array:");
     scanf("%d",&n);
     int a[n];
     printf("enter the elements of array:\n");
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     for(i=0;i<n-1;i++)
     {
     	
     	while(a[i]!=a[i+j+1]&&j<4)
     	{
     		c=0;
     		j=j++;
     	}
                  if(a[i]==a[i+j+1])
                  {
                  c=1;
                  j=0;
                 }
                  if(c==0)
                  printf("%d",a[i]);
                  break;
}
     if(c==1)
     printf("all the elements are repeated");
     return 0;
}
