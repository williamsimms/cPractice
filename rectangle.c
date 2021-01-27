#include <stdio.h>

int main() {
    double length = 0.0;
    double width = 0.0;
    double perimeter = 0.0;
    double area = 0.0;

    printf("Enter the width of the rectangle in metres. \n");

    scanf("%le", &width);

    printf("Enter the length of the rectangle in metres. \n");

    scanf("%le", &length);

    area = length * width;
    perimeter = length + width * 2;

    printf("The width of the rectangle is %.2f metres, the length of the rectangle is %.2f metres , the area of the rectangle is %f metres , and the perimeter of the rectangle is %f metres.",width,length,area,
           perimeter);

    return 0;
}