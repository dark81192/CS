#define	_CRT_SECURE_NO_WARNINGS 1

#include "Cases_functions.h"

void menu()
{
	printf(" 1. Str_reverser(�ַ�����)\n");
	printf(" 2. Check_sys_byte-order(��С�˼��)\n");
	printf(" 3. Floating-point formula output(unfinished)(��������ʽ���)\n");
	printf(" 4. Sum of Sn(Sn֮��)\n");
	printf(" 5. Pointer print array(ָ���������)\n");
	printf(" 6. Narcissitic Numbers(0-100000)(ˮ�ɻ�����)\n");
	printf(" 7. Print diamond(��ӡ����)\n");
	printf(" 8. Soda problem(�մ�ˮ����)\n");
	printf(" 9. Odd even sort(��ż����)\n");
	printf("10. Pascal's triangle(�������)\n");
	printf("11. Killer pronlem(˭��ɱ��)\n");
	printf("12. Diving pronlem(��ˮ����)\n");
	printf("13. Qsort function is used(��дqsort��ʹ��)\n");
	printf("14. YanghuiTriangle(�������)\n");
	printf("15. YanghuiTriangle(Recursion)(�������)\n");
	printf("16. Dive Ranking Question(��ˮ����)\n");
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