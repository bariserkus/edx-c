#include <stdio.h>

int main(void){
    int a=5, b=2;
    int result;
    result = (a==b);
    printf("%d\n", result);
    if(result){
        printf("TRUE");
    }else{
        printf("FALSE");
    }

    return 0;
}
