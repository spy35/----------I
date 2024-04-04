#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void) {
	printf("********************\n");
	printf("* 202404023 이동연 *\n");
	printf("********************\n\n");

	int x;

	printf("16진수 입력: ");
	scanf("%x", &x); //16진수 값을 입력

	printf("%x의 8진수: %o\n", x, x); //16진수 값을 8진수로 출력
	printf("%x의 10진수: %d\n", x, x); // 16진수 값을 10진수로 출력

	printf("지정된 변수의 크기: %dbyte", sizeof(x)); //입력한 변수의 크기를 출력

	return 0;
}