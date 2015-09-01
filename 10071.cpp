#include<cstdio>
#include<cstdlib>
int main()
{
	int v,t;
	int displacement;
	while(scanf("%d %d",&v,&t)==2)
	{
//		printf("%d %d\n",v,t);
		displacement=v*2*t;
		printf("%d\n",displacement);
	}
}
