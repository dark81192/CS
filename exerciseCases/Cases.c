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
	printf("17. Finds a number from the Young Tableau(Time complexityO(1))\n");
	printf(">");
}

int main()
{
	int o = 0;

	menu();

	scanf_s("%d", &o);

	int (*parr[18])() = { NULL, reverser, Check_sys, FFO, SumOfSn,
						PointerPrintArray, NarcissisticNumber,
						PrintDiamond, SodaProblem, OddEvenSort,
						PascalTriangle, Killer, DivingProblem,
						QsortFunIsUsed, YanghuiTriangle, YanghuiTriangle_Recursion,
						DiveRanking, FindsNumberYoungTableau
						};

	if(o > 0 && o <= 18)
		parr[o]();

	return 0;
}