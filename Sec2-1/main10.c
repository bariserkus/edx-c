#include <stdio.h>
int main(void) {
    int cost, costa, costb, age, luggage;
    scanf("%d", &age);
    scanf("%d", &luggage);
    if(age==60){
        costa=0;
        costb=0;
        }
    else if(age<10){
        costa=5;
        costb=0;
        }
    else{
        costa=30;
        costb=0;
        if(luggage>20)
        costb=10;
        }
    cost=costa+costb;
    printf("%d", cost);
    return 0;
}
