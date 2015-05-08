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
		a[0]=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
			a[i]=a[i]+a[i-1];
		}
		M=a[n]/n;
		for(int i=1;i<=n-1;i++)//only 1~n-1 need caculate
		{
			a[i]=a[i]-M*i;
		}
		sort(a,a+n);
		median=a[(0+n)/2];
		ans=0;
		for(int i=0;i<=n-1;i++)
		{
			ans=ans+abs(median-a[i]);
		}
		printf("%lld\n",ans);
	}
	return 0;
}
