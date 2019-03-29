#include <stdio.h>
int main(void) {
    //! showArray(word, cursors[i])
    char word[4]; //arrray of characters (string)
    printf("Please enter a word with 3 letters: ");
    scanf("%s", word);
    printf("The word read is: %s.\n", word);
    return 0;
}
