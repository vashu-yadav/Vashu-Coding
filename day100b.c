
#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };   // simple enum for 3 light states [web:23][web:17]

int main(void)
{
    enum TrafficLight light;

    printf("Enter light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", (int *)&light);

    switch (light) {
    case RED:
        printf("Stop\n");
        break;
    case YELLOW:
        printf("Wait\n");
        break;
    case GREEN:
        printf("Go\n");
        break;
    default:
        printf("Invalid value\n");
    }

    return 0;
}
