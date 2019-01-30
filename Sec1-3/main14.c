#include <stdio.h>
int main(void) {
    double Cement;
    int nBags, Money;

    scanf("%lf", &Cement);
    nBags = (int) Cement/120 + 1;
    Money = nBags*45;
    printf("%d", Money);
}
