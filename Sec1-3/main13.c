#include <stdio.h>
int main(void) {
    double myMoney, bookPrice;
    int nBooks;

    scanf("%lf", &myMoney);
    scanf("%lf", &bookPrice);
    nBooks = (int) myMoney/bookPrice;
    printf("%d", nBooks);
}
