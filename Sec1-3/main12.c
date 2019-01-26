#include <stdio.h>
int main(void) {
    int pop, nextpop;
    double percinc;
    double d_nextpop;
    scanf("%d", &pop);
    scanf("%lf", &percinc);
    d_nextpop = pop*(100+percinc)/100;
    nextpop =(int) d_nextpop;
    printf("%d", nextpop);
    return 0;
}
