//this program is used to find sum of digits in the number
#include<stdio.h>
int main()
{
   int i,k=0,n;
   scanf("%d",&n);
   while(n!=0)
   {
   k=k+n%10;
   n=n/10;
   }
   printf("%d",k);
   return 0;	
}
