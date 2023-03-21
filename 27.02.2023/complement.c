#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = 0;
  scanf("%d", &a);
  printf("%d", (~a)|1);

}