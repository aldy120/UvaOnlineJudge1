// 正確的間隔是很重要的，多空行或少空行都是很慘的
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
char a[1005];
int ascii[256];
int score[256];

int main()
{
	int i,j;
	int blankLine=0;
	while(gets(a))
	{
		if(blankLine)
		{
			printf("\n");
		}
		blankLine=1;
//		printf("BBBBBBBB\n");
		for(i=0;i<=255;i++)
		{
			ascii[i]=i;
			score[i]=0;
		}
		for(i=0;a[i]!='\0';i++)
		{
			score[a[i]]++;
		}
//		puts(a);
//		for(i=0;i<=255;i++)
//		{
//			printf("%d\t%d\n",ascii[i],score[i]);
//		}

		//insertion sort
		for(int i=2;i<=255;i++)
		{
			int key1=score[i];
			int key2=ascii[i];
			for(j=i-1;j>=0;j--)
			{
				if(key1>score[j])
				{
					score[j+1]=score[j];
					ascii[j+1]=ascii[j];
				}
				else
					break;
			}
			score[j+1]=key1;
			ascii[j+1]=key2;
		}
		//output

//		for(i=0;i<=255;i++)
//		{
//			printf("%d\t%d\n",ascii[i],score[i]);
//		}
		for(int i=255;i>=0;i--)
		{
			if(score[i]!=0)
			{
				printf("%d %d\n",ascii[i],score[i]);
			}

		}
//		printf("EEEEEEEEEEE\n");
	}

	return 0;
}
