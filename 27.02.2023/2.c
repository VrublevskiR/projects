#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%o", &a);
    for(int i = 0; i<3;i++)
    {
    if (a & (1<<(8-i*3)))
      printf("r");
    else
      printf("-");
    if (a & (1<<(7-i*3)))
      printf("w");
    else
      printf("-");
    if (a & (1<<(6-i*3)))
      printf("x");
    else
      printf("-");
    }        
    return 0;
}