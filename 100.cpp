#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n,len;
	int i,j,ii,jj;
	int maxlen;
	while(scanf("%d%d",&ii,&jj)==2&&ii&&jj)
	{
		i=ii;
		j=jj;
		if(i>j)
		{
			int tmp=i;
			i=j;
			j=tmp;
		}
		maxlen=1;
		for(int k=i;k<=j;k++)
		{
			n=k;
			len=1;
			while(n!=1)
			{
				len++;
				if(n%2)
				{
					n=3*n+1;
				}
				else
				{
					n/=2;
				}
				//printf("%d ",n);
			}
			maxlen=max(len,maxlen);
			//putchar('\n');
		}
		printf("%d %d %d\n",ii,jj,maxlen);
	}
	return 0;
}
