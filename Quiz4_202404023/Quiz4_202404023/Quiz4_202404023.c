#include <stdio.h>

int main() {
	printf("********************\n");
	printf("* 202404023 이동연 *\n");
	printf("********************\n");

	long long int bank;
	int salary, expenditure;

	printf("현제 통장 잔고: ");
	scanf_s("%lld", &bank);

	printf("월급: ");
	scanf_s(" %d", &salary);

	printf("고정지출: ");
	scanf_s(" %d", &expenditure);

	bank += salary - expenditure;

	printf("다음 달 예상 통장 잔고: %lld,%03lld", bank / 1000, bank % 1000);

	return 0;
}