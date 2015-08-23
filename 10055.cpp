#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
	long long int a,b;
	while(scanf("%llu%llu",&a,&b)==2)
	{
//		printf("max min %u %u",max(a,b),min(a,b));
		printf("%llu\n",max(a,b)-min(a,b));
	}

	return 0;
}
