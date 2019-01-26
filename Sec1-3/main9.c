#include <stdio.h>
int main(void) {
    // pay 166 dollars using 20-dollar bills, rest with 1-dollar bills
    int nMatch;
    int BoxSize;
    int nBox;
    int nLeft;
    scanf("%d", &nMatch);
    scanf("%d", &BoxSize);
    nBox = nMatch/BoxSize;
    nLeft = nMatch%BoxSize;
    printf("%d\n", nBox);
    printf("%d", nLeft);
    return 03;
}
