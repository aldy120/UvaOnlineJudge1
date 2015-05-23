//============================================================================
// Name        : F91.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<cstdio>
int f91(int n)
{
	if(n<=100)
		return f91(f91(n+11));
		// always output 91
	else
		return n-10;
}
int main()
{
	int nn;
	while(scanf("%d",&nn)==1&&nn)
	{
		printf("f91(%d) = %d\n",nn,f91(nn));
	}
	return 0;
}
