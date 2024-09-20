#define	_CRT_SECURE_NO_WARNINGS 1

#include "Cases_functions.h"

void menu()
{
	printf(" 1. Str_reverser(字符逆序)\n");
	printf(" 2. Check_sys_byte-order(大小端检测)\n");
	printf(" 3. Floating-point formula output(unfinished)(浮点数公式输出)\n");
	printf(" 4. Sum of Sn(Sn之和)\n");
	printf(" 5. Pointer print array(指针输出数组)\n");
	printf(" 6. Narcissitic Numbers(0-100000)(水仙花数字)\n");
	printf(" 7. Print diamond(打印菱形)\n");
	printf(" 8. Soda problem(苏打水问题)\n");
	printf(" 9. Odd even sort(奇偶排序)\n");
	printf("10. Pascal's triangle(杨辉三角)\n");
	printf("11. Killer pronlem(谁是杀手)\n");
	printf("12. Diving pronlem(跳水排名)\n");
	printf("13. Qsort function is used(手写qsort与使用)\n");
	printf("14. YanghuiTriangle(杨辉三角)\n");
	printf("15. YanghuiTriangle(Recursion)(杨辉三角)\n");
	printf("16. Dive Ranking Question(跳水排名)\n");
	printf("17. Finds a number from the Young Tableau(O(1))\n");
	printf("18. Str left rotation(Traversal + Three-step flip)\n");
	printf("19. My strlen(Recursion)\n");
	printf("20. My strcpy\n");
	printf("21. My strcat\n");
	printf("22. My strcmp\n");
	printf("23. My strncpy\n");
	printf(" 0. EXIT\n");
	printf(">");
}

int main()
{
	int o = 0;

	while (1)
	{
		o = 0;

		menu();

		scanf_s("%d", &o);

		int (*parr[])() = { NULL, reverser, Check_sys, FFO, SumOfSn,
							PointerPrintArray, NarcissisticNumber,
							PrintDiamond, SodaProblem, OddEvenSort,
							PascalTriangle, Killer, DivingProblem,
							QsortFunIsUsed, YanghuiTriangle, YanghuiTriangle_Recursion,
							DiveRanking, FindsNumberYoungTableau, StrLeftRotation, myStrlen,
							myStrcpy, myStrcat, myStrcmp, myStrncpy
		};

		if (o > 0 && o <= 23)
			parr[o]();
		else if (o == 0)
			return 0;
		else
			printf("enter error\n");

		system("pause");
		system("cls");
	}

	return 0;
}