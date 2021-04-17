#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main(void)
{
	int num;										// 입력 받을 값을 받아오기 위해서 정수형 변수로 Num 지정
	int i = 0;										// 구구단이므로 1부터 9까지 해당 입력 받는 숫자를 곱해줘야 하므로 그 숫자를 i으로 지정

	printf("U202100284 서경원\n\n");				// CMD 출력
	printf("문제 3 : 구구단 출력 프로그램\n");		
	printf("단을 입력하세요?  ");
	scanf("%d", &num);								// 사용자가 원하는 단의 값을 받아옴	

	if (num % 2 == 0)								// num이 짝수 일때, 
		for (i = 1; i <= 9; i++)					// 1~9의 값을 상승하도록 순서대로 반복하기 위해 for 사용
		{
			printf("%d x %d = %d\n", num, i, num * i);	// 구구단 일렬로 표시 단, 밑의 조건과는 다르게 상승하는 조건문이므로 점점 커짐
		}

	else if (num % 2 == 1)							// num이 홀수 일때,
		for (i = 9; i >= 1; i--)					// 1~9의 값을 감소하도록 순서대로 반복하기 위해 for 사용
		{
			printf("%d x %d = %d\n", num, i, num * i);	// 구구단 일렬로 표시 단, 위의 조건과는 다르게 상승하는 조건문이므로 점점 작아짐
		}

	printf("\n구구단 %d 단의 합은 %d 입니다.\n", num, num * 45);	// 합을 출력하는데 가우스 공식을 이용하여 구하면 해당 Num 값에 45만 곱하면 되므로 자동으로 곱하여 출력
	return 0;
}
