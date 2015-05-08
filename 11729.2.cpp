//============================================================================
// Name        : 11292.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<cstdio>
#include<algorithm>
using namespace std;
struct job
{
	int b,j;
};
bool cmp(job a,job b)
{
	return a.j>b.j;
}
int main()
{
	job J[10000+5];
	int n;
	int kase=0;
	while(scanf("%d",&n)==1&&n)
	{
		kase++;
		for(int i=0;i<=n-1;i++)
		{
			scanf("%d%d",&J[i].b,&J[i].j);
		}
		sort(J,J+n,cmp);
		int timespan=0,accumulate=0;
		for(int i=0;i<=n-1;i++)
		{
			accumulate+=J[i].b;
			timespan=max(timespan,accumulate+J[i].j);
		}

		printf("Case %d: %d\n",kase,timespan);
	}
}
