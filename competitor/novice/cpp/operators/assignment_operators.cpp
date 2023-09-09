#include <bits/stdc++.h>
using namespace std;

#define FIO freopen("input.txt", "r", stdin);

/* Assignment Operators
 *   Operator | Example     | Same As
 *   =        | x = 5       | x = 5
 *   +=       | x += 3      | x = x + 3
 *   -=       | x -= 3      | x = x - 3
 *   *=       | x *= 3      | x = x * 3
 *   /=       | x /= 3      | x = x / 3
 *   %=       | x %= 3      | x = x % 3
 *   &=       | x &= 3      | x = x & 3
 *   |=       | x |= 3      | x = x | 3
 *   ^=       | x ^= 3      | x = x ^ 3
 *   >>=      | x >>=       | x = x >> 3
 *   <<=      | x <<=       | x = x << 3
 */

int main(int argc, char const *argv[]) {
  FIO;

  int n, m;
  scanf("%d %d", &n, &m);

  printf("%d\n", n + m);
  printf("%d\n", n);

  n = n + m;
  printf("%d\n", n);

  n += m;
  printf("%d\n", n);

  return 0;
}