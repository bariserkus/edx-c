#include <stdio.h>
int main(void) {
    double prices[10], weights[10], tprice=0;
    int ning, i;
    scanf("%d", &ning);
    for (i=0; i<ning; i++){
        scanf("%lf", &prices[i]);
    }
    for (i=0; i<ning; i++){
        scanf("%lf", &weights[i]);
    }
    for (i=0; i<ning; i++){
        tprice=tprice+prices[i]*weights[i];
    }
    printf("%lf", tprice);

    return 0;
}
