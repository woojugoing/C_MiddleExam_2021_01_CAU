#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main(void)
{
    int dan;						// scanf를 통해 사용자에게 받아오도록 하는 정수형 변수 'dan' 선언
    int i = 0;						// 정수형 변수 i를 선언하여 반복문을 사용하여 구구단에서 뒤를 곱해주는 역할을 함
    
    printf("U202100284 서경원\n\n");			// CMD 화면 출력
    printf("문제 3 : 구구단 출력 프로그램\n");			// CMD 화면 출력
    printf("단을 입력하세요? ");				// CMD 화면 출력
    
    scanf("%d", &dan);					// dan값을 scanf를 통하여 정수형으로 받아옴
    
    if( dan % 2 == 1 ){					// dan의 값이 홀수 일 때, 
        for(; dan > 1 ; dan--)				// dan 값을 2가 될때 까지 감소하게 하는 반복문 실행
        {
            for(i = 9; i > 0; i--){			// i값이 9를 초기값으로 하여 1이 될때 까지 감소하게 하는 반복문 실행
                printf("%d x %d = %d \n", dan, i, dan * i);// 해당 단에 대한 내림차순의 구구단을 출력하도록 실행
            }
        break;						// 첫번째 for문을 두번째 for문이 한바퀴 이행하고 난 후 break.
        }
    }
    else if( dan % 2 == 0 ){				// dan의 값이 짝수 일 때,
        for(; dan < 10 ; dan++)				// dan의 값을 10이 될때 까지 증가하게 하는 반복문 실행
        {
            for(i = 1; i < 10; i++){			// i값을 0을 초기값으로 하여 9가 될때 까지 증가하게 하는 반복문 실행
                printf("%d x %d = %d \n", dan, i, dan * i);// 해당 단에 대한 오름차순의 구구단을 출력하도록 실행
            }
        break;						// 첫번째 for문을 두번째 for문이 한바퀴 이행하고 난 후 break.
        }
    }
    else
        printf("System Error... Please Try Again, \n");	// 단의 값이 홀수도 짝수도 아닐 때, 시스템 에러 구문을 출력
    
    printf("\n구구단 %d단의 합은 %d 입니다. \n", dan, dan * 45); // 구구단의 합을 구하는 문장을 출력하는 명령으로, 합을 구하기 위해서는 해당 단에 45를 곱하면 되므로, 45를 곱해줌
}
