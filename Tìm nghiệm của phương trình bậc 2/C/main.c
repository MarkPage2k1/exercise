#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Tim nghiem cua phuong trinh bac 2: ax2 + bx + c = 0. \n");
    printf("Nhap a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    float detal = b*b - 4*a*c;
    if (detal > 0)
    {
        printf("Phuong trinh co hai nghiem: \n");
        printf("x = %f \n", (-b + sqrt(detal)) / 2*a);
        printf("x = %f \n", (-b - sqrt(detal)) / 2*a);
    }
    else if (detal == 0)
    {
        printf("Phuong trinh co nghiem kep: \n");
        printf("x = %f",  -b / 2*a);
    }
    else 
    {
        printf("Phuong trinh vo nghiem!");
    }
    return 0;
}