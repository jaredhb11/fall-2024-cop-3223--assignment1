#include <stdio.h>
#include <math.h>

#define PI 3.14159

//gcc fracturing.c && ./a.out
//gcc fracturing.c -lm && ./a.out

int inputx1() {
    int x1 = 0;
    printf("Enter x value of point 1 (x1) : ");
    scanf("%d", &x1);

    return x1;
}

int inputy1() {
    int y1 = 0;
    printf("Enter y value of point 1 (y1) : ");
    scanf("%d", &y1);

    return y1;
}

int inputx2() {
    int x2 = 0;
    printf("Enter x value of point 2 (x2) : ");
    scanf("%d", &x2);

    return x2;
}

int inputy2() {
    int y2 = 0;
    printf("Enter y value of point 2 (y2) : ");
    scanf("%d", &y2);

    return y2;
}




double calculateDistance() {

    int x1 = inputx1();
    int y1 = inputy1();
    int x2 = inputx2();
    int y2 = inputy2();
    double distance = 0;

    //printf("Enter x value of point 1 (x1) : ");
    //scanf("%d", &x1);
    //printf("Enter y value of point 1 (y1) : ");
    //scanf("%d", &y1);
    //printf("Enter x value of point 2 (x2) : ");
    //scanf("%d", &x2);
    //printf("Enter y value of point 2 (y2) : ");
    //scanf("%d", &y2);

    printf("Point #1 entered: x1 = %d; y1 = %d\n", x1,y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", x2,y2);

    distance = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));

    printf("The distance between the two points is %lf\n", distance);

    return distance;
}

double calculatePerimeter() {
    double distance = calculateDistance();

    double perimeter = distance * PI; 

    printf("The area of the city encompassed by your request is %lf\n", perimeter);

    return 2.0;
}

double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2;

    double area = PI * pow(radius,2);

    printf("The area of the city encompassed by your request is %lf\n", area);

    return 3.0;
}

double calculateWidth() {
    double distance = calculateDistance();

    printf("The width of the city encompassed by your request is %lf\n", distance);

    return 1.0;
}

double calculateHeight() {
    double distance = calculateDistance();

    printf("The height of the city encompassed by your request is %lf\n", distance);

    return 1.0;
}

int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}







