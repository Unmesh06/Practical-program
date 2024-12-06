//Program for factorial
#include <stdio.h>

int main() {
    int a;
    int fact=1;
    printf("Enter a positive number: ");  // enter number for factorial
    scanf("%d", &a);

       
        for (int i = 1; i <= a;i++) 
        {
            fact*= i;
        }
       
        printf("Factorial of %d = %d\n", a, fact);
    

    return 0;
}
