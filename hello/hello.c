#include <stdio.h>
#include <stdlib.h>

int main(int agrc, char *argv[])
{
    long z = strtol(argv[1],NULL,27);
    double x = 0.0, res;

    long y = 0;
    scanf("%lf %lx", &x,&y);
    res = x + (double)y + (double)z;

    printf("%.3lf", res);
    return 0;
}
