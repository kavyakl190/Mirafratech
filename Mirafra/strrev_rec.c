/*
Name:KAVYA K L
Date:
Description:
Sample input:
Sample output:
*/
#if 1
#include<stdio.h>
void rev(char *str)
{
		if(*str)
		{
				rev(str+1);
				printf("%c",*str);
		}
}
int main()
{
		char str[100];
		printf("Enter string:\n");
		scanf("%s",str);
		rev(str);
		//printf("%s",str);
}
#endif

#if 0
#include<stdio.h>
int main()
{
		int n;
		printf("Enter no: ");
		scanf("%d",&n);
		n=-(~n);
		printf("Res is: %d\n",n);
}
#endif
