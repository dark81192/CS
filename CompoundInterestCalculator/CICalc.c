#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define interest principal * (profitability * 0.01)
#define pai principal + interest

int main()
{
	int i = 1, year = 0;

	float profitability = 0.0;
	float  principal = 0;

	char str1[] = "请输入一个固定的年化利率(例：3.3% 输入 3.3)：";
	char str2[] = "请输入复利周期(单位年)：";
	char str3[] = "请输入本金：";

	printf("%s", str1);
	scanf("%f", &profitability);
	printf("%s", str2);
	scanf("%d", &year);
	printf("%s", str3);
	scanf("%f", &principal);

	while (year >= i)
	{
		if(i == 1)
			printf("利率：%.2f%\n复利执行周期：%d\n本金：%.2f\n\t\n\t\n\t\n", profitability, year, principal);
		printf("第%d年\n", i);
		printf("本息合计：%f\n" ,pai);
		principal = pai;
		i++;
	}

	return 0;
}