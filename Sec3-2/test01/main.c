#include <stdio.h>
int byteTotal(int, char);
int main() {
    char typ, err;
    int i, n, nData, total, tempTotal;

    scanf("%d", &nData);

    total=0; err='o';
    for (i=0; i<nData; i++){
        scanf("%d %c", &n, &typ);
        tempTotal = byteTotal(n, typ);
        total = total + tempTotal;
        if (tempTotal == -1){
            err = 'e';
        }
    }
    if (err=='o'){
        printf("%d bytes", total);
    } else if (err=='e'){
        printf("Invalid tracking code type");
    }

    return(0);
}

int byteTotal(int n, char c){
    if (c=='c'){
        return sizeof(char)*n;
    } else if (c=='i'){
        return sizeof(int)*n;
    } else if (c=='d'){
        return sizeof(double)*n;
    } else{
        return -1;
    }
}

/*
#include <stdio.h>
int main(void)
{
	char type;
	int num, length, i;
	int total = 0;

	scanf("%d", &num);


	for(i = 0; i < num; i++){

        scanf("%d %c", &length, &type);

        if(type == 'i'){
                total += length*sizeof(int);
        }
        else if(type == 'd'){
            total += length*sizeof(double);
        }
        else if(type == 'c'){
            total += length*sizeof(char);
        }
        else{
            printf("Invalid tracking code type");
            return 0;
        }
	}

	printf("%d bytes", total);

	return 0;
}
*/

/*
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

    printf("%zu\n", sizeof(c));
    printf("%zu\n", sizeof(i));
    printf("%zu\n", sizeof(d));

    printf("%zu\n", sizeof(listChar));
    printf("%zu\n", sizeof(listInt));
    printf("%zu\n", sizeof(listDouble));
    return(0);
}
*/
