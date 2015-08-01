#include<iostream>
#include<cstdio>
char c[10000];
int isAlphabet(char ch)
{
	if(('A'<=ch&&ch<='Z')||('a'<=ch&&ch<='z'))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int i;
	int n=0;
	int previousIsAlphabet=0;
	while(gets(c)!=0)
	{
//		printf("%s\n",c);
		for(i=0;c[i]!='\0';i++)
		{

			if(!previousIsAlphabet&&isAlphabet(c[i]))
			{
				n++;
			}
			if(isAlphabet(c[i]))
			{
				previousIsAlphabet=1;
			}
			else
			{
				previousIsAlphabet=0;
			}
//			printf("previousIsAlphabet=%d;n=%d\n",previousIsAlphabet,n);
		}
		printf("%d\n",n);
//		printf("i=%d\n",i);
		n=0;
		previousIsAlphabet=0;
	}
	return 0;
}
