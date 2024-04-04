#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("********************\n");
	printf("* 202404023 이동연 *\n");
	printf("********************\n");

	int year;

	printf("태어난 해: ");
	scanf("%d", &year); // 태어난 연도 입력

	if (year < 0) { // 정수값이 마이너스면 출력
		printf("잘못 입력하였습니다");
	}
	else if (year < 1996 && year > 0) { // 정수값이 0 ~ 1996년 사이면 출력
		printf("입영대상자가 아닙니다.");
	}
	else if(year >= 1996 && year <= 2006) { // 정수 값이 1996 ~ 2006년 사이면 출력
		printf("입영 대상자 입니다.");
	}
	else if (year < 2006 && year > 2024) { // 정수 값이 2006 ~ 2024년 사이면 출력
		printf("입영 대상자가 아닙니다.");
	}
	else if(year > 2024) { // 정수 값이 2024년 이후면 출력
		printf("잘못 입력하였습니다.");
	}

	return 0;
}