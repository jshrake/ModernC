#include <stdio.h>

int main(void)
{
    int height, length, width, volume;
    float weight;
    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Etner width of box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = volume / 166.0f;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %f\n", weight);

    return 0;
}
