#include <stdio.h>
int main(void){
    int ingrams[10];
    int i = 0;
    for(i = 0 ; i < 10 ; i++){
        scanf("%d", &ingrams[i]);
    }
    printf("\n");
    scanf("%d",&i);
    printf("%d",ingrams[i]);
    return 0;
}
