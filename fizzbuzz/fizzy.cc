#include <stdio.h>
int i;
int main (void) {
    for (i=0; i<101; i++) {
        if (i % 3 ==0) {
            printf("FIZZ\n");
        }
        else if (i % 5 == 0) {
            printf("BUZZ\n");
        }
        else if (i % 3 == 0 && i % 5 ==0) {
            printf ("FIZZBUZZ\n");
        }
        else {printf("%i\n", i);}
    }
}
