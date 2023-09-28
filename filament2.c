#include<stdio.h>

main()
{
	char a[100],b[100];
	printf("enter username = ");
	gets(a);
	printf("enter password = ");
	gets(b);
	
	if(strcmp(a,"krishna")==0)
	{
		if(strcmp,(b,"kinu@2007")==0)
		{
			printf("uer successfully logging");
		}
		else
		{
			printf("password entered is invaild");
		}
	}
	else
	{
		printf("username entered is invaild");
	}
}