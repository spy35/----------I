#include <stdio.h>
#include <stdlib.h>

int main() {
    int user, ran;

    printf("����: 1 ����: 2 ��: 3: ");
    scanf("%d", &user);

    ran = rand() % 3 + 1;    
    printf("��ǻ���� ���� %d\n", ran);

    if (user == 1) {
        if (ran == 1)
        {
            printf("�����ϴ�");
        } else if(ran == 2) {
            printf("�����ϴ�");
        } else if (ran == 3) {
            printf("�̰���ϴ�");
        }
        
    } else if (user == 2) {
        if (ran == 1) {
            printf("�̰���ϴ�");
        } else if(ran == 2) {
            printf("�����ϴ�");
        } else if (ran == 3) {
            printf("�����ϴ�");
        }

    } else if ( user== 3) {
        if (ran == 1) {
            printf("�����ϴ�");
        } else if(ran == 2) {
            printf("�̰���ϴ�");
        } else if (ran == 3) {
            printf("�����ϴ�");
        }
    }
     
    return 0;
}