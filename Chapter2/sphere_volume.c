// Compute the volume of a sphere with a radius specified by the user
// Chapter 2, Exercise 2+3 of K.N. King's C Programming

#include <stdio.h>

int main(void)
{
    const float pi = 3.1415f;
    const float scale_factor = 4.0f / 3.0f;
    float radius, volume;
    printf("Please enter the radius of the sphere: ");
    scanf("%f", &radius);
    volume = scale_factor * pi * radius * radius * radius;
    printf("Volume: %f", volume);

    return 0;
}
