#include <stdio.h>
#include <stdlib.h>
int Evklid(int x, int y)
{
    if(x != y)
    {
        if(x > y)
        Evklid(x - y, y);
        else
        Evklid(x, y - x);
    }
    else 
    return x;
}

int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    int A[1024][1024];
    int B[1024][1024];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            A[i][j] = Evklid(i+1,j+1);
            B[i][j] = Evklid(n-i+1,n-j+1);
        }
    }
    int coun = 0;
    int S = 0;
    for(int i = 0; i<n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                S+=A[i][k]*B[k][j];
            }
            if(S % d == 0)
            coun++;
        }
    }
    printf("%d", coun);
    return 0;
}