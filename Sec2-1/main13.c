#include <stdio.h>
int main(void) {
    int height, leaves;
    scanf("%d",&height);
    scanf("%d",&leaves);
    if(height<=5 && leaves>=8)
        printf("Tinuviel");
    else if(height>=10 && leaves>=10)
        printf("Calaelen");
    else if(height<=8 && leaves<=5)
        printf("Falarion");
    else if(height>=12 && leaves>=7)
        printf("Dorthonion");
    else
        printf("Uncertain");
    return 0;
}
