//Program to check larger number of given 3 numbers
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter 3 numbers: "); // Input three numbers 
    scanf("%d %d %d", &a, &b, &c);

    
    if (a >= b && a >= c) {                         //It will check if a is greater
        printf("The largest number is %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The largest number is %d\n", b);    //It will check if b is greater
    } else {
        printf("The largest number is %d\n", c);    //As a and b are now greater then it will print c is greater
    }

    return 0;
}
