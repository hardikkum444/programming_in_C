#include <stdio.h>

int main() {
    int month;
    printf("Enter a number of month between 0 to 11\n");
    scanf("%d",&month);
    switch(month)
    {
        case 0:
        printf("January");
        break;
        case 1:
        printf("February");
        break;
        case 2:
        printf("March");
        break;
        case 3:
        printf("April");
        break;
        case 4:
        printf("May");
        break;
        case 5:
        printf("June");
        break;
        case 6:
        printf("July");
        break;
        case 7:
        printf("August");
        break;
        case 8:
        printf("September");
        break;
        case 9:
        printf("October");
        break;
        case 10:
        printf("November");
        break;
        case 11:
        printf("December");
        break;
        default:
        printf("Invalid");
        break;

    }
    return 0;
}

    



