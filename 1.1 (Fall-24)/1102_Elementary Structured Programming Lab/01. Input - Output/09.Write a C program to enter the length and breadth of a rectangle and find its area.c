/*Write a C program to enter the length and breadth of a rectangle and find its area.*/

#include <stdio.h>
int main(){
    float length, breadth;
    // input
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);
    
    // output
    printf("Area of the rectangle: %.2f", length * breadth);

    return 0;
}