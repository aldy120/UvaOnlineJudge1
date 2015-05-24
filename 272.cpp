#include<cstdio>
#include<cstring>

int main()
{
	char a[10000];
	int left=1;
	while(gets(a))
	{

		for(int i=0;a[i]!='\0';i++)
		{
			//printf("a[i]=%c\n",a[i]);
			if(a[i]=='\"')
			{
				if(left)
				{
					printf("``");
					left=0;
				}
				else
				{
					printf("''");
					left=1;
				}
			}
			else
				printf("%c",a[i]);
		}
		printf("\n");
	}
	return 0;
}
