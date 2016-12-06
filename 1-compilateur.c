#include <stdio.h>
int main() {
 int nombre = 358;
 int rem, rev = 0;
 while (nombre >= 1) {
  rem = nombre % 10;
  rev = rev * 10 + rem;
  nombre = nombre / 10;
 }
 printf("%d\n", rev);
}
// programme écrit par Rémi Sharrock
