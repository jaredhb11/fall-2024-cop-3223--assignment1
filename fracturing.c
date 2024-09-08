#include <stdio.h>
#include <math.h>

#define PI 3.14159

//gcc fracturing.c && ./a.out
//gcc fracturing.c -lm && ./a.out

double calculateDistance() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    double distance = 0;

    printf("Enter x value of point 1 (x1) : ");
    scanf("%d", &x1);
    printf("Enter y value of point 1 (y1) : ");
    scanf("%d", &y1);
    printf("Enter x value of point 2 (x2) : ");
    scanf("%d", &x2);
    printf("Enter y value of point 2 (y2) : ");
    scanf("%d", &y2);

    printf("Point #1 entered: x1 = %d; y1 = %d\n", x1,y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", x2,y2);

    distance = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));

    printf("The distance between the two points is %lf\n", distance);

    return distance;
}

double calculatePerimeter() {
    double distance = calculateDistance();

    double perimeter = distance * PI; 

    printf("The disfasdfasdfsadfadfasdfsadfasdfints is %lf\n", perimeter);

}


int main(int argc, char **argv) {

    //calculateDistance();
    calculatePerimeter();



    return 0;
}







