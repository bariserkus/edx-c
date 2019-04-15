#include <stdio.h>
int main(void) {
    char word[50];
    int i, j, mid;
    scanf("%s", word);
    j=0;
    while(word[j]!='\0'){
        j++;
    }
    if (j%2==0){
        mid=j/2-1;
    } else {
        mid=j/2;
    }
    //printf("%c", word[mid]);
    i=0;
    while (word[i]!='t'&&word[i]!='T'&&i!=j){
        //printf("i=%d, j=%d, %c\n", i, j, word[i]);
        //system("pause");
        i++;
    }

        if (i<=mid){
            printf("%d",1);
        } else if (i>mid&&i<j){
            printf("%d", 2);
        } else if (i==j){
            printf("%d", -1);
        }
    return 0;
}
