#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
void readDate(struct date * a){
    scanf("%d", &(*a).year);
    scanf("%d", &(*a).month);
    scanf("%d", &(*a).day);
}

void printDate(struct date a){
    printf("%02d/%02d/%4d\n", a.month, a.day, a.year);
}

struct date advanceDay(struct date a){
    if (a.month==1||a.month==3||a.month==5||a.month==7||a.month==8||a.month==10){
        if(a.day==31){
            a.day = 1;
            a.month++;
        } else {
            a.day++;
        }
    } else if (a.month==4||a.month==6||a.month==9||a.month==11){
        if(a.day==30){
            a.day = 1;
            a.month++;
        } else {
            a.day++;
        }
    } else if (a.month==2){
        if(a.day==28){
            a.day = 1;
            a.month++;
        } else {
            a.day++;
        }
    } else if (a.month==12){
        if(a.day==31){
            a.day = 1;
            a.month = 1;
            a.year++;
        } else {
            a.day++;
        }
    }
    return a;
};
