#include <bits/stdc++.h>
using namespace std;

#define FIO freopen("input.txt", "r", stdin);

/* Relational Operators
 * A relational operator is used to check the relationship between two operands.
 *
 * Operator | Meaning                  | Example
 * ==       | Is Equal                 | To 3 == 5 gives us false
 * !=       | Not Equal To             | 3 != 5 gives us true
 * >        | Greater Than             | 3 > 5 gives us false
 * <        | Less Than                | 3 < 5 gives us true
 * >=       | Greater Than or Equal To | 3 >= 5 give us false
 * <=       | Less Than or Equal To    | 3 <= 5 gives us true
 */

int main(int argc, char const *argv[]) {
  FIO;

  int a, b;
  scanf("%d %d", &a, &b);
  bool result = false;

  result = (a == b);
  printf("%d == %d is %d\n", a, b, result);

  result = (a != b);
  printf("%d != %d is %d\n", a, b, result);

  result = a > b;
  printf("%d > %d is %d\n", a, b, result);

  result = a < b;
  printf("%d < %d is %d\n", a, b, result);

  result = a >= b;
  printf("%d >= %d is %d\n", a, b, result);

  result = a <= b;
  printf("%d <= %d is %d\n", a, b, result);

  return 0;
}
