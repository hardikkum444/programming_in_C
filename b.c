#include <stdio.h>

int main() {
    int day;
    printf("Enter a number of day between 0 to 6\n");
    scanf("%d",&day);
    switch (day)
    {
        default:
        printf("Invalid value");
        break;
        case 0:
        printf("Sunday");
        break;
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        
    }

    return 0;
}