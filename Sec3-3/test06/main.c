#include <stdio.h>
int main() {
    //! showMemory(start=65520)
    int arr[3] = {15, 16, 17};
    printf("%p\n",arr);
    int * ptr = arr;
    * ptr = 2; // * arr   0R  arr[0]
    * (ptr + 1) = 3; // * (arr + 1)   OR  arr[1]
    * (ptr + 2) = 5;// * (arr + 2)   OR arr[2]
    for (int i=0; i<3; i++){
        printf("%d th element of array is %d\n", i, arr[i]);
    }
    return 0;
}


/*
int array[] = {4, 6, 12, -5, -7, 3, 1, 0, -10};
int *ptr1, *ptr2;
ptr1 = array+2;
ptr2 = &ptr1[5];
*/
