#include<stdio.h>
#include<stdlib.h>
#include<pwd.h>
#include<unistd.h>
int main()
{
	struct passwd *pwd;
	if((pwd=getpwuid(getuid()))!=NULL)
	{
		printf("username :%s\n",pwd->pw_name);
		printf("dir :%s\n",pwd->pw_dir);
		printf("shell :%s\n",pwd->pw_shell);
	//	printf("username :%s\n",pwd->pw_name);
	}
}w
