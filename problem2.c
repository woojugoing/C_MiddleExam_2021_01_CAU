#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main(void)
{
	int time, age, cost;

	printf("U202100284 서경원");
	printf("문제 2 : 중앙 놀이 공원의 자유이용권의 가격을 계산하는 프로그램\n");
	printf("현재 시간과 나이를 입력하시오(시간, 나이) \n");
	scanf("%d, %d", &time, &age);

	if ((time >= 17) && ((age > 13) && (age < 64))) 						// 야간 대인
	{
		cost = 15000;
		printf("%d", cost);
	}
	else if ((time < 17) && ((age > 13) && (age < 64)))						// 주간 대인
	{
		cost = 42000;
		printf("%d", cost);
	}
	else if ((time >= 17) && ((age > 13) || (age < 64)))					// 야간 소인
	{
		cost = 15000;
		printf("%d", cost);
	}
	else if ((time >= 17) && ((age >= 3) || (age <= 12) || (age >= 65)))	// 주간 소인
	{
		cost = 28000;
		printf("%d", cost);
	}
	else
		printf("System Error");


}
