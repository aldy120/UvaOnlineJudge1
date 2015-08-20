#include<iostream>
#include<cstdio>
#include<cmath>
int a[100];
long long int reverse(long long int p)
{
	long long int ans=0;
	while(p!=0)
	{
		ans=ans*10;
		ans=ans+p%10;
		p=p/10;
	}
	return ans;
}
int main()
{
	int n;
	long long int p,q;
	int addCount;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lld",&p);
		q=reverse(p);
		addCount=0;
		p=p+q;
		addCount++;
		q=reverse(p);
		while(p!=q)
		{
			p=p+q;
			addCount++;
			q=reverse(p);
		}
		printf("%d %lld\n",addCount,p);
	}


	return 0;
}
