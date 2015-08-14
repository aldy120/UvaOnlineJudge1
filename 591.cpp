#include<iostream>
#include<cstdio>
#include<cmath>
int a[1000];
int main()
{
	int order=0;
	int n;
	int sum,avg;
	while(scanf("%d",&n)&&n!=0)
	{
		order++;
//		printf("n=%d\n",n);
		sum=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
//			printf("%d ",a[i]);
			sum=sum+a[i];
		}
		avg=sum/n;
		int k=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]>avg)
				k=k+a[i]-avg;
		}
//		printf("\n");
		printf("Set #%d\n",order);
		printf("The minimum number of moves is %d.\n",k);
		printf("\n");
	}
	return 0;
}
