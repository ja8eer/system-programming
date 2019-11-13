#include<stdio.h>
#include<unistd.h>
#include<grp.h>
int main()
{
	struct group *grp;
	if((grp=getgrgid(getgid()))!=NULL)
	{
		printf("group name :%s\n",grp->gr_name);
		char **mem;
		printf("member included in this group\n");
		for(mem=grp->gr_mem;(*mem)!=NULL;mem++)
			printf("[]%s\n",*mem);
	}
}
