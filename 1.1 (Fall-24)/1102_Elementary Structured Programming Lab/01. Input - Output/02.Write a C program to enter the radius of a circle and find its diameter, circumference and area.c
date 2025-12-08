/*Write a C program to enter the radius of a circle and find its diameter, circumference and area.
Input :
Enter the radius : 5
Output:
Diameter of the circle: 10
Circumference of the circle: 31.42
Area of the circle: 78.54*/

#include <stdio.h>
int main(){
    float radius;
    const float pi = 3.1416;
    // input
    printf("Enter the radius : ");
    scanf("%f", &radius);

    // output
    printf("Diameter of the circle: %.0f\n", radius * 2);
    printf("Circumference of the circle: %.2f\n", 2 * pi * radius);
    printf("Area of the circle: %.2f\n", pi * radius * radius);

    return 0;
}