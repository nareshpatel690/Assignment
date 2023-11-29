#include<stdio.h >

    float r, area, base, h;
    int l, b, choice;
                            
    int triangle(){
    printf("Enter base and height of triangle\n");
    scanf("%f%f",& base,& h);
    printf("Area of Triangle is : %.2f\n", h * base / 2);
}
                            
    int rectangle(){
    printf("Enter length and breadth of rectangle\n");
    scanf("%d%d",& l,& b);
    printf("Area of Rectangle is : %d\n", l * b);
}
                            
    int circle(){
    printf("Enter radius of circle\n");
    scanf("%f",& r);
    area = 3.14 * r * r;
    printf("Area of circle is : %.2f\n", area);
}
    int main(){

    printf("Enter your choice\n");
    printf("Type 1 for circle\n");
    printf("Type 2 for triangle\n");
    printf("Type 3 for rectangle\n");
    scanf("%d",& choice);
    if (choice == 1) {
        circle();
    }
    else if (choice == 2) {
        triangle();
    }
    else if (choice == 3) {
        rectangle();
    }

}