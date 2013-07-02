/*
 * Divides an amount into the least amount of dollars required.
 */
#include <stdio.h>

int main(void)
{
    int divisor;
    int count20, count10, count5, count2, count1;

    printf("Enter a dollar amount: ");
    scanf("%d", &divisor);

    while (divisor % 20 >= 20) {
        divisor = (divisor % 20) - 20;
        count20 = count20 +1;
    }
    while (divisor % 10 >= 10) {
        divisor = (divisor % 10) - 10;
        count10 = count10 +1;
    }
    while (divisor % 5 >= 5) {
        divisor = (divisor % 5) - 5;
        count5 = count5 +1;
    }
    while (divisor % 2 >= 2) {
        divisor = (divisor % 2) - 2;
        count2 = count2 +1;
    }
    while (divisor - 1 > 0) {
        divisor = divisor -1;
        count1 = count1 + 1;
    }

    printf("$20s: %d\n $10s: %d\n $5s: %d\n $2s: %d\n $1s: %d",
           count20, count10, count5, count2, count1);
}
