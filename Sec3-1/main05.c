#include <stdio.h>
int min(int, int);
int main(void) {
    int i, list[50], n, minval;
    scanf("%d", &n);
    minval=100000;
    for (i=0;i<n;i++){
        scanf("%d", &list[i]);
        minval = min(minval,list[i]);
    }
    printf("%d", minval);
	return 0;
}

int min(int a, int b) {
    if (a <= b) {
        return a;
    } else return b;
}
