#include <stdio.h>
int main(void) {
    int value, sum=0;
    scanf("%d", &value);
    while (value!=-1) {
        sum = sum+value;
        scanf("%d", &value);
    }
    printf("%d",sum);
    return 0;
}
