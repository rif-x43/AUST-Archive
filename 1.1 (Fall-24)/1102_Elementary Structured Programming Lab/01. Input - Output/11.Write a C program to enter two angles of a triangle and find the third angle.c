/*Write a C program to enter two angles of a triangle and find the third angle.*/

#include <stdio.h>
int main(){
    float angle1, angle2;
    // input
    printf("Enter 1st angle of the triangle: ");
    scanf("%f", &angle1);
    printf("Enter 2nd angle of the triangle: ");
    scanf("%f", &angle2);

    // output
    printf("So, The 3rd angle of the triangle: %.2f", 180 - (angle1 + angle2));

    return 0;
}