#include <stdio.h>

int main() {
    int num1;
    int num2;
    printf("Enter the first number: \n");
    scanf("%d", &num1);
    printf("Enter the second number: \n");
    scanf("%d", &num2);
    int sum = num1 + num2;
    printf("%d + %d = %d", num1, num2, sum);


}