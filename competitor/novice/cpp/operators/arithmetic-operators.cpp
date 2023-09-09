#include <bits/stdc++.h>
using namespace std;

#define FIO freopen("input.txt", "r", stdin);

/* Arithmetic operators
 * are used to perform arithmetic operations on variables and data.
 * Operator | Operation
 *    +    	| Addition
 *    -	    | Subtraction
 *    *	    | Multiplication
 *    /	    | Division
 *    %	    | Modulo Operation (Remainder after division)
 */

int main(int argc, char const *argv[]) {
  FIO;

  int n, m;
  scanf("%d %d", &n, &m);

  printf("%d\n", n + m);
  printf("%d\n", n - m);
  printf("%d\n", n / m);
  printf("%d\n", n * m);
  printf("%d\n", n % m);

  return 0;
}
