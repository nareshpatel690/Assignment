#include<stdio.h >
    int main(){
    int a, b;
    char c;
    float e, f;
    printf("Calculate here\n");
    scanf("%d %c %d",& a,& c,& b);

    e = a;
    f = b;

    if (c == '+') {
        printf("Addition is %d", a + b);
    }
    else if (c == '-') {
        printf("substraction is %d", a - b);
    }
    else if (c == '*') {
        printf("Mutiplication is %d", a * b);
    }
    else if (c == '/') {

        printf("Division is %f", e / f);
    }
    else {
        printf("Try again");

    }

}