#include <stdio.h>

int main() {
    int num, digit, maxDigit = -1;

    printf("Enter a number: ");
    scanf("%d", &num);
//	243
    num = (num < 0) ? -num : num;
//        = (243< 0)	? f    : 243


    while (num > 0) {
    	
        digit = num % 10;
//          3    = 2.43%10
        if (digit > maxDigit) {
//        if (2 > 4) {
            maxDigit = digit;
//            md = 4
        }
        num /= 10;
//        num = num/10;
//		   2.43 = 24.3/10;
    }

//    4

    printf("The maximum digit is: %d\n", maxDigit);
//    4

}
