#include<cstdio>
char a[10000];
char keyboard[4][13+1]={{"`1234567890-="},{"QWERTYUIOP[]\\"},{"ASDFGHJKL;'"},{"ZXCVBNM,./"}};
void printCorrectChar(char c)
{
	int one=1;
	int canShift=0;
	for(int i=0;i<=3;i++)
	{
		for(int j=one;j<=12;j++)
		{
			if(c==keyboard[i][j])
			{
				printf("%c",keyboard[i][j-1]);
				canShift=1;
			}
		}
	}
	if(!canShift)
	{
		printf("%c",c);
	}
}
int main()
{

//	for(int i=0;i<=3;i++)
//	{
//		for(int j=0;j<=13;j++)
//		{
//			printf("%d\t",keyboard[i][j]);
//		}
//		printf("\n");
//	}
	while(gets(a))
	{
		for(int i=0;a[i]!='\0';i++)
		{
			printCorrectChar(a[i]);
		}
		printf("\n");
	}
}
