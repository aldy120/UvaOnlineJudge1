
#include<stdio.h>

int main()
{
	char c;
	bool inKeyboard;
	const char keyboard[]={"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./\0"};
	while((c=getchar())!=EOF)
	{

		if(c=='`'||c=='Q'||c=='A'||c=='Z')
			putchar(c);
		else
		{
			inKeyboard=0;
			for(int i=0;keyboard[i]!='\0';i++)
			{
				if(keyboard[i]==c)
				{
					putchar(keyboard[i-1]);
					inKeyboard=1;
				}
			}
			if(!inKeyboard)
			{
				putchar(c);
			}
		}
	}

}
