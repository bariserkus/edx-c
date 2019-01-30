#include <stdio.h>
int main(void) {
    int grade, TotalGrades = 0;
    int nGrades;
    int i;
    double average;
    scanf("%d", &nGrades);
    for(i=0; i<nGrades; i++){
        scanf("%d", &grade);
        TotalGrades = TotalGrades + grade;
    }
    average = (double) TotalGrades/nGrades;
    printf("%.2lf", average);

    return 0;
}
