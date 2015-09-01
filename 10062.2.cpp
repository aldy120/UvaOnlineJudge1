#include<cstdio>
#include<algorithm>
using namespace std;
char a[1005];
int main()
{
	int blankLine=0;
	int i,j;
	while(gets(a))
	{
		int score[256]={0};
		int maxASCII=0;
		int minASCII=256;
		int maxScore=0;
		if(blankLine)
			putchar('\n');
		blankLine=1;
		for(i=0;a[i]!='\0';i++)
		{
			score[(int)a[i]]++;
			maxASCII=max(maxASCII,(int)a[i]);
			minASCII=min(minASCII,(int)a[i]);
			maxScore=max(maxScore,score[(int)a[i]]);
		}

		//output
//		printf("maxASCII,minASCII,maxScore %d %d %d\n",maxASCII,minASCII,maxScore);
		for(i=1;i<=maxScore;i++)
		{
			for(j=maxASCII;j>=minASCII;j--)
			{
				if(i==score[j])
				{
					printf("%d %d\n",j,i);
				}
			}
		}
	}
}
