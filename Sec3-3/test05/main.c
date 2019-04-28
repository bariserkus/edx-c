#include <stdio.h>

//Write your function prototype here
void workage(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here
	workage(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here
void workage(int * a){
    if (*a<=20){
        *a=*a*2;
    } else if (*a>20){
        *a=*a-10;
    }

}
