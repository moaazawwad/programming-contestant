#include <bits/stdc++.h>
using namespace std;

#define FIO freopen("input.txt", "r", stdin);

/*
 * sizeof => return size of the variable in memory
 */

int main(int argc, char const *argv[]) {
  FIO;

  int n;
  scanf("%d", &n);
  printf("%d\n", 8 * sizeof(n));

  long long m;
  scanf("%lld", &m);
  printf("%d\n", 8 * sizeof(m));

  bool b;
  scanf("%d", &b);
  printf("%d\n", 8 * sizeof(b));

  char c;
  scanf("%c", &c);
  printf("%d\n", 8 * sizeof(c));

  double f;
  scanf("%Lf", &f);
  printf("%d\n", 8 * sizeof(f));

  long double d;
  scanf("%Lf", &d);
  printf("%d\n", 8 * sizeof(d));

  return 0;
}