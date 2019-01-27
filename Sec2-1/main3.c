#include <stdio.h>
int main(void) {
    int nPerson;
    double Gas, Cost;
    scanf("%d %lf", &nPerson, &Gas);
    if(nPerson == 0){
        Cost = Gas;
    }else{
        Cost = (1.0 + Gas)/(nPerson+1);
    }
    printf("%.2lf", Cost);
    return 0;
}
