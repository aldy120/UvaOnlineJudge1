#include<cstdio>
#include<algorithm>
using namespace std;
int caculateLength(int n)
{
	int len=1;
	while(n!=1)
	{
		if(n%2)
		{
			n=3*n+1;
		}
		else
		{
			n=n/2;
		}
		len++;
	}
	return len;
}
int main()
{
	int i,j;
	int maxLen;
	while(scanf("%d%d",&i,&j)&&i&&j)
	{
		maxLen=1;
		for(int k=min(i,j);k<=max(i,j);k++)
		{
			maxLen=max(maxLen,caculateLength(k));

		}
		printf("%d %d %d\n",i,j,maxLen);
	}
	return 0;
}
