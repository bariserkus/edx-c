#include <stdio.h>
int main(void) {
    int iptot, ipday=1, day=1;
    int pop;
    iptot = ipday;
    scanf("%d",&pop);
    while (iptot < pop) {
        day++;
        ipday = iptot*2;
        iptot= iptot + ipday;
    }
    printf("%d", day);
    return 0;
}
