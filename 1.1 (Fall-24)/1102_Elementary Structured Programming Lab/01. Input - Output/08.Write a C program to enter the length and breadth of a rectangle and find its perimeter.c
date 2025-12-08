/*Write a C program to enter the length and breadth of a rectangle and find its perimeter.*/

#include <stdio.h>
int main(){
    float length, breadth;
    // input
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter breadth: ");
    scanf("%f", &breadth);

    // output
    printf("Perimeter of the rectangle: %.2f", 2 * (length + breadth));

    return 0;
}