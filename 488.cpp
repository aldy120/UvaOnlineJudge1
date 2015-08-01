#include<iostream>
#include<cstdio>
int main()
{
	int n;
	int a,f;
	scanf("%d",&n);
//	printf("n=%d\n",n);
	while(n--)
	{
//		printf("aaa");
		scanf("%d%d",&a,&f);
//		printf("a=%d;f=%d\n",a,f);
		for(int i=1;i<=f;i++)
		{
//			printf("aaa");
			for(int j=1;j<=a;j++)
			{

				for(int k=1;k<=j;k++)
				{
					printf("%d",j);
				}
				printf("\n");
			}
			for(int j=a-1;j>=1;j--)
			{
				for(int k=1;k<=j;k++)
				{
					printf("%d",j);
				}
				printf("\n");
			}
			if(i!=f)
			{
				printf("\n");
			}
		}
		if(n!=0)
		{
			printf("\n");
		}
	}
	return 0;
}
