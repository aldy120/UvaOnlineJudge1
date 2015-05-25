#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char a[10000];
	while(gets(a))
	{
		for(int i=0;i<strlen(a);i++)   //for(int i=0;a[i]!='\0';i++)
	
		{
			printf("%c",a[i]-7);
		}
		printf("\n");
	}
	return 0;
}



