#include <stdio.h>
void reset(int *);
int main() {
    //! showMemory(start=65520)
    int arr[3] = {15, 16, 17};
    reset(arr);
    for (int i=0; i<3; i++){
        printf("%d th element of array is %d\n", i, arr[i]);
    }

    return 0;
}
void reset(int * ptr){
    *(ptr + 0) = 0;
    *(ptr +1) = 0;
    *(ptr +2) = 0;
}
