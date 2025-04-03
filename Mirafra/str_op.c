/*
Name:KAVYA K L
Date:
Description:
Sample input:
Sample output:
*/
#include<stdio.h>
#if 0                    //strlen 
int main()
{
		char str[100];
		printf("Enter string: ");
		scanf("%[^\n]",str);
		int len=0,i=0;
		while(str[i]!='\0')
		{
				len++;
				i++;
		}
		printf("\nlen is: %d",len);
}
#endif

#if 0                  //strcmp
int main()
{
		char str1[20];
		char str2[20];
		printf("Enter str1: \n");
		scanf("%[^\n]",str1);
		printf("Enter str2: \n");
		scanf(" %[^\n]",str2);
		int i=0;
		int flag=0;
		while(str1[i]!='\0' && str2[i]!='\0')
		{
				if(str1[i]!=str2[i])
				{
						flag=1;
						break;
				}
				i++;
		}
		if(flag==0 && str1[i]=='\0' && str2[i]=='\0')
		{
				printf("strings are equal\n");
		}
		else
		{
				printf("strings are not equal\n");
		}
}
#endif

#if 0                     //strrev
#include<string.h>
int main()
{
		char str[20];
		printf("Enter str: ");
		scanf("%[^\n]",str);
		int i=0;
		int j=strlen(str)-1;
		while(i!=j)
		{
				char temp=str[i];
				str[i]=str[j];
				str[j]=temp;
				i++;
				j--;
		}
		printf("reversed string is: %s\n",str);
}
#endif

#if 0               //strcpy
int main()
{
		char str[20];
		char cpy[20];
		printf("Enter string: ");
		scanf("%[^\n]",str);
		int i;
		for(i=0;str[i]!='\0';i++)
		{
				cpy[i]=str[i];
		}
		cpy[i]='\0';
		printf("copied string: %s\n",cpy);
}
#endif

#if 0                    //strstr
int main()
{
		char str[50];
		char str1[20];
		printf("Enter string: ");
		scanf("%[^\n]",str);
		getchar();
		printf("Enter substring: ");
		scanf("%[^\n]",str1);
        
}
#endif
