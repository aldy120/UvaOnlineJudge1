#include<iostream>
#include<cstdio>
#include<cmath>
int main()
{
	double hour,minute;
	double theta;
	while(scanf("%lf:%lf",&hour,&minute)==2)
	{
//		printf("hour %lf minute %lf\n",hour,minute);
		if(hour==0&&minute==0)
			break;
		hour=hour*360/12+minute*360/12/60;
		minute=minute*360/60;
		theta=fabs(hour-minute);
		if(theta>180)
			theta=360-theta;
		printf("%.3lf\n",theta);
	}
	return 0;
}
