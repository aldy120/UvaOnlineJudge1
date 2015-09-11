#include<stdio.h>
#include<cmath>
double a[10000+5];
int main()
{
	int j=0;
    while(scanf("%lf",&a[j])==1)
    {
//    	printf("%lf\n",j);
    	int key=a[j];
    	int i=j-1;
    	while(i>=0&&a[i]>key)
    	{
    		a[i+1]=a[i];
    		i--;
    	}
    	a[i+1]=key;

    	//debug
//    	for(i=0;i<=j;i++)
//    	{
//    		printf("%lf ",a[i]);
//    	}
//    	printf("\n");
    	int f=(int)floor(j/2.0);
    	int c=(int)ceil(j/2.0);
//    	printf("f=%d c=%d\n",f,c);
		double ans=a[f]+a[c];//j is integer, need to be double for calculate
		ans=ans/2;
		ans=floor(ans);
		printf("%.0lf\n",ans);
    	j++;
    }

    return 0;
}
