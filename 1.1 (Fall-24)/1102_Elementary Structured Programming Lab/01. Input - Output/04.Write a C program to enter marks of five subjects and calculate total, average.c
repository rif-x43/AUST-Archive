/*Write a C program to enter marks of five subjects and calculate total, average.
Input :
Enter marks of 1st subject : 90
Enter marks of 2nd subject : 100
Enter marks of 3rd subject : 95
Enter marks of 4th subject : 95
Enter marks of 5th subject : 80
Output:
Total marks : 460
Average marks: 92*/

#include <stdio.h>
int main(){
    float sub1, sub2, sub3, sub4, sub5, total;
    // input
    printf("Enter marks of 1st subject : ");
    scanf("%f", &sub1);
    printf("Enter marks of 2nd subject : ");
    scanf("%f", &sub2);
    printf("Enter marks of 3rd subject : ");
    scanf("%f", &sub3);
    printf("Enter marks of 4th subject : ");
    scanf("%f", &sub4);
    printf("Enter marks of 5th subject : ");
    scanf("%f", &sub5);

    // process
    total = sub1 + sub2 + sub3 + sub4 + sub5;

    // output
    printf("Total marks : %.0f\n", total);
    printf("Average marks: %.0f\n", total / 5);

    return 0;
}