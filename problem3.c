#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main() {

    int Num1, Num2;                         // 입력값을 받아 주기 위한 정수형 변수 선언, 서로 다른 난수의 숫자를 두 개를 받아올 것이기 때문에 Num1,                                                           Num2 로 지정함.
    int Sign = 0;                           // 질문의 횟수를 Switch 구문으로 질문을 한정해 주기 위해 정수형 변수 Sign을 선언하고 초기값을 0으로 지정함.
    int Ans, Ins;                           // 정답과 오답의 참 거짓을 컴퓨터의 계산을 통하여 if문으로 판단하기 위해서 사용자가 입력한 값을 Insert, 실제 답을                                                Answer 의 축약형으로 정수형 변수로 지정함

    srand((unsigned)time(NULL));            // 난수 생성을 위해서 매번 난수의 시드를 변경해줌.

    printf("U202100284 서경원\n");          // 결과값 출력 
    printf("문제 1 : 1부터 100사이의 난수를 발생하여 덧셈/뺄셈/곱셈에 대한 검증 프로그램\n");    // 결과값 출력

    while (1) {                             // while 문 출력함, 역할은 해당 lung에서 설명 하겠음.

        Num1 = rand() % 100 + 0;            // Num1을 0부터 99 사이의 난수로 지정함. 모든 값은 100으로 나누면 나머지가 0에서 99 사이이기 때문에 거기에 1을 더해줘서 1부터 100까지의 난수로 지정할 수 있음.
        Num2 = rand() % 100 + 0;            // Num2를 0부터 99 사이의 난수로 지정함.
        Sign++;                             // 앞에서 지정해준 문장의 횟수를 계속 더해줌.

        switch (Sign)                       // Switch 구문
        {
        case 1:
            Ans = Num1 + Num2;                      // 컴퓨터에서 사용자가 값을 넣기 전에 미리 덧셈을 계산함
            printf("1. %d + %d = ", Num1, Num2);    // 해당 난수에 대한 더하기를 CMD에 출력
            break;                                  // Case 1 break
        case 2:                     
            Ans = Num1 - Num2;                      // 컴퓨터에서 사용자가 값을 넣기 전에 미리 뺄셈을 계산함
            printf("2. %d - %d = ", Num1, Num2);    // 해당 난수에 대한 빼기를 CMD에 출력
            break;                                    // Case 2 break
        case 3:     
            Ans = Num1 * Num2;                      // 컴퓨터에서 사용자가 값을 넣기 전에 미리 곱셈을 계산함
            printf("3. %d * %d = ", Num1, Num2);    // 해당 난수에 대한 곱하기를 CMD에 출력
            break;                                  // Case 3 break
        case 4:                                           
            exit(0);                                
            break;                                  // 마지막 Switch Case Break

        }


        scanf("%d", &Ins);                          // 해당 문제들을 보고 사용자가 답을 입력함

        if (Ans == Ins)                             
            printf("정답!\n\n");                    // 컴퓨터의 계산과 사용자의 답이 맞으면 정답!을 출력
        else
            printf("오답..\n\n");                   // 컴퓨터의 계산과 사용자의 답이 다르면 오답..을 출력

    }

    return 0;
}
