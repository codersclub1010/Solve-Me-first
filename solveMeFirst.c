#include <stdio.h>
#include <stdlib.h>

int solveMeFirst(int a, int b) {
    int sum;
    sum = a + b;
    return sum;
}

int main() {
    int num1,num2;//Constraints for taking user input
    printf("Enter first number (1 to 1000): ");
    scanf("%d",&num1);
    if(num1>1000){
        printf("Invalid input");
        printf("Enter the first number Again : ");
        scanf("%d",&num1);
    }
    printf("Enter second number (1 to 1000): ");
    scanf("%d",&num2);
    if(num2>1000){
        printf("Invalid input");
        printf("Enter the second number Again : ");
        scanf("%d",&num2);
    }
    int sum; 
    sum = solveMeFirst(num1,num2);
    printf("Sum of two number is : %d",sum);
    return 0;
}
