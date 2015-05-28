
#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=100;
const int maxn2=10000;
double x1[maxn],y1[maxn],x2[maxn],y2[maxn];
double s[maxn2],t[maxn2];
int main()
{
	char tmp;
	int i=0;
	int m,n;
	while(scanf("%c",&tmp)==1)
	{
		i++;
		if(tmp!='r')
		{
			if(tmp=='*')
			{
				//printf("receive *\n");
				break;
			}
			else
			{
				//printf("NOT r and *, is %d or %c",tmp,tmp);
				break;
			}
		}
		//printf("receive r\n");
		scanf("%lf %lf %lf %lf",&x1[i],&y1[i],&x2[i],&y2[i]);
		getchar();//delete '\n'
		//printf("i=%d x1 y1 x2 y2 %lf %lf %lf %lf\n",i,x1[i],y1[i],x2[i],y2[i]);
	}
	n=i;
	i=1;
	//printf("mid\n");
	//getchar();
	while(scanf("%lf %lf",&s[i],&t[i]))
	{
		//printf("i s t %d %lf %lf\n",i,s[i],t[i]);
		if(s[i]==9999.9&&s[i]==9999.9)
		{

			break;
		}
		i++;

	}
	m=i-1;
	int inRectangles;
	for(int ii=1;ii<=m;ii++)
	{
		inRectangles=0;
		for(int j=1;j<=n;j++)
		{
			if(s[ii]>x1[j]&&s[ii]<x2[j]&&t[ii]<y1[j]&&t[ii]>y2[j])
			{
				printf("Point %d is contained in figure %d\n",ii,j);
				inRectangles=1;
			}
		}
		if(!inRectangles)
		{
			printf("Point %d is not contained in any figure\n",ii);
		}
	}
	//printf("end\n");
	return 0;
}



