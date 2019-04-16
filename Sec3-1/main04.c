// Fibonacci numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
#include <stdio.h>
void convert(int, char)
int main(void)
{
    char unit, ft[3]="ft", lbs[4]="lbs", F[2]="f";
    double val;
    int n, i;
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%lf %c", &val, &unit);

    }
    return 0;
}

void convert(double num, char un)
{
    char un, ft[3]="ft", lbs[4]="lbs", F[2]="f";
    if (unit=='m')
    {
        printf("%.6lf %s\n", 3.2808*num, ft);
    }
    else if (unit=='g')
    {
        printf("%.6lf %s\n", 0.002205*num, lbs);
    }
    else if (unit=='c')
    {
        printf("%.6lf %s\n", 32+1.8*num, F);
    }
}
