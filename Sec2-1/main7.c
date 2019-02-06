#include <stdio.h>
int main(void) {
    // + - * / % : arithmetic operations
    // <  >  <=  >=  !=  ==  :  comparison operations
    int i, players, weight1, weight2, totalweight1=0, totalweight2=0;
    scanf("%d", &players);
    for (i=0; i<players; i++){
        scanf("%d", &weight1);
        totalweight1 = weight1 + totalweight1;
        scanf("%d", &weight2);
        totalweight2 = weight2 + totalweight2;
    }

    if(totalweight1>totalweight2){
        printf("Team 1 has an advantage\n");
    }else{
        printf("Team 2 has an advantage\n");
    }
    printf("Total weight for team 1: %d\n", totalweight1);
    printf("Total weight for team 2: %d\n", totalweight2);
    return 0;
}
