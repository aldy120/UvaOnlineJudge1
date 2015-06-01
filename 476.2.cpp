#include<cstdio>
#include<cmath>
const double error=1e-9;
bool doubleEqual(double a,double b)
{
	if(fabs(a-b)<error)
		return true;
	return false;
}
struct point
{
	double x;
	double y;
};
struct rectangle
{
	point leftup;
	point rightdown;
};
rectangle a[15];
point s[10000];
int main()
{
	int m,n;
	char IsRectangle;
	int i=0;
	while(scanf("%c",&IsRectangle)==1&&IsRectangle=='r')
	{
		i++;
		scanf("%lf%lf%lf%lf",&a[i].leftup.x,&a[i].leftup.y,&a[i].rightdown.x,&a[i].rightdown.y);
//		printf("i x1 y1 x2 y2 %d %lf %lf %lf %lf\n",i,a[i].leftup.x,a[i].leftup.y,a[i].rightdown.x,a[i].rightdown.y);
		getchar();
	}
	m=i;
	char IsAsterisk;
	scanf("%c",&IsAsterisk);
	if(IsAsterisk!='*')
	{
//		printf("not '*'\n");
	}
	i=1;
	while(scanf("%lf%lf",&s[i].x,&s[i].y)==2)
	{
//		printf("%d %lf %lf\n",i,s[i].x,s[i].y);
		if(s[i].x==9999.9&&s[i].y==9999.9)
		{
			i--;
			break;
		}
		i++;
	}
	n=i;
	int InRectangle;
	for(int i=1;i<=n;i++)
	{
		InRectangle=0;
		for(int j=1;j<=m;j++)
		{
			if(s[i].x>a[j].leftup.x&&s[i].y<a[j].leftup.y&&s[i].x<a[j].rightdown.x&&s[i].y>a[j].rightdown.y)
			{
				printf("Point %d is contained in figure %d\n",i,j);
				InRectangle=1;
			}
		}
		if(!InRectangle)
		{
			printf("Point %d is not contained in any figure\n",i);
		}
	}
//	printf("end");
}
