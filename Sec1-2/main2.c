#include <stdio.h>

int main(void){
    int nRobots;
    int enginePower;
    int resistance;
    int weight;
    int height;
    int power;
    int totalPower = 0;
    int i;

    printf("How many robots do you have? ");
    scanf("%d", &nRobots);
    for(i=0; i<nRobots; i++){
        printf("Please enter Engine Power for the %dth robot:", i+1);
        scanf("%d", &enginePower);
        printf("Please enter Resistance for the %dth robot:", i+1);
        scanf("%d", &resistance);
        printf("Please enter Weight for the %dth robot:", i+1);
        scanf("%d", &weight);
        printf("Please enter Height for the %dth robot:", i+1);
        scanf("%d", &height);
        power = (enginePower + resistance) * (weight - height);
        printf("Power of the %dth robot is = %d\n", i, power);
        totalPower = power + totalPower;
    }
    printf("Total Power =%d", totalPower);
}
