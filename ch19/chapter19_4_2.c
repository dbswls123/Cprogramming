//20장 5번 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int user, computer;
    int win=0, same=0;
    
    srand((int)time(NULL));
    
    while(1){
        printf("바위는 1, 가위는 2, 보는 3:");
        scanf("%d", &user);
        
        computer=rand()%3+1;
        if(user<1||user>3){
            printf("잘못된 입력입니다.");
            continue;
        }
        
        if(user==1)
            printf("당신은 바위 선택, ");
        else if(user==2)
            printf("당신은 가위 선택, ");
        else
            printf("당신은 보 선택, ");
        
        if(computer==1)
            printf("컴퓨터는 바위 선택, ");
        else if(computer==2)
            printf("컴퓨터는 가위 선택, ");
        else
            printf("컴퓨터는 보 선택, ");
        
        if(user==computer){
            printf("비겼습니다!\n");
            same++;
        }
        else if((user==1&&computer==2)||
                (user==2&&computer==3)||
                (user==3&&computer==1)){
            printf("당신이 이겼습니다!\n");
            win++;
        }
        else{
            printf("당신이 졌습니다!\n");
            break;
        }
    }
    printf("게임의 결과 : %d승, %d무", win, same);
}
