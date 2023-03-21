#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    scanf("%x", &a);
    const char* data[6][4] = {{"fe", "ma","0","0"},
                        {"du", "cl","0","0"},
                        {"nh", "ha","0","0"}, 
                        {"sk", "tr","0","0"},
                        {"bn", "rd", "bw", "bk"}, 
                        {"bu", "he", "gy", "da"}};
    for(int i = 0; i<6; i++)
    {
        int res = 0;
        if(i < 4)
           res = (a & (1<<i))>>i;
        else if (i == 4)
           res = (a & (3<<i))>>i;
        else 
           res = (a & (3<<6))>>6;
        printf("%s ", data[i][res]);
    }
}