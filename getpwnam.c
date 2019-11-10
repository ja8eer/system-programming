#include<stdio.h>
#include<pwd.h>
#include<stdlib.h>
int main(int args,char *argv[])
{
	if(args>2)
        {
                printf("too many arguements\nusage :$./<prgName> <userName>\n");
                exit(0);
        }

	else if(args>=2)
	{
		struct passwd *pwd;
		if((pwd=getpwnam(argv[1]))==NULL)
		{
			printf("invalid user name\n");
			exit(0);
		}
		pwd=getpwnam(argv[1]);
		printf("username :%s\n",pwd->pw_name);
		printf("userID 	 :%d\n",pwd->pw_uid);
		printf("groupID	 :%d\n",pwd->pw_gid);
		printf("userINFO :%s\n",pwd->pw_gecos);
		printf("userDIR	 :%s\n",pwd->pw_dir);
		printf("loginShell :%s\n",pwd->pw_shell);
		exit(0);
	}
	else
	{
		printf("no arguement specified\nusage $<prgName> <userName>\n");
		exit(0);
	}
}
