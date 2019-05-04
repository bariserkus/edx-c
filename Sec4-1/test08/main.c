#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;

    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

/* Write your function behind() here: */

void behind(int* arr, int n){
    int i, max=0;
    for (i=0;i<n; i++){
        if (arr[i]>max){max=arr[i];}
    }
    for (i=0;i<n; i++){
        arr[i] = max-arr[i];
    }

}
