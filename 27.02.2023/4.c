#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a = 0;
    unsigned int b = 0;
    unsigned int c = 0;
    unsigned int d = 0;

    scanf("%hhu.%hhu.%hhu.%hhu", &a, &b, &c, &d);

    unsigned int mask1 = 0;
    unsigned int mask2 = 0;
    unsigned int mask3 = 0;
    unsigned int mask4 = 0;

    scanf("%hhu.%hhu.%hhu.%hhu", &mask1, &mask2, &mask3, &mask4);

    printf("%hhu.%hhu.%hhu.%hhu", (a | ~(mask1)), (b | ~(mask2)), (c | ~(mask3)), (d | ~(mask4)));

}