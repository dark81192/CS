#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//����1-n�Ľ׳ˣ����������
	int i = 0;
	int sum = 0;	//�ܺ�
	int ret = 1;	//�׳�
	int n = 0; //������Ϣ
	
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
		ret = 1;
	}

	return 0;
}