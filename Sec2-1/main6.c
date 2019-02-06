#include <stdio.h>
int main(void) {
    // + - * / % : arithmetic operations
    // <  >  <=  >=  !=  ==  :  comparison operations
    int dice1, dice2, fee;
    scanf("%d %d", &dice1, &dice2);

    if(dice1+dice2>=10){
        fee = 36;
        printf("Special tax\n");
        printf("%d", fee);
    }else{
        fee = 2*(dice1+dice2);
        printf("Regular tax\n");
        printf("%d",fee);
    }
    return 0;
}
