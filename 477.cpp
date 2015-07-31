#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
struct point
{
	double x;
	double y;
};
struct rectangle
{
	point topLeftCorner;
	point bottomRightCorner;
};
struct circle
{
	point center;
	double radius;
};
rectangle r[100];
circle c[100];
char shape[100];
int main()
{
	int i=1;//graphs counter
	shape[i]=getchar();
//	printf("shape=%c\n",shape[i]);
	int indexR=0;
	int indexC=0;
//	printf("aaa");
	while(shape[i]!='*')
	{
		getchar();
//		printf("in while");
		if(shape[i]=='r')//input rectangle
		{
			scanf("%lf%lf%lf%lf",
					&r[indexR].topLeftCorner.x,
					&r[indexR].topLeftCorner.y,
					&r[indexR].bottomRightCorner.x,
					&r[indexR].bottomRightCorner.y);
//			printf("x1=%lf;y1=%lf;x2=%lf;y2=%lf\n",r[indexR].topLeftCorner.x,
//					r[indexR].topLeftCorner.y,
//					r[indexR].bottomRightCorner.x,
//					r[indexR].bottomRightCorner.y);
			indexR++;
		}
		if(shape[i]=='c')//input circle
		{
			scanf("%lf%lf%lf",
					&c[indexC].center.x,
					&c[indexC].center.y,
					&c[indexC].radius);
//			printf("x=%lf;y=%lf;r=%lf\n",c[indexC].center.x,c[indexC].center.y,c[indexC].radius);
			indexC++;
		}
		getchar();//delete '\n'
		i++;
		shape[i]=getchar();
	}
	point p;
	int n_graphs=i-1;

	scanf("%lf%lf",&p.x,&p.y);
	int indexP=1;
	while(!(p.x==9999.9&&p.y==9999.9))
	{
		indexR=0;
		indexC=0;

		int isContain=0;
		for(int i=1;i<=n_graphs;i++)
		{
			if(shape[i]=='r')
			{
				//decide whether p in rectangle
				if(r[indexR].topLeftCorner.x<p.x&&p.x<r[indexR].bottomRightCorner.x&&
				   r[indexR].topLeftCorner.y>p.y&&p.y>r[indexR].bottomRightCorner.y)
				{
					printf("Point %d is contained in figure %d\n",indexP,i);
					isContain=1;
				}
				indexR++;
			}
			if(shape[i]=='c')
			{
				//decide whether p in circle
				double distance=sqrt((p.x-c[indexC].center.x)*(p.x-c[indexC].center.x)+
									 (p.y-c[indexC].center.y)*(p.y-c[indexC].center.y));
				if(distance<c[indexC].radius)
				{
					printf("Point %d is contained in figure %d\n",indexP,i);
					isContain=1;
				}
				indexC++;
			}
		}
		if(isContain==0)
		{
			printf("Point %d is not contained in any figure\n",indexP);
		}

		indexP++;
		scanf("%lf%lf",&p.x,&p.y);
	}
	return 0;
}
