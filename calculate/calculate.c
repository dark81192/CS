#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����10λ���ֵ�ƽ��ֵ���ҳ����ֵ

int main()
{
	//������������������ͳ�ʼ������
	int i, arr[10] = { 0 };
	//����10λ����
	printf("ʾ����1 2 3 4 5 6 7 8 9 10\n");
	printf("Please enter a ten-digit integers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//����ƽ��ֵ�����ֵ
	int max = arr[0];
	float avg = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
		avg += arr[i];
	}
	//������
	printf("max = %d, avg = %.2f\n", max, avg / i);
	return 0;
}