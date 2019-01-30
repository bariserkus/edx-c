#include <stdio.h>

int main(void){
    char in, out;
    int i, j, k, row, col, nout, nin;
    scanf("%c", &in);

    row = 5;
    col = 9;
    //in = '#';
    out = '+';
    nin = 1;
    for (i=0; i<row; i++){
        nout = (col - nin)/2;
        for (j=0; j<nout; j++){printf("%c", out);}
        for (k=0; k<nin; k++){printf("%c", in);}
        for (j=0; j<nout; j++){printf("%c", out);}
        printf("\n");
        nin = nin + 2;
    }

    return 0;
}

