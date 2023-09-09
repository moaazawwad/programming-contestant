#include <bits/stdc++.h>
using namespace std;

#define FIO freopen("input.txt", "r", stdin);

/* Bitwise Operators
 * In C++, bitwise operators are used to perform operations on individual bits.
 * They can only be used alongside char and int data types.
 *
 *
 * Operator | Description
 *  &       | Binary AND
 *  |       | Binary OR
 *  ^       | Binary XOR
 *  ~       | Binary One's Complement
 *  <<      | Binary Shift Left
 *  >>      | Binary Shift Right
 */

int main(int argc, char const *argv[]) {
  FIO;

  int n, m;
  scanf("%d %d", &n, &m);

  printf("%d & %d = %d\n", n, m, (n & m));
  printf("%d | %d = %d\n", n, m, (n | m));
  printf("%d ^ %d = %d\n", n, m, (n ^ m));
  printf("~%d = %d\n", n, ~n);
  printf("%d << 1 = %d\n", m, (m << 1));
  printf("%d >> 1 = %d\n", n, (n >> 1));

  return 0;
}
