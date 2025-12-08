/*Write a C program to enter length in centimeter and convert it into meter and kilometer.
Input :
Enter the length in centimeter : 50000
Output:
Length in meter : 500
Length in kilometer: 0.5*/

#include <stdio.h>
int main(){
    float length;
    // input
    printf("Enter the length in centimeter : ");
    scanf("%f", &length);

    // output
    printf("Length in meter : %.0f\n", length/100);
    printf("Length in meter : %.1f\n", length/100000);
    
    return 0;
}