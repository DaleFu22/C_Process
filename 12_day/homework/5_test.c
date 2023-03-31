#include <stdio.h>
#include <string.h>

int count[4];
int *counter_number(char *p,int n);

int main(void)
{
	int i = 0;
	int *p;
	char s[100] = {0};
	printf("Plese input a string:");
	while((s[i++] = getchar()) != '\n');
	s[--i] = '\0';
	printf("%s\n",s);

	p = counter_number(s,strlen(s));

	printf("小写字母:%d\n",p[0]);
	printf("大写字母:%d\n",p[1]);
	printf("数字个数:%d\n",p[2]);
	printf("其他字符:%d\n",p[3]);

	return 0;
}

int *counter_number(char *p,int n)
{
	int i;
	for(i = 0;i < n;i++)
	{
		if(p[i] >= 'a' && p[i] <= 'z')
		{
			count[0] = count[0]+1;
		}
		else if(p[i] >= 'A' && p[i] <= 'Z')
		{
			count[1] = count[1]+1;
		}
		else if(p[i] >= '0' && p[i] <= '9')
		{
			count[2] = count[2]+1;
		}
		else
		{
			count[3] = count[3]+1;
		}
	}
	return count;
}
