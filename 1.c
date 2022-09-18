#include <stdio.h>

int main()
{
    float r, h, l, pi = 3.14, ss, sf, v;
    printf("radius = ");
    scanf_s("%f", &r);
    printf("forming line = ");
    scanf_s("%f", &l);
    printf("heigt = ");
    scanf_s("%f", &h);
    ss = pi * r * l;
    printf("side s = %f\n", ss);
    sf = pi * r * l + pi * r * r;
    printf("full s = %f\n", sf);
    v = static_cast<float>(1) / 3 * pi * r * r * h;
    printf("v = %f", v);
    return 0;
}