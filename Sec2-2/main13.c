#include <stdio.h>
int main(void) {
    int maxtemp, mintemp, reading;
    scanf("%d %d",&mintemp, &maxtemp);
    reading=mintemp;
    while (reading!=-999) {
        scanf("%d",&reading);
        if(reading>=mintemp&&reading<=maxtemp&&reading!=-999){
            printf("Nothing to report\n");
        }
        else if(reading!=-999){
            printf("Alert!\n");
            reading=-999;
        }
    }
    return 0;
}
