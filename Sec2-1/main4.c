#include <stdio.h>
int main(void) {
    int PastNoon, Price;
    scanf("%d", &PastNoon);
    Price = 10 + 5*PastNoon;
    if(Price > 53){
        Price = 53;
    }
    printf("%d", Price);
    return 0;
}
