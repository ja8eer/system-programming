#include<stdio.h>
#include<stdlib.h>
#include<grp.h>
int main(int args,char *argv[])
{
	struct group *grp;

	if(args>2)
	{
		printf("so many arguemnets \n");
		goto usage;		
	}
	if(args<2)
	{
		printf("no arguement specified\n");
		goto usage;
	}
	if((grp=getgrnam(argv[1]))!=NULL)
	{
		printf("group name :%s\n",grp->gr_name);
		printf("group id   :%d\n",grp->gr_gid);
                char **mem;
                printf("member included in this group\n");
                for(mem=grp->gr_mem;(*mem)!=NULL;mem++)
                        printf("[]%s\n",*mem);
		exit(0);
	}
	else
	{
		printf("invalid group name\n");
		exit(0);
	}
usage:
        printf("usage :$./getgrname <groupName>\n");
        exit(0);

}
			

