#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *add_res =(int *)malloc(n*sizeof(int));
    for(int i = 0; i < n; i ++)
    {
        scanf("%X", add_res[i]);
    }

    int log_res;
    scanf("%X", &log_res);

    int page_number = (log_res >>26)&(0x3F);
    int page_off_set = log_res & 0X3FFFFFF;
    if (page_number >= n)
    {
        printf("error\n");
    } 

    int fiz_res = add_res[page_number]+page_off_set;
    printf("%x\n", &fiz_res);
    free(add_res);
    return 0;
}