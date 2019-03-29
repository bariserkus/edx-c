#include <stdio.h>
int main(void) {
    int numb, gnumb, nguess=0;
    scanf("%d",&numb);
    gnumb=2*numb;
    while (gnumb!=numb) {
        nguess++;
        scanf("%d",&gnumb);
        if(gnumb<numb){
            printf("it is more\n");
        }
        else if(gnumb>numb){
            printf("it is less\n");
        }
    }
    printf("Number of tries needed:\n%d",nguess);
    return 0;
}
