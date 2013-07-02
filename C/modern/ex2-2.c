/* Computes the volume of a sphere */
#include <stdio.h>
#define Volume_Coefficiant (4.0f/3.0f)

int main(void)
{
    int radius;
    float volume;
    printf("Enter radius: ");
    scanf("%d", &radius);

    volume = Volume_Coefficiant * 3.14f * radius * radius * radius;

    printf("Volume: %.2f\n", volume);

    return 0;
}
