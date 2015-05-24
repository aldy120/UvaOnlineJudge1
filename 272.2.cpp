//============================================================================
// Name        : F91.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<cstdio>
#include<cstring>

int main()
{
	char a[10000];
	bool left=1;
	while(gets(a))
	{

		for(int i=0;a[i]!='\0';i++)
		{
			//printf("a[i]=%c\n",a[i]);
			if(a[i]=='\"')
			{
				if(left)
					printf("``");
				else
					printf("''");
				left=left^1;
				//1 to 0 and 0 to 1
			}
			else
				printf("%c",a[i]);
		}
		printf("\n");
	}
	return 0;
}
