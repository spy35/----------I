#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long property;
	long long int saving; // long long = long long int

	printf("매달 저축 금액을 입력하시요: ");
	scanf("%lld", &saving);

	property = saving * 12 * 30;

	printf("30년 후의 재산 = %lld원\n", property);

	return 0;
}