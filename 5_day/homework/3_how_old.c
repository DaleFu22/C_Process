#include <stdio.h>

int main(void)
{
	int age;
	int stu_year,stu_mon,stu_day,now_year,now_mon,now_day;
	printf("请输入学生出生日期:");
	scanf("%d%d%d",&stu_year,&stu_mon,&stu_day);
	printf("请输入当前的日期:");
	scanf("%d%d%d",&now_year,&now_mon,&now_day);

	if(now_mon > stu_mon)
	{
		age = now_year - stu_year;
	}
	else if(now_mon == stu_mon)
	{
		if(now_day >= stu_day)
		{
			age = now_year - stu_year;
		}
		else
		{
			age = now_year - stu_year - 1;
		}
	}
	else
	{
		age = now_year - stu_year -1;
	}

	printf("age:%d\n",age);

	return 0;
}
