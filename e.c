//write a program to create a calculater using switch statement

#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second digit\n");
    scanf("%d",&b);
    printf("press 1 for addition\npress 2 for subtraction\npress 3 for multiplication\npress 4 for division\n");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("%d is your answer",a+b);
        break;
    case 2:
    printf("%d is your answer",a-b);
        break;
    case 3:
    printf("%d is your answer",a*b);
        break;
    case 4:
    printf("%.2f is your answer",a/b);
        break;
    
    default:
    printf("Invalid");
        break;
    }
return 0;
}

