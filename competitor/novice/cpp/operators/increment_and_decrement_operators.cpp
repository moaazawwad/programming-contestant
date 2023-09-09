#include <bits/stdc++.h>
using namespace std;

#define FIO freopen("input.txt", "r", stdin);

/* Increment and Decrement Operators
 * C++ also provides increment and decrement operators respectively.
 *    ++ increases the value of the operand by 1
 *    -- decreases it by 1
 */

int main(int argc, char const *argv[]) {
  FIO;

  int x;
  scanf("%d", &x);

  // ++ prefix, postfix
  // -- prefix, postfix

  printf("++x = %d\n", ++x);  // increment first, print second
  printf("x++ = %d\n", x++);  // print first, increment second
  printf("x-- = %d\n", x--);  // print first, decrement second
  printf("--x = %d\n", --x);  // decrement first, print second

  return 0;
}