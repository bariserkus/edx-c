#include <stdio.h>
int byteTotal(int, char);
void convert(int);
int main() {
    char typ, err;
    int nData, total;

    scanf("%d", &nData);

    total=0; err='o';

        scanf("%c %d", &typ, &nData);
        total = byteTotal(nData, typ);
//        printf("Total bytes: %d\n", total);
        if (total == -1){
            err = 'e';
        }

    if (err=='o'){
        convert(total);
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

void convert(int a){
    if (a<1000){
        printf("%d B", a);
    } else if (a>=1000&&a<1000000){
        printf("%d KB and %d B", a/1000, a%1000);
    } else if (a>=1000000&&a<1000000000){
        printf("%d MB and %d KB and %d B", a/1000000, (a/1000)%1000, a%1000);
    }
return;
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
