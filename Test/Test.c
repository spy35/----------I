#include <stdio.h>
#include <stdlib.h>

int main() {
    int user, ran;

    printf("가위: 1 바위: 2 보: 3: ");
    scanf("%d", &user);

    ran = rand() % 3 + 1;    
    printf("컴퓨터의 값은 %d\n", ran);

    if (user == 1) {
        if (ran == 1)
        {
            printf("비겼습니다");
        } else if(ran == 2) {
            printf("졌습니다");
        } else if (ran == 3) {
            printf("이겼습니다");
        }
        
    } else if (user == 2) {
        if (ran == 1) {
            printf("이겼습니다");
        } else if(ran == 2) {
            printf("비겼습니다");
        } else if (ran == 3) {
            printf("졌습니다");
        }

    } else if ( user== 3) {
        if (ran == 1) {
            printf("졌습니다");
        } else if(ran == 2) {
            printf("이겼습니다");
        } else if (ran == 3) {
            printf("비겼습니다");
        }
    }
     
    return 0;
}