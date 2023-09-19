#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct coordinates{
    float x;
    float y;
};
int main()
{
    struct coordinates coordinates1, coordinates2;

    printf("Entrer coordone 1:");
    scanf("%f %f", &coordinates1.x,&coordinates1.y);

    printf("Entrer coordone 2:");
    scanf("%f %f", &coordinates2.x,&coordinates2.y);

    float distance = sqrt(pow(coordinates2.x-coordinates1.x,2) + pow(coordinates2.y-coordinates1.y,2));

    printf("Ladistance est: %f\n", distance);
    return 0;
}
