#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("*********************\n");
	printf("* 202404023 이동연 *\n");
	printf("*********************\n");

	int year; //영화 정보 변수 선언
	char genre;
	float grade;
	short time;

	printf("[영화정보입력]\n");

	printf("개봉연도: "); // 영화 정보 값 입력
	scanf("%d", &year);

	printf("장르: ");
	scanf(" %c", &genre);

	printf("평점(네이버기준): ");
	scanf(" %f", &grade);

	printf("상영시간: ");
	scanf(" %hd", &time);

	printf("\n\"1917\"\n"); // 입력된 정보 값들을 출력
	printf(" - %d년 개봉\n", year);
	printf(" - 장르: %c\n", genre);
	printf(" - 평점: %.2f\n", grade);
	printf(" - %d분 상영\n", time);

	return 0;
}