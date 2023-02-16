//

#include <stdio.h>

int main() {
    int a;
    printf("Enter your maths marks\n");
    scanf("%d",&a);
    int b;
    printf("Enter your python marks\n");
    scanf("%d",&b);
    int c;
    printf("Enter your chemistry marks\n");
    scanf("%d",&c);
    int avg;
    avg=(a+b+c)/3;
    if(avg>90)
    {
        printf("you have got grade O and your average is %d",avg);
    }
    else if (avg>80)
    {
        printf("you have got grade A and your average is %d",avg);
    }
    else if (avg>70)
    {
        printf("you have got grade B and your average is %d",avg);
    }
    else if (avg>60)
    {
        printf("you have got grade C and your average is %d",avg);
    }
    else if (avg>50)
    {
        printf("you have got grade D and your average is %d",avg);
    }
    else
    {
        printf("you have to give reapear and your average is %d",avg);
    }
    return 0;
}