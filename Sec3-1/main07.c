#include <stdio.h>
int sumOfDigits(int);
int main(void){
    int num, sum;
    scanf("%d", &num);
    sum=sumOfDigits(num);
    printf("%d", sum);
}

int sumOfDigits(int a){
    if (a<10){
        return a;
    } else {
        return a%10 + sumOfDigits((a-a%10)/10);
    }
}
