//============================================================================
// Name        : 11292.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn=20000+5;
int N[maxn],M[maxn];
int main() {
	int n,m;
	while(scanf("%d %d",&n,&m)==2&&m&&n)
		{
			for(int i=1;i<=n;i++)
			{
				scanf("%d",&N[i]);
			}
			for(int i=1;i<=m;i++)
			{
				scanf("%d",&M[i]);
			}

			sort(N+1,N+n+1);
			sort(M+1,M+m+1);
			int j=0;
			int cost=0;
			for(int i=1;i<=m;i++)
			{
				if(M[i]>=N[j+1])
				{
					j++;
					cost+=M[i];
				}
				if(j==n)
				{
					break;
				}
			}

			if(n-j!=0)
			{
				printf("Loowater is doomed!\n");
			}
			else
			{
				printf("%d\n",cost);
			}


		}
	return 0;
}
