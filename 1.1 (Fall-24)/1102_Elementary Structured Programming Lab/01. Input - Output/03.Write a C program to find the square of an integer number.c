/*Write a C program to find the square of an integer number.
Input :
Enter the number : 5
Output:
Square of the number : 25*/

#include <stdio.h>
int main(){
    int number;
    // input
    printf("Enter the number : ");
    scanf("%d", &number);

    // output
    printf("Square of the number : %d\n", number * number);

    return 0;
}