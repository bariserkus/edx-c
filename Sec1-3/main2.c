#include <stdio.h>

int main(void){
    char letter1, letter2;
    int numb;
 /*   printf("Enter two characters (no space):");
    scanf("%c%c", &letter1, &letter2);
    printf("I read the letters %c and %c.\n", letter1, letter2);

    printf("Enter two characters (with space):");
    scanf("%c %c", &letter1, &letter2);
    printf("I read the letters %c and %c.\n", letter1, letter2);

    printf("Enter two characters (with comma):");
    scanf("%c,%c", &letter1, &letter2);
    printf("I read the letters %c and %c.\n", letter1, letter2); */

    printf("Enter a character and an integer");
    scanf("%c %d",&letter1, &numb);
    printf("I read the letter %c and number %d.\n", letter1, numb);
    return 0;
}

