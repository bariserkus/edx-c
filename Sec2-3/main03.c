#include <stdio.h>
int main(void) {
    //! showArray(word, cursors[i])
    char word[101]; //arrray of characters (string)
    int reps, i;
    scanf("%d %s", &reps, word);
    for (i=0; i<reps; i++){
        printf("%s\n", word);
    }
    return 0;
}
