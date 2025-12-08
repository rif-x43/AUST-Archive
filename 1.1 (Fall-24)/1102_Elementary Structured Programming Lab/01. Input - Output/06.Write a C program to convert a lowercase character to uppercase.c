/*Write a C program to convert a lowercase character to uppercase.
Input :
Enter the lowercase letter : c
Output:
Uppercase : C*/

#include <stdio.h>
int main(){
    char lowerCase, upperCase;
    // input
    printf("Enter the lowercase letter : ");
    scanf("%c", &lowerCase);

    // process
    upperCase = lowerCase - 32; // ascii value difference

    // output
    printf("Uppercase : %c", upperCase);

    return 0;
}