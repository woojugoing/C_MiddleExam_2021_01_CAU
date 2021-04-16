#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main() {

    int Num1, Num2;
    int Sign = 0;
    int Ans, Ins;

    srand((unsigned)time(NULL));

    printf("U202100284 서경원\n");
    printf("문제 1 : 1부터 100사이의 난수를 발생하여 덧셈/뺄셈/곱셈에 대한 검증 프로그램\n");

    while (1) {

        Num1 = rand() % 100 + 1;
        Num2 = rand() % 100 + 1;
        Sign++;

        switch (Sign)
        {
        case 1:
            Ans = Num1 + Num2;
            printf("%d + %d = ", Num1, Num2);
            break;
        case 2:
            Ans = Num1 - Num2;
            printf("%d - %d = ", Num1, Num2);
            break;
        case 3:
            Ans = Num1 * Num2;
            printf("%d * %d = ", Num1, Num2);
            break;
        case 4:
            exit(0);
            break;

        }


        scanf("%d", &Ins);

        if (Ans == Ins)
            printf("정답!\n\n");
        else
            printf("오답..\n\n");

    }
}
