#include <stdio.h>
#include <string.h>

void sort_point_array(char *name[],int n);

int main(void)
{
	int i,n;
	char *name[] = {"red","green","apple","blue"};
	n = sizeof(name)/sizeof(char *);
	for(i = 0;i < n;i++)
	{
		printf("%s\t",name[i]);
	}
	puts("");

	sort_point_array(name,n);

	for(i = 0;i < n;i++)
	{
		printf("%s\t",name[i]);
	}
	puts("");
	return 0;
}
#if 0
//冒泡排序
//void sort_point_array(char **name,int n)
void sort_point_array(char *name[],int n)
{
	int i,j;
	char *temp;
	for(i = 0;i < n-1;i++)
	{
		for(j = 0;j < n-1-i;j++)
		{
			if(strcmp(name[j],name[j+1]) > 0)
			{
				temp = name[j];
				name[j] = name[j+1];
				name[j+1] = temp;	
			}
		}
	}
}
#endif
//选择排序
void sort_point_array(char *name[],int n)
{
	int i,j;
	char *temp;
	for(i = 0;i < n-1;i++)
	{
		for(j = i+1;j < n;j++)
		{
			if(strcmp(name[i],name[j]) > 0)
			{
				temp = name[i];
				name[i] = name[j];
				name[j] = temp;	
			}
		}
	}
}
