#include <stdio.h>
int main() {
    char c;
    int i;
    double d;
    char listChar[3];
    int listInt[3];
    double listDouble[3];

    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(double));
    return(0);
}

/*#include <stdio.h>
int main(){
    //! showMemory(start=65520)
    int a = 42;
    double d = 58.394;
    char c = 'r';
    int * addressOfA = &a;
    printf("address of a: %p\n", addressOfA);
    double * addressOfD = &d;
    printf("address of d: %p\n", addressOfD);
    char * addressOfC = &c;
    printf("address of c: %p\n", addressOfC);
    return 0;
}
#include <stdio.h>
int main(){
    //! showMemory(start=65520)
    double a = 42.98;
    double * addressOfA = &a;
    printf("At the address %p there is the value %.2lf\n",addressOfA,* addressOfA);
    char c = 'm';
    char * addressOfC = &c;
    char d = * addressOfC;
    * addressOfA = 32;
    * addressOfA = * addressOfA + 1;
    printf("At the address %p there is the value %.2lf\n",addressOfA,* addressOfA);
    printf("variable a is: %lf", a);
    return 0;
}

*/
