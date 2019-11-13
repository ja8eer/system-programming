#include<stdio.h>
#include<unistd.h>
#include<pwd.h>
int main()
{
	struct passwd *pwd;
	int p=getuid();
	uid_t uid;
	printf("uid%d\n:",p);
	printf("euid%d\n",geteuid());
	printf("gid%d\n",getgid());
	printf("geid%d\n:",getegid());
	if((pwd=getpwuid(getuid()))==NULL)
		printf("nop\n");
	else
		printf("name :%s",pwd->pw_name);

}
