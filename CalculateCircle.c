#include<stdio.h>
int main(void)
{
    float diam, circum, area, radius;

    printf("Enter Radius: ");
    scanf("%f",&radius);

    if (radius >= 1)
    {
        diam = radius * 2;
        printf("The Diameter of the circle is: %f\n ",diam);
        circum = 2 * 3.14159 * radius;
        printf("The Circumference of the circle is: %f\n ",circum);
        area = 3.14159 * (radius * radius);
        printf("The Area of the circle is: %f\n ",area);

    }

    else
        printf("You cannot enter anything less than 1 for the radius!!\n");

}
