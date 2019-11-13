#include<stdio.h>
#include<pwd.h>
#include<unistd.h>
int main()
{
	printf("uid	:%d\n",getuid());
	if(setuid(1000)!=0)
		printf("cannot\n");
	else 
		printf("uid	:%d\n",getuid());
	if(seteuid(0)!=0)
		printf("yssss\n");
	else
		printf("eudi	:%d\n",geteuid());
	if(setgid(0)!=0)
		printf("lol\n");

}

