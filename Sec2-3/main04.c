#include <stdio.h>
int main(void) {
    int nnames, i;
    char name[20], last[20];
    scanf("%d", &nnames);
    for (i=0; i<nnames; i++){
        scanf("%s %s", name, last);
        printf("%s %s\n", last, name);
    }
    return 0;
}
