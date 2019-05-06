#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

// Write your readDate() and printDate() functions here

void readDate(struct date * a){
    scanf("%d", &(*a).year);
    scanf("%d", &(*a).month);
    scanf("%d", &(*a).day);
}

void printDate(struct date a){
    printf("%02d/%02d/%4d", a.month, a.day, a.year);
}
