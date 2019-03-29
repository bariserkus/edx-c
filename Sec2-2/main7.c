#include <stdio.h>
int main(void) {
    int numbers[10], maxnum=10000;
    int n, i, imax=0;
    scanf("%d", &n);
    for (i=0;i<n;i++){
        scanf("%d", &numbers[i]);
        if(numbers[i]>maxnum){
            imax++;
        }
    }
    printf("%d", imax);

}
