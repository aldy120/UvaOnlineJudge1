#include<iostream>
#include<cstdio>
#include<cmath>
int main()
{
	unsigned int a,b;
	while(scanf("%u%u",&a,&b)==2)
	{
		if(a==0&&b==0)
			break;
		int carry=0;
		int carryCount=0;
		while(!(a==0&&b==0))
		{
			if(carry+a%10+b%10>=10)
			{
				carry=1;
				carryCount++;
			}
			else
				carry=0;
			a=a/10;
			b=b/10;
		}
		if(carryCount==0)
			printf("No carry operation.\n");
		else if(carryCount==1)
			printf("%d carry operation.\n",carryCount);
		else
			printf("%d carry operations.\n",carryCount);
	}


	return 0;
}
