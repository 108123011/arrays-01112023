#include<stdio.h>
#include<math.h>
int main()
{
	int dec=0,i=0,bin,rem;
	scanf("%d",&bin);
	for(bin!=0;bin>0;i++)
	{
			rem=bin%10;
		bin=floor(bin/10);
		dec=dec+rem*(2^i);
    }
    printf("%d",dec);
    return 0;
}
