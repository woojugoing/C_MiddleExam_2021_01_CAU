#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main(void)
{
	int time, age, cost;									// 입력 받는 시간을 나타내기 위한 time, 입력 받는 나이를 나타내기 위한 age, 결과값인 가격을 나타내기 위한 cost는 각각 정수이므로 정수형 변수 int를 통하여 선언

	printf("U202100284 서경원\n");							// CMD에 출력
	printf("문제 2 : 중앙 놀이 공원의 자유이용권의 가격을 계산하는 프로그램\n");	// CMD에 출력
	printf("현재 시간과 나이를 입력하시오(시간 나이) : ");							// CMD에 출력
	scanf("%d %d", &time, &age);					// CMD에서 time, age에 대한 변수를 받아옴


	if ((time >= 17)&&(time < 24)) {						// 시간이 17시 이후부터 23시 까지

		if (age >= 3) {										// 야간 소인 및 대인 : 둘다 15000원 이므로 프로그램 양의 감소를 위해 합침
			
			cost = 15000;									// 문제 사전 제시 값
			printf("입실 시간은 오후 5시 이후인 %d 시 이며, 요금은 %d 원 입니다.\n", time, cost);	//입력 받은 시간과 이전/이후 여부, 해당 이용권의 요금을 한 문장으로 표시
		}

		else {												// 3세 미만 영유아 나이 입력 시 위험 구문 표시

			printf("[WARNINGS!!] YOU ARE TOO YOUNG\n");		// 위험 구문 표시
		}
	}

	else if ((time < 17)&&(time >= 0)) {					// 시간이 0시 이후 부터 17시 이전 까지
	
		if ((age >= 13) && (age < 65)) {					// 주간 대인

			cost = 42000;									// 문제 사전 제시 값
			printf("입실 시간은 오후 5시 이전인 %d 시 이며, 요금은 %d 원 입니다.\n", time, cost);
		}

		else if (age >= 3)   {								// 주간 소인 [ 대인이 아닌 나이 중에서 3세 이상을 표현한 것이므로 문제의 소인 : 3 - 12세, 65세 이상을 만족함]

			cost = 28000;									// 문제 사전 제시 값
			printf("입실 시간은 오후 5시 이전인 %d 시 이며, 요금은 %d 원 입니다.\n", time, cost);
		}

		else {												// 3세 미만 영유아 나이 입력 시 위험 구문 표시

			printf("[WARNINGS!!] YOU ARE TOO YOUNG\n");		// 위험 구문 표시
		}
	}
	else {													// 입력 값 오류 시 에러 처리 : 시간에 24 이상의 값을 넣었을 때
		printf("System Error");
	}

	return 0;

}
