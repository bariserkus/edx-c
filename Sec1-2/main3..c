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

    scanf("%d", &nRobots);
    for(i=0; i<nRobots; i++){
        scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
        power = (enginePower + resistance) * (weight - height);
        totalPower = power + totalPower;
    }
    printf("%d", totalPower);
}
