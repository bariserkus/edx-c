#include <stdio.h>
int main(void) {
    //! showArray(word, cursors=[i])
    char word[51];
    int i = 0;
    scanf("%s", word);
    while (word[i]!='\0')
        i++;
    if (i%2!=0) {printf("%d",2);}
    else{printf("%d",1);}
    return 0;
}
