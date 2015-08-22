
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int a[3000+5];
int main()
{
	int n;
	while(scanf("%d",&n)==1)
	{

		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
//			printf("%d ",a[i]);
		}
//		printf("\n");
		for(int i=1;i<=n-1;i++)
		{
			a[i]=a[i+1]-a[i];
			a[i]=abs(a[i]);
//			printf("%d ",a[i]);
		}
//		printf("\n");
		sort(a,a+n);
		int JollyJumpers=1;
		for(int i=1;i<=n-1;i++)
		{
//			printf("%d ",a[i]);
			if(i!=a[i])
			{
				JollyJumpers=0;
				break;
			}
		}
		if(JollyJumpers)
			printf("Jolly\n");
		else
			printf("Not jolly\n");
	}


	return 0;
}
