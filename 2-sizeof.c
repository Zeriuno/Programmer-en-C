#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  long tabchar[18];
  printf("%zu\n", sizeof(tabchar));
  printf("%ld\n", LONG_MIN);
  long double tabld[12];
  printf("%zu\n", sizeof(tabld));
  printf("%Le\n", LDBL_MAX);
  return 0;
}
