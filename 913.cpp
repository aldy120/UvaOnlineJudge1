#include<iostream>
#include<cstdio>
#include<cmath>
int main()
{
	long long int n;
	long long int ans;
	long long int theLastOrderInTheRow;
	while(scanf("%lld",&n)==1)
	{
		theLastOrderInTheRow=(n+1)/2;
		theLastOrderInTheRow=theLastOrderInTheRow*theLastOrderInTheRow;
//		printf("theLastOrderInTheRow=%d\n",theLastOrderInTheRow);
		ans=2*theLastOrderInTheRow-1;
		ans=ans*3-2-4;
		printf("%lld\n",ans);
	}
	return 0;
}
