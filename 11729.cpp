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
const int maxn=10000+5;
int B[maxn],J[maxn];
int main()
{
	int n;
	int order=0;
	while(scanf("%d",&n)==1&&n)
	{
		++order;
		for(int i=0;i<=n-1;i++)
		{
			scanf("%d %d",&B[i],&J[i]);
		}

		//sort
		for(int i=0;i<=n-1;i++)
		{
			for(int j=n-2;j>=i;j--)
			{
				if(J[j+1]>J[j])
				{
					int temp;
					temp=J[j];
					J[j]=J[j+1];
					J[j+1]=temp;
					temp=B[j];
					B[j]=B[j+1];
					B[j+1]=temp;
				}
			}
		}
		//caculate
		int timespan=B[0]+J[0];
		int previous=B[0];
		//printf("timespan=%d\n",timespan);
		for(int i=1;i<=n-1;i++)
		{
			previous+=B[i];
			if(timespan<previous+J[i])
			{
				timespan=previous+J[i];
			}

			//printf("timespan=%d\n",timespan);
		}

		printf("Case %d: %d\n",order,timespan);
	}
}

