#include <stdio.h>
int main(void){
    double weight[50];
    double tweight = 0, aveweight;
    int nwagons, i = 0;
    scanf("%d", &nwagons);
    for(i=0;i<nwagons;i++){
        scanf("%lf",&weight[i]);
        tweight = tweight + weight[i];
    }
    aveweight = tweight/nwagons;
    for(i=0;i<5;i++){
        printf("%.1lf\n",-weight[i]+aveweight);
    }
    return 0;
}
