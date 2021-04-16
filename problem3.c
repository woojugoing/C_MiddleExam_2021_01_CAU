#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main(void)
{
	int num;
	int i = 0;

	printf("U202100284 서경원\n\n");
	printf("문제 3 : 구구단 출력 프로그램\n");
	printf("단을 입력하세요?  ");
	scanf("%d", &num);

	if (num % 2 == 0)
		for (i = 1; i <= 9; i++)
		{
			printf("%d x %d = %d\n", num, i, num * i);
		}

	else if (num % 2 == 1)
		for (i = 9; i >= 1; i--)
		{
			printf("%d x %d = %d\n", num, i, num * i);
		}

	printf("\n구구단 %d 단의 합은 %d 입니다.", num, num * 45);
}
