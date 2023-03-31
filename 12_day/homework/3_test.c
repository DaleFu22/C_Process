#include <stdio.h>
#include <string.h>
char fun(char p[],int m);
int main (void)
{
	char p[]="qwerrtyuiop";
	int m;
	printf ("%s\n",p);
	m=strlen(p);
	fun(p,m);
	return 0;
}

char fun(char p[],int m)
{
	int i=0;
	char t;
	for(i=0;i<m/2;i++){
		t=p[i];
		p[i]=p[m-1-i];
		p[m-1-i]=t;
	}
	printf ("%s\n",p);
}
