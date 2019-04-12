#include <stdio.h>

int main(void){
    int nWords, i, j, maxLen;
    char word[100];
    scanf("%d", &nWords);
    maxLen=0;
    for (i=0; i<nWords; i++){
        scanf("%s", word);
        //printf("The words is : %s\n", word);
        j=0;
        while(word[j]!='\0'){
            j++;
        }
        //printf("Length=%d\n", j);
        if (maxLen<j){
            maxLen=j;
        }
    }
    printf("%d", maxLen);
    return 0;
}
