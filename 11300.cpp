#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=1000001+5;
long long a[maxn];
int main()
{
	int n;
	long long M;
	long median;
	long long ans;
	while(scanf("%d",&n)==1&&n)
	{
		M=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
			M=M+a[i];
		}
		M=M/n;
		for(int i=1;i<=n;i++)
		{
			a[i]=a[i]-M;
		}
//		printf("ai-M\n");
//		for(int i=1;i<=n;i++)
//		{
//			printf("%d ",a[i]);
//		}
//		printf("\n");

		int tmp=0;
		for(int i=1;i<=n-1;i++)
		{
			tmp=tmp+a[i];
			a[i]=tmp;
		}
		a[0]=0;
//		printf("median in\n");
//		for(int i=0;i<=n-1;i++)
//		{
//			printf("%d ",a[i]);
//		}
//		printf("\n");
		sort(a,a+n);
		median=a[(0+n)/2];
		ans=0;
		for(int i=0;i<=n-1;i++)
		{
			a[i]=abs(median-a[i]);
			ans=ans+a[i];
		}
		printf("%lld\n",ans);
	}
	return 0;
}
