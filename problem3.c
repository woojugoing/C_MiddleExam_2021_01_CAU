#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main(void)
{
    int dan;                                                  
    int i = 0;                                                
    
    printf("U202100284 서경원\n\n");                            
    printf("문제 3 : 구구단 출력 프로그램\n");                     
    printf("단을 입력하세요? ");                                  
    
    scanf("%d", &dan);                  // dan 값을 받아오기 위하여 정수형 변수 scanf를 초기값이 
    
    if( dan % 2 == 1 ){
        for(; dan > 1 ; dan--)
        {
            for(i = 9; i > 0; i--){
                printf("%d x %d = %d \n", dan, i, dan * i);
            }
        break;
        }
    }
    else if( dan % 2 == 0 ){
        for(; dan < 10 ; dan++)
        {
            for(i = 1; i < 10; i++){
                printf("%d x %d = %d \n", dan, i, dan * i);
            }
        break;
        }
    }
    else
        printf("System Error... Please Try Again, \n");
    
    printf("\n구구단 %d단의 합은 %d 입니다. \n", dan, dan * 45);
}
