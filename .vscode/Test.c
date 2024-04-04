#include <stdio.h>
#define SEC_PRE_MINUTE 60

int main() {
    int a = 1, b = 2, c = 3, d = 4, result;
    double r;

    result = a + b * c / (double)d;
    r = a + b * c / (double)d;
    printf("결과: %04d \t %.2lf\n",result, r);

    result = (a + b) * c / (double)d;
    r = (a + b) * c / (double)d;
    printf("결과: %04d \t %.2lf\n", result, r);

    printf("결과: %04d \t %.2lf", 36523, 129.12954798999);

    return 0;
}