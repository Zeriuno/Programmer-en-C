#include <stdio.h>
#include <limits.h>

int main()
{
  int imax = INT_MAX;
  int imin = INT_MIN;
  printf("imax = %d\n", imax);
  printf("imin = %d\n", imin);
  printf("imax + 1= %d\n", imax + 1);
  imax += 1;
  printf("imax = %d\n", imax);
  printf("imin - 1 = %d\n", imin - 1); 
  return 0;
}
