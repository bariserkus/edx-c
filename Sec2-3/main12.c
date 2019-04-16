#include<stdio.h>
int main(void) {
    //! showArray(list, cursors=[i])
    // Sorting from smallest to largest
    char word[50], swap;
    int i, j, n, count;

    scanf("%s", word);

    n=0;
    while(word[n]!='\0'){
        n++;
    }

    for (j=0; j<n-1; j++) {
        for (i=0; i<n-1; i++) {
            if (word[i] > word[i+1]) {
                swap = word[i];
                word[i] = word[i+1];
                word[i+1] = swap;
                printf("%c", swap);
            }
        }
    }

    //printf("\nSorted list: \n");
    //printf("%s\n", word);

    count=0;
    for (j=0; j<n-1; j++){
        if (word[j]==word[j+1]){
            count++;
            while(word[j]==word[j+1]){
                j++;
            }
        }
    }
    printf("%d", count);

    return 0;
}
