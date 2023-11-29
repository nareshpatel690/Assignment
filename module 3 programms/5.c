#include<stdio.h >
    int main(){
    int year;

    printf("enter a year\n");
    scanf("%d",& year);


    if (year % 4 == 0 || year % 4 != 0) {
        printf("year is leap year", year);

    }
    else {
        printf("year is not leap year", year);
    }
}