// WAP TO CALCULATE DISTANCE BETWEEN TWO COORDINATES USING STRUCTURE.

#include <stdio.h>
#include <math.h>

struct dist_c {
    int x1, y1;
    int x2, y2;
    int distance;
};

int main()
{
    struct dist_c c;
    printf("ENTER THE FIRST COORDINATE : ");
    scanf("%d %d", &c.x1, &c.y1);

    printf("ENTER THE SECOND COORDINATE : ");
    scanf("%d %d", &c.x2, &c.y2);

    c.distance = sqrt((c.x1 - c.x2)*(c.x1 - c.x2) + (c.y1 - c.y2)*(c.y1 - c.y2));

    printf("DISTANCE IS %d", c.distance);

    return 0;
}