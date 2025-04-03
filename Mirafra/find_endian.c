/*
Name:KAVYA K L
Date:
Description:
Sample input:
Sample output:
*/
#if 0
#include<stdio.h>
int main()
{
		int x=12345678;
		char *ptr;
		ptr=(char *)&x;
		if(*ptr == 78)
		{
				printf("little endian\n");
		}
		else
		{
				printf("big endian\n");
		}
		return 0;
}
#endif

#if 1
#include<stdio.h>
#pragma pack(1)
/*union u
{
		int num;
		char byte[4];
};*/
int main()
{
		union u{
				int num;
				unsigned char byte[4];
		};
		union u v;
		v.num=0x12345678;
		v.byte[0]==(unsigned char)78?printf("little endian") : printf("big endian");
}
#endif
